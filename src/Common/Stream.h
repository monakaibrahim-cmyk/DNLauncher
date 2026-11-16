#pragma once

#include <cstdio>
#include <string>

/**
 * Abstract byte-stream base matching DNLauncher's CStream (11 virtual slots).
 */
class CStream
{
public:
    virtual ~CStream() {}

    virtual bool IsEnd() const { return true; }
    virtual long Tell() { return 0; }
    virtual int Size() const { return 0; }
    virtual bool IsValid() const { return false; }
    virtual void Close() {}
    virtual void Activate() {}
    virtual int Seek(long lOffset, int nOrigin) { (void)lOffset; (void)nOrigin; return 0; }
    virtual int Read(void* pBuffer, int nSize) { (void)pBuffer; (void)nSize; return 0; }
    virtual int Write(const void* pBuffer, int nSize) { (void)pBuffer; (void)nSize; return 0; }
    virtual const char* GetName() const { return nullptr; }
};

/**
 * FILE*-backed CStream matching DNLauncher's CFileStream.
 */
class CFileStream : public CStream
{
public:
    enum AccessType
    {
        AccessRead      = 0,
        AccessWrite     = 1,
        AccessReadWrite = 2
    };

    CFileStream();
    explicit CFileStream(const char* szFileName, AccessType access = AccessRead);
    ~CFileStream() override;

    bool Open(const char* szFileName, AccessType access = AccessRead);

    bool IsEnd() const override;
    long Tell() override;
    int Size() const override;
    bool IsValid() const override { return m_pFile != nullptr; }
    void Close() override;
    void Activate() override;
    int Seek(long lOffset, int nOrigin) override;
    int Read(void* pBuffer, int nSize) override;
    int Write(const void* pBuffer, int nSize) override;
    const char* GetName() const override { return m_szFileName.c_str(); }

private:
    static const char* GetModeString(AccessType access);

    FILE*       m_pFile;
    std::string m_szFileName;
    AccessType  m_Access;
};
