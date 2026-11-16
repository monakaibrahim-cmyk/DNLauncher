#include "EtFileSystem.h"

#include "zlib.h"

#include <algorithm>
#include <cctype>
#include <cstring>

namespace
{
    std::string TrimAndLowerString(const char* szInput)
    {
        if (!szInput)
        {
            return std::string();
        }
        std::string str(szInput);
        // Trim leading and trailing ASCII whitespace matching 0x00424A50
        size_t start = str.find_first_not_of(" \t\r\n");
        if (start == std::string::npos)
        {
            return std::string();
        }
        size_t end = str.find_last_not_of(" \t\r\n");
        str = str.substr(start, end - start + 1);

        for (size_t i = 0; i < str.size(); ++i)
        {
            str[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(str[i])));
        }
        return str;
    }
}

CEtFileHandle::CEtFileHandle()
    : m_pData(nullptr)
    , m_dwReadOffset(0)
{
    std::memset(&m_FileInfo, 0, sizeof(m_FileInfo));
}

CEtFileHandle::~CEtFileHandle()
{
    if (m_pData)
    {
        delete[] m_pData;
        m_pData = nullptr;
    }
}

int CEtFileHandle::Read(void* pBuffer, int nSize)
{
    if (!m_pData || !pBuffer || nSize <= 0)
    {
        return 0;
    }

    if (m_dwReadOffset >= m_FileInfo.dwOriginalSize)
    {
        return 0;
    }

    DWORD dwRemain = m_FileInfo.dwOriginalSize - m_dwReadOffset;
    DWORD dwToRead = static_cast<DWORD>(nSize);
    if (dwToRead > dwRemain)
    {
        dwToRead = dwRemain;
    }

    std::memcpy(pBuffer, m_pData + m_dwReadOffset, dwToRead);
    m_dwReadOffset += dwToRead;
    return static_cast<int>(dwToRead);
}

bool CEtFileHandle::ExportFile(const char* szFileName) const
{
    const char* szTarget = (szFileName && szFileName[0] != '\0') ? szFileName : m_FileInfo.szFileName;
    if (!szTarget || szTarget[0] == '\0' || !m_pData)
    {
        return false;
    }

    FILE* fp = nullptr;
    if (fopen_s(&fp, szTarget, "wb") != 0 || !fp)
    {
        return false;
    }

    DWORD dwWriteSize = m_FileInfo.dwOriginalSize;
    size_t written = std::fwrite(m_pData, 1, dwWriteSize, fp);
    std::fclose(fp);
    return written == dwWriteSize;
}

CEtPackingFile::CEtPackingFile()
    : m_bReadOnly(false)
    , m_hFile(INVALID_HANDLE_VALUE)
    , m_pLog(nullptr)
{
    std::memset(&m_Header, 0, sizeof(m_Header));
    std::memset(m_szCurDir, 0, sizeof(m_szCurDir));
    strcpy_s(m_szCurDir, sizeof(m_szCurDir), "\\");
}

CEtPackingFile::~CEtPackingFile()
{
    CloseFileSystem();
}

__int64 CEtPackingFile::GetHashCode(const char* pString)
{
    if (!pString)
    {
        return 0;
    }

    std::string trimmed = TrimAndLowerString(pString);
    if (trimmed.empty())
    {
        return 0;
    }

    __int64 nHashCode = 0;
    __int64 nTemp     = 0;
    __int64 nTemp2    = 0;

    // Exact polynomial/XOR fold from DNLauncher.exe @ 0x004261F0
    const __int64 kPrime = 0x00FFFFFFFFFFFFFFFDLL;
    for (size_t i = 0; i < trimmed.size(); ++i)
    {
        __int64 ch = static_cast<__int64>(static_cast<signed char>(trimmed[i]));
        ch *= ch;
        nHashCode += ch;
        nTemp = ((nTemp << 8) | ch) % kPrime;
        nTemp2 ^= ch;
    }

    return ((nTemp2 << 48) | nTemp) + nHashCode;
}

