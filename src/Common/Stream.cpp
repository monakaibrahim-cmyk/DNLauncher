#include "Stream.h"

const char* CFileStream::GetModeString(AccessType access)
{
    switch (access)
    {
    case AccessRead:      return "rb";
    case AccessWrite:     return "wb";
    case AccessReadWrite: return "r+b";
    default:              return "rb";
    }
}

CFileStream::CFileStream()
    : m_pFile(nullptr)
    , m_Access(AccessRead)
{
}

CFileStream::CFileStream(const char* szFileName, AccessType access)
    : m_pFile(nullptr)
    , m_Access(access)
{
    Open(szFileName, access);
}

CFileStream::~CFileStream()
{
    Close();
}

bool CFileStream::Open(const char* szFileName, AccessType access)
{
    Close();
    if (!szFileName || szFileName[0] == '\0')
    {
        m_szFileName.clear();
        return false;
    }

    m_szFileName = szFileName;
    m_Access = access;
    if (fopen_s(&m_pFile, m_szFileName.c_str(), GetModeString(m_Access)) != 0)
    {
        m_pFile = nullptr;
        return false;
    }
    return true;
}

bool CFileStream::IsEnd() const
{
    if (!m_pFile)
    {
        return true;
    }
    return std::feof(m_pFile) != 0;
}

long CFileStream::Tell()
{
    if (!m_pFile)
    {
        return 0;
    }
    return std::ftell(m_pFile);
}

int CFileStream::Size() const
{
    if (!m_pFile)
    {
        return 0;
    }
    long lCur = std::ftell(m_pFile);
    std::fseek(m_pFile, 0, SEEK_END);
    long lEnd = std::ftell(m_pFile);
    std::fseek(m_pFile, lCur, SEEK_SET);
    return static_cast<int>(lEnd);
}

void CFileStream::Close()
{
    if (m_pFile)
    {
        std::fclose(m_pFile);
        m_pFile = nullptr;
    }
}

void CFileStream::Activate()
{
    if (!m_pFile && !m_szFileName.empty())
    {
        if (fopen_s(&m_pFile, m_szFileName.c_str(), GetModeString(m_Access)) != 0)
        {
            m_pFile = nullptr;
        }
    }
}

int CFileStream::Seek(long lOffset, int nOrigin)
{
    if (!m_pFile)
    {
        return -1;
    }
    return std::fseek(m_pFile, lOffset, nOrigin);
}

int CFileStream::Read(void* pBuffer, int nSize)
{
    if (!m_pFile || !pBuffer || nSize <= 0)
    {
        return 0;
    }
    return static_cast<int>(std::fread(pBuffer, 1, static_cast<size_t>(nSize), m_pFile));
}

int CFileStream::Write(const void* pBuffer, int nSize)
{
    if (!m_pFile || !pBuffer || nSize <= 0)
    {
        return 0;
    }
    return static_cast<int>(std::fwrite(pBuffer, 1, static_cast<size_t>(nSize), m_pFile));
}
