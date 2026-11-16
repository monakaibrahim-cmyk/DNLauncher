#pragma once

#include <afxwin.h>

/**
 * RFC 1321 MD5 digest utility matching DNLauncher's CodeProject CMD5Checksum.
 */
class CMD5Checksum
{
public:
    static CString GetMD5(const CString& strFilePath);
    static CString GetMD5(CFile& File);
    static CString GetMD5(BYTE* pBuf, UINT nLength);

protected:
    CMD5Checksum();
    virtual ~CMD5Checksum() {}

    void Transform(BYTE Block[64]);
    void Update(BYTE* Input, ULONG nInputLen);
    CString Final();

    inline DWORD RotateLeft(DWORD x, int n);
    inline void FF(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T);
    inline void GG(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T);
    inline void HH(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T);
    inline void II(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T);

    void DWordToByte(BYTE* Output, DWORD* Input, UINT nLength);
    void ByteToDWord(DWORD* Output, BYTE* Input, UINT nLength);

private:
    BYTE  m_lpszBuffer[64];
    ULONG m_nCount[2];
    ULONG m_lMD5[4];
};
