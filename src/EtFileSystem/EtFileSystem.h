#pragma once

#include <windows.h>
#include <map>
#include <vector>
#include <string>

#pragma pack(push, 1)

/**
 * Header at offset 0 of an EyedentityGames .pak archive (0x110 = 272 bytes).
 * Followed by zero padding up to 0x400 in newly created archives.
 */
struct SPackingFileHeader
{
    char  szHeaderString[256];
    int   nVersion;
    int   nFileCount;
    DWORD dwFileInfoOffset;
    BYTE  bRequireHeaderWrite;
    BYTE  cReserved[3];
};

/**
 * Per-entry metadata stored in the .pak file table (0x13C = 316 bytes).
 */
struct SPackingFileInfo
{
    char  szFileName[256];
    DWORD dwCompressSize;
    DWORD dwOriginalSize;
    DWORD dwAllocSize;
    DWORD dwOffset;
    DWORD dwSeedModulo;  // dwCompressSize % 60 on AddFile
    DWORD dwSeedValue;   // 0 in DNLauncher release builds
    BYTE  cReserved[36];
};

#pragma pack(pop)

static const char PACKING_FILE_HEADER_STRING[] = "EyedentityGames Packing File 0.1";
static const int  PACKING_FILE_VERSION         = 11;
static const DWORD PACKING_FILE_HEADER_PAD_END = 0x400;

/**
 * Optional logging hook interface used by CEtPackingFile.
 */
class CEtFileSystemLog
{
public:
    virtual ~CEtFileSystemLog() {}
    virtual void Log(const char* szStr) = 0;
};

/**
 * In-memory handle to a decompressed (or raw compressed) entry inside CEtPackingFile.
 * Layout matches 0x148 bytes on x86: vptr (4) + m_FileInfo (0x13C) + m_pData (4) + m_dwReadOffset (4).
 */
class CEtFileHandle
{
public:
    CEtFileHandle();
    virtual ~CEtFileHandle();

    int Read(void* pBuffer, int nSize);
    bool ExportFile(const char* szFileName = nullptr) const;

    const SPackingFileInfo& GetFileInfo() const { return m_FileInfo; }
    const char* GetData() const { return m_pData; }
    DWORD GetOriginalSize() const { return m_FileInfo.dwOriginalSize; }
    DWORD GetCompressSize() const { return m_FileInfo.dwCompressSize; }
    const char* GetFileName() const { return m_FileInfo.szFileName; }

public:
    SPackingFileInfo m_FileInfo;
    char*            m_pData;
    DWORD            m_dwReadOffset;
};

/**
 * EyedentityGames .pak packing archive reader/writer/patcher (versions 10 and 11).
 */
class CEtPackingFile
{
public:
    CEtPackingFile();
    virtual ~CEtPackingFile();

    bool OpenFileSystem(const char* szFileName, bool bReadOnly = false);
    bool NewFileSystem(const char* szFileName);
    void CloseFileSystem();

    bool IsOpen() const { return m_hFile != INVALID_HANDLE_VALUE; }
    bool IsReadOnly() const { return m_bReadOnly; }

    CEtFileHandle* OpenFile(const char* szFileName, bool bOnlyCompressData = false);
    CEtFileHandle* OpenOnlyCompressFile(const char* szFileName);
    bool AddFile(const char* szFileName, const void* pData, int nSize);
    bool AddFile(const char* szFileName, const char* szSrcFilePath);
    bool Remove(const char* szFileName);

    int ReservePatchFile(CEtFileHandle* pFile);
    bool PatchFileData(int nFileIndex, DWORD dwOffset, const void* pData, int nSize);
    bool CancelReservePatchFile(int nFileIndex);

    int FindFile(const char* szFileName) const;
    int GetFileCount() const { return static_cast<int>(m_vecFileInfo.size()); }
    const SPackingFileInfo* GetFileInfo(int nIndex) const;
    const SPackingFileHeader& GetHeader() const { return m_Header; }

    void ChangeDir(const char* szDir);
    const char* GetCurDir() const { return m_szCurDir; }
    void SetLog(CEtFileSystemLog* pLog) { m_pLog = pLog; }

    /** Deterministic 64-bit path hash recovered from DNLauncher.exe @ 0x004261F0. */
    static __int64 GetHashCode(const char* pString);

    /** Normalize and trim spaces inside archive member paths. */
    static void NormalizePath(const char* szInput, const char* szCurDir, char* szOut, size_t cchOut);

protected:
    int FindUnusedFileInfo(DWORD dwNeedSize) const;
    void MarkEntryRemoved(int nIndex);
    void InsertFileMap(int nVecIndex);
    void EraseFileMap(int nVecIndex);
    void RebuildMaps();
    bool SeekFile(LONGLONG llOffset, DWORD dwMoveMethod) const;
    bool ReadFileBytes(void* pBuffer, DWORD dwBytes) const;
    bool WriteFileBytes(const void* pBuffer, DWORD dwBytes) const;

protected:
    bool                           m_bReadOnly;
    HANDLE                         m_hFile;
    SPackingFileHeader             m_Header;
    char                           m_szCurDir[260];
    std::vector<SPackingFileInfo>  m_vecFileInfo;
    std::map<__int64, int>         m_mapFileIndex;
    CEtFileSystemLog*              m_pLog;
};