void CEtPackingFile::NormalizePath(const char* szInput, const char* szCurDir, char* szOut, size_t cchOut)
{
    if (!szOut || cchOut == 0)
    {
        return;
    }
    szOut[0] = '\0';
    if (!szInput)
    {
        return;
    }

    std::string combined;
    if (szInput[0] == '\\' || szInput[0] == '/')
    {
        combined = szInput;
    }
    else if (szCurDir && szCurDir[0] != '\0')
    {
        combined = szCurDir;
        if (combined.back() != '\\')
        {
            combined.push_back('\\');
        }
        combined += szInput;
    }
    else
    {
        combined = "\\";
        combined += szInput;
    }

    std::replace(combined.begin(), combined.end(), '/', '\\');
    std::string clean = TrimAndLowerString(combined.c_str());
    strncpy_s(szOut, cchOut, clean.c_str(), _TRUNCATE);
}

bool CEtPackingFile::SeekFile(LONGLONG llOffset, DWORD dwMoveMethod) const
{
    if (m_hFile == INVALID_HANDLE_VALUE)
    {
        return false;
    }
    LARGE_INTEGER li;
    li.QuadPart = llOffset;
    return ::SetFilePointerEx(m_hFile, li, nullptr, dwMoveMethod) != FALSE;
}

bool CEtPackingFile::ReadFileBytes(void* pBuffer, DWORD dwBytes) const
{
    if (m_hFile == INVALID_HANDLE_VALUE || (!pBuffer && dwBytes > 0))
    {
        return false;
    }
    if (dwBytes == 0)
    {
        return true;
    }
    DWORD dwRead = 0;
    return ::ReadFile(m_hFile, pBuffer, dwBytes, &dwRead, nullptr) != FALSE && dwRead == dwBytes;
}

bool CEtPackingFile::WriteFileBytes(const void* pBuffer, DWORD dwBytes) const
{
    if (m_hFile == INVALID_HANDLE_VALUE || (!pBuffer && dwBytes > 0))
    {
        return false;
    }
    if (dwBytes == 0)
    {
        return true;
    }
    DWORD dwWritten = 0;
    return ::WriteFile(m_hFile, pBuffer, dwBytes, &dwWritten, nullptr) != FALSE && dwWritten == dwBytes;
}

bool CEtPackingFile::OpenFileSystem(const char* szFileName, bool bReadOnly)
{
    CloseFileSystem();
    if (!szFileName || szFileName[0] == '\0')
    {
        return false;
    }

    DWORD dwAccess = bReadOnly ? GENERIC_READ : (GENERIC_READ | GENERIC_WRITE);
    DWORD dwShare  = bReadOnly ? FILE_SHARE_READ : 0;
    m_hFile = ::CreateFileA(szFileName, dwAccess, dwShare, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (m_hFile == INVALID_HANDLE_VALUE)
    {
        return false;
    }

    m_bReadOnly = bReadOnly;
    if (!ReadFileBytes(&m_Header, sizeof(SPackingFileHeader)))
    {
        CloseFileSystem();
        return false;
    }

    if (std::strncmp(m_Header.szHeaderString, PACKING_FILE_HEADER_STRING, sizeof(m_Header.szHeaderString)) != 0)
    {
        CloseFileSystem();
        return false;
    }

    if (m_Header.nVersion != 10 && m_Header.nVersion != 11)
    {
        CloseFileSystem();
        return false;
    }

    m_Header.bRequireHeaderWrite = 0;

    if (m_Header.nFileCount > 0)
    {
        if (!SeekFile(m_Header.dwFileInfoOffset, FILE_BEGIN))
        {
            CloseFileSystem();
            return false;
        }
        m_vecFileInfo.resize(static_cast<size_t>(m_Header.nFileCount));
        DWORD dwTableBytes = static_cast<DWORD>(m_Header.nFileCount * sizeof(SPackingFileInfo));
        if (!ReadFileBytes(m_vecFileInfo.data(), dwTableBytes))
        {
            CloseFileSystem();
            return false;
        }
    }

    RebuildMaps();
    return true;
}

bool CEtPackingFile::NewFileSystem(const char* szFileName)
{
    CloseFileSystem();
    if (!szFileName || szFileName[0] == '\0')
    {
        return false;
    }

    m_hFile = ::CreateFileA(
        szFileName, GENERIC_READ | GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (m_hFile == INVALID_HANDLE_VALUE)
    {
        return false;
    }

    m_bReadOnly = false;
    std::memset(&m_Header, 0, sizeof(m_Header));
    strcpy_s(m_Header.szHeaderString, sizeof(m_Header.szHeaderString), PACKING_FILE_HEADER_STRING);
    m_Header.nVersion         = PACKING_FILE_VERSION;
    m_Header.nFileCount       = 0;
    m_Header.dwFileInfoOffset = PACKING_FILE_HEADER_PAD_END;
    m_Header.bRequireHeaderWrite = 1;

    BYTE padBlock[PACKING_FILE_HEADER_PAD_END] = {};
    std::memcpy(padBlock, &m_Header, sizeof(SPackingFileHeader));
    if (!WriteFileBytes(padBlock, sizeof(padBlock)))
    {
        CloseFileSystem();
        return false;
    }

    return true;
}

void CEtPackingFile::CloseFileSystem()
{
    if (m_hFile != INVALID_HANDLE_VALUE && !m_bReadOnly)
    {
        int nVecCount = static_cast<int>(m_vecFileInfo.size());
        if (m_Header.nFileCount != nVecCount)
        {
            if (m_Header.nVersion <= 10)
            {
                m_Header.bRequireHeaderWrite = 1;
                m_Header.nVersion = PACKING_FILE_VERSION;
            }
            m_Header.nFileCount = nVecCount;
            if (SeekFile(0, FILE_BEGIN))
            {
                WriteFileBytes(&m_Header, sizeof(SPackingFileHeader));
            }
        }

        if (m_Header.bRequireHeaderWrite)
        {
            if (SeekFile(m_Header.dwFileInfoOffset, FILE_BEGIN) && !m_vecFileInfo.empty())
            {
                WriteFileBytes(
                    m_vecFileInfo.data(),
                    static_cast<DWORD>(m_vecFileInfo.size() * sizeof(SPackingFileInfo)));
            }
            m_Header.bRequireHeaderWrite = 0;
            if (SeekFile(0, FILE_BEGIN))
            {
                WriteFileBytes(&m_Header, sizeof(SPackingFileHeader));
            }
        }
    }

    if (m_hFile != INVALID_HANDLE_VALUE)
    {
        ::CloseHandle(m_hFile);
        m_hFile = INVALID_HANDLE_VALUE;
    }

    m_vecFileInfo.clear();
    m_mapFileIndex.clear();
    std::memset(&m_Header, 0, sizeof(m_Header));
    m_bReadOnly = false;
}

void CEtPackingFile::InsertFileMap(int nVecIndex)
{
    if (nVecIndex < 0 || nVecIndex >= static_cast<int>(m_vecFileInfo.size()))
    {
        return;
    }
    const SPackingFileInfo& info = m_vecFileInfo[static_cast<size_t>(nVecIndex)];
    if (info.dwCompressSize == 0 || info.szFileName[0] == '\0')
    {
        return;
    }

    __int64 nHash = GetHashCode(info.szFileName);
    while (m_mapFileIndex.find(nHash) != m_mapFileIndex.end())
    {
        ++nHash;
    }
    m_mapFileIndex[nHash] = nVecIndex;
}

void CEtPackingFile::EraseFileMap(int nVecIndex)
{
    if (nVecIndex < 0 || nVecIndex >= static_cast<int>(m_vecFileInfo.size()))
    {
        return;
    }
    for (auto it = m_mapFileIndex.begin(); it != m_mapFileIndex.end(); ++it)
    {
        if (it->second == nVecIndex)
        {
            m_mapFileIndex.erase(it);
            return;
        }
    }
}

void CEtPackingFile::RebuildMaps()
{
    m_mapFileIndex.clear();
    for (int i = 0; i < static_cast<int>(m_vecFileInfo.size()); ++i)
    {
        InsertFileMap(i);
    }
}

int CEtPackingFile::FindFile(const char* szFileName) const
{
    if (m_hFile == INVALID_HANDLE_VALUE || !szFileName)
    {
        return -1;
    }

    char szNormalized[260] = {};
    NormalizePath(szFileName, m_szCurDir, szNormalized, sizeof(szNormalized));
    if (szNormalized[0] == '\0')
    {
        return -1;
    }

    __int64 nHash = GetHashCode(szNormalized);
    auto it = m_mapFileIndex.find(nHash);
    while (it != m_mapFileIndex.end())
    {
        int idx = it->second;
        if (idx >= 0 && idx < static_cast<int>(m_vecFileInfo.size()))
        {
            if (_stricmp(m_vecFileInfo[static_cast<size_t>(idx)].szFileName, szNormalized) == 0)
            {
                return idx;
            }
        }
        ++nHash;
        it = m_mapFileIndex.find(nHash);
    }
    return -1;
}

const SPackingFileInfo* CEtPackingFile::GetFileInfo(int nIndex) const
{
    if (nIndex < 0 || nIndex >= static_cast<int>(m_vecFileInfo.size()))
    {
        return nullptr;
    }
    return &m_vecFileInfo[static_cast<size_t>(nIndex)];
}

int CEtPackingFile::FindUnusedFileInfo(DWORD dwNeedSize) const
{
    for (int i = 0; i < static_cast<int>(m_vecFileInfo.size()); ++i)
    {
        const SPackingFileInfo& info = m_vecFileInfo[static_cast<size_t>(i)];
        if (info.dwCompressSize == 0 && info.dwOriginalSize == 0 && info.dwAllocSize >= dwNeedSize)
        {
            return i;
        }
    }
    return -1;
}

CEtFileHandle* CEtPackingFile::OpenFile(const char* szFileName, bool bOnlyCompressData)
{
    if (m_hFile == INVALID_HANDLE_VALUE)
    {
        return nullptr;
    }

    int nIndex = FindFile(szFileName);
    if (nIndex < 0)
    {
        return nullptr;
    }

    const SPackingFileInfo& info = m_vecFileInfo[static_cast<size_t>(nIndex)];
    if (info.dwCompressSize == 0 || !SeekFile(info.dwOffset, FILE_BEGIN))
    {
        return nullptr;
    }

    char* pCompBuf = new char[info.dwCompressSize];
    if (!ReadFileBytes(pCompBuf, info.dwCompressSize))
    {
        delete[] pCompBuf;
        return nullptr;
    }

    char* pOutBuf = pCompBuf;
    if (!bOnlyCompressData)
    {
        uLongf destLen = info.dwOriginalSize;
        pOutBuf = new char[destLen > 0 ? destLen : 1];
        int zret = ::uncompress(
            reinterpret_cast<Bytef*>(pOutBuf),
            &destLen,
            reinterpret_cast<const Bytef*>(pCompBuf),
            info.dwCompressSize);
        delete[] pCompBuf;
        if (zret != Z_OK)
        {
            delete[] pOutBuf;
            return nullptr;
        }
    }

    CEtFileHandle* pHandle = new CEtFileHandle();
    pHandle->m_FileInfo    = info;
    pHandle->m_pData       = pOutBuf;
    pHandle->m_dwReadOffset = 0;
    return pHandle;
}

CEtFileHandle* CEtPackingFile::OpenOnlyCompressFile(const char* szFileName)
{
    return OpenFile(szFileName, true);
}

bool CEtPackingFile::AddFile(const char* szFileName, const void* pData, int nSize)
{
    if (m_hFile == INVALID_HANDLE_VALUE || m_bReadOnly || !szFileName || (!pData && nSize > 0) || nSize < 0)
    {
        return false;
    }

    uLongf compSize = ::compressBound(static_cast<uLong>(nSize));
    std::vector<char> compBuf(compSize > 0 ? compSize : 16);
    BYTE emptyDummy = 0;
    const Bytef* srcPtr = (nSize > 0) ? reinterpret_cast<const Bytef*>(pData) : &emptyDummy;
    int zret = ::compress(
        reinterpret_cast<Bytef*>(compBuf.data()),
        &compSize,
        srcPtr,
        static_cast<uLong>(nSize));
    if (zret != Z_OK || compSize == 0)
    {
        return false;
    }

    char szNormalized[260] = {};
    NormalizePath(szFileName, m_szCurDir, szNormalized, sizeof(szNormalized));
    if (szNormalized[0] == '\0')
    {
        return false;
    }

    if (FindFile(szNormalized) != -1)
    {
        Remove(szNormalized);
    }

    int nSlot = FindUnusedFileInfo(static_cast<DWORD>(compSize));
    if (nSlot == -1)
    {
        SPackingFileInfo info = {};
        strncpy_s(info.szFileName, sizeof(info.szFileName), szNormalized, _TRUNCATE);
        info.dwCompressSize = static_cast<DWORD>(compSize);
        info.dwOriginalSize = static_cast<DWORD>(nSize);
        info.dwAllocSize    = static_cast<DWORD>(compSize);
        info.dwOffset       = m_Header.dwFileInfoOffset;
        info.dwSeedModulo   = (compSize > 0) ? (static_cast<DWORD>(compSize) % 60) : 0;
        info.dwSeedValue    = 0;

        m_vecFileInfo.push_back(info);
        nSlot = static_cast<int>(m_vecFileInfo.size()) - 1;

        if (!SeekFile(info.dwOffset, FILE_BEGIN) || !WriteFileBytes(compBuf.data(), static_cast<DWORD>(compSize)))
        {
            m_vecFileInfo.pop_back();
            return false;
        }

        LARGE_INTEGER endPos = {};
        LARGE_INTEGER zero = {};
        ::SetFilePointerEx(m_hFile, zero, &endPos, FILE_CURRENT);
        m_Header.dwFileInfoOffset = endPos.LowPart;
        m_Header.bRequireHeaderWrite = 1;
    }
    else
    {
        SPackingFileInfo& info = m_vecFileInfo[static_cast<size_t>(nSlot)];
        strncpy_s(info.szFileName, sizeof(info.szFileName), szNormalized, _TRUNCATE);
        info.dwCompressSize = static_cast<DWORD>(compSize);
        info.dwOriginalSize = static_cast<DWORD>(nSize);
        info.dwSeedModulo   = (compSize > 0) ? (static_cast<DWORD>(compSize) % 60) : 0;
        info.dwSeedValue    = 0;

        if (!SeekFile(info.dwOffset, FILE_BEGIN) || !WriteFileBytes(compBuf.data(), static_cast<DWORD>(compSize)))
        {
            return false;
        }
        m_Header.bRequireHeaderWrite = 1;
    }

    InsertFileMap(nSlot);
    return true;
}

bool CEtPackingFile::AddFile(const char* szFileName, const char* szSrcFilePath)
{
    if (!szSrcFilePath || szSrcFilePath[0] == '\0')
    {
        return false;
    }

    FILE* fp = nullptr;
    if (fopen_s(&fp, szSrcFilePath, "rb") != 0 || !fp)
    {
        return false;
    }

    std::fseek(fp, 0, SEEK_END);
    long fileSize = std::ftell(fp);
    std::fseek(fp, 0, SEEK_SET);
    if (fileSize < 0)
    {
        std::fclose(fp);
        return false;
    }

    std::vector<char> rawData(static_cast<size_t>(fileSize > 0 ? fileSize : 1));
    size_t nRead = (fileSize > 0) ? std::fread(rawData.data(), 1, static_cast<size_t>(fileSize), fp) : 0;
    std::fclose(fp);
    if (static_cast<long>(nRead) != fileSize)
    {
        return false;
    }

    return AddFile(szFileName, rawData.data(), static_cast<int>(fileSize));
}

void CEtPackingFile::MarkEntryRemoved(int nIndex)
{
    SPackingFileInfo& info = m_vecFileInfo[static_cast<size_t>(nIndex)];
    info.dwCompressSize = 0;
    info.dwOriginalSize = 0;

    LONGLONG tableEntryOffset = static_cast<LONGLONG>(m_Header.dwFileInfoOffset) +
                                static_cast<LONGLONG>(nIndex) * sizeof(SPackingFileInfo);
    if (SeekFile(tableEntryOffset, FILE_BEGIN))
    {
        WriteFileBytes(&info, sizeof(SPackingFileInfo));
    }
    EraseFileMap(nIndex);
}

bool CEtPackingFile::Remove(const char* szFileName)
{
    if (m_hFile == INVALID_HANDLE_VALUE || m_bReadOnly || !szFileName)
    {
        return false;
    }

    char szNormalized[260] = {};
    NormalizePath(szFileName, m_szCurDir, szNormalized, sizeof(szNormalized));
    int nIndex = FindFile(szNormalized);
    if (nIndex == -1)
    {
        return false;
    }

    MarkEntryRemoved(nIndex);
    return true;
}

int CEtPackingFile::ReservePatchFile(CEtFileHandle* pFile)
{
    if (m_hFile == INVALID_HANDLE_VALUE || m_bReadOnly || !pFile || pFile->m_FileInfo.dwOriginalSize == 0)
    {
        return -1;
    }

    SPackingFileInfo info = pFile->m_FileInfo;
    info.dwAllocSize = info.dwCompressSize;
    info.dwOffset    = m_Header.dwFileInfoOffset;
    m_vecFileInfo.push_back(info);

    m_Header.dwFileInfoOffset += info.dwAllocSize;
    m_Header.bRequireHeaderWrite = 1;

    int nIndex = static_cast<int>(m_vecFileInfo.size()) - 1;
    InsertFileMap(nIndex);
    return nIndex;
}

bool CEtPackingFile::PatchFileData(int nFileIndex, DWORD dwOffset, const void* pData, int nSize)
{
    if (m_hFile == INVALID_HANDLE_VALUE || m_bReadOnly || !pData || nSize <= 0)
    {
        return false;
    }
    if (nFileIndex < 0 || nFileIndex >= static_cast<int>(m_vecFileInfo.size()))
    {
        return false;
    }

    const SPackingFileInfo& info = m_vecFileInfo[static_cast<size_t>(nFileIndex)];
    if (dwOffset + static_cast<DWORD>(nSize) > info.dwAllocSize)
    {
        return false;
    }

    if (!SeekFile(static_cast<LONGLONG>(info.dwOffset) + dwOffset, FILE_BEGIN))
    {
        return false;
    }

    if (!WriteFileBytes(pData, static_cast<DWORD>(nSize)))
    {
        return false;
    }

    m_Header.bRequireHeaderWrite = 1;
    return true;
}

bool CEtPackingFile::CancelReservePatchFile(int nFileIndex)
{
    if (m_hFile == INVALID_HANDLE_VALUE || m_bReadOnly)
    {
        return false;
    }
    if (nFileIndex < 0 || nFileIndex >= static_cast<int>(m_vecFileInfo.size()))
    {
        return false;
    }

    MarkEntryRemoved(nFileIndex);
    return true;
}

void CEtPackingFile::ChangeDir(const char* szDir)
{
    if (!szDir || szDir[0] == '\0')
    {
        strcpy_s(m_szCurDir, sizeof(m_szCurDir), "\\");
        return;
    }
    strncpy_s(m_szCurDir, sizeof(m_szCurDir), szDir, _TRUNCATE);
    std::replace(m_szCurDir, m_szCurDir + std::strlen(m_szCurDir), '/', '\\');
}
