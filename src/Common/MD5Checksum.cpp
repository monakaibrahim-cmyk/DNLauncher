#include "MD5Checksum.h"

#include <cstring>

namespace
{
    const DWORD MD5_INIT_STATE_0 = 0x67452301;
    const DWORD MD5_INIT_STATE_1 = 0xefcdab89;
    const DWORD MD5_INIT_STATE_2 = 0x98badcfe;
    const DWORD MD5_INIT_STATE_3 = 0x10325476;

    const BYTE PADDING[64] = {
        0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
           0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
           0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
           0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };

    const DWORD MD5_T[64] = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
        0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
        0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,

        0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
        0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
        0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
        0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,

        0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
        0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
        0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
        0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,

        0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
        0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
        0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
        0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
    };

    const int MD5_S1[4] = { 7, 12, 17, 22 };
    const int MD5_S2[4] = { 5, 9,  14, 20 };
    const int MD5_S3[4] = { 4, 11, 16, 23 };
    const int MD5_S4[4] = { 6, 10, 15, 21 };
}

CMD5Checksum::CMD5Checksum()
{
    std::memset(m_lpszBuffer, 0, sizeof(m_lpszBuffer));
    m_nCount[0] = 0;
    m_nCount[1] = 0;
    m_lMD5[0] = MD5_INIT_STATE_0;
    m_lMD5[1] = MD5_INIT_STATE_1;
    m_lMD5[2] = MD5_INIT_STATE_2;
    m_lMD5[3] = MD5_INIT_STATE_3;
}

CString CMD5Checksum::GetMD5(const CString& strFilePath)
{
    CFile file;
    if (!file.Open(strFilePath, CFile::modeRead | CFile::shareDenyNone | CFile::typeBinary))
    {
        return _T("");
    }
    return GetMD5(file);
}

CString CMD5Checksum::GetMD5(CFile& File)
{
    CMD5Checksum md5;
    BYTE Buffer[1024] = {};
    UINT nLength = 0;
    while ((nLength = File.Read(Buffer, sizeof(Buffer))) > 0)
    {
        md5.Update(Buffer, nLength);
    }
    return md5.Final();
}

CString CMD5Checksum::GetMD5(BYTE* pBuf, UINT nLength)
{
    CMD5Checksum md5;
    if (pBuf && nLength > 0)
    {
        md5.Update(pBuf, nLength);
    }
    return md5.Final();
}

inline DWORD CMD5Checksum::RotateLeft(DWORD x, int n)
{
    return (x << n) | (x >> (32 - n));
}

inline void CMD5Checksum::FF(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T)
{
    DWORD F = (B & C) | ((~B) & D);
    A += F + X + T;
    A = RotateLeft(A, static_cast<int>(S));
    A += B;
}

inline void CMD5Checksum::GG(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T)
{
    DWORD G = (B & D) | (C & (~D));
    A += G + X + T;
    A = RotateLeft(A, static_cast<int>(S));
    A += B;
}

inline void CMD5Checksum::HH(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T)
{
    DWORD H = B ^ C ^ D;
    A += H + X + T;
    A = RotateLeft(A, static_cast<int>(S));
    A += B;
}

inline void CMD5Checksum::II(DWORD& A, DWORD B, DWORD C, DWORD D, DWORD X, DWORD S, DWORD T)
{
    DWORD I = C ^ (B | (~D));
    A += I + X + T;
    A = RotateLeft(A, static_cast<int>(S));
    A += B;
}

void CMD5Checksum::ByteToDWord(DWORD* Output, BYTE* Input, UINT nLength)
{
    UINT i = 0;
    UINT j = 0;
    while (j < nLength)
    {
        Output[i] = static_cast<DWORD>(Input[j]) |
                    (static_cast<DWORD>(Input[j + 1]) << 8) |
                    (static_cast<DWORD>(Input[j + 2]) << 16) |
                    (static_cast<DWORD>(Input[j + 3]) << 24);
        i++;
        j += 4;
    }
}

void CMD5Checksum::DWordToByte(BYTE* Output, DWORD* Input, UINT nLength)
{
    UINT i = 0;
    UINT j = 0;
    while (j < nLength)
    {
        Output[j]     = static_cast<BYTE>(Input[i] & 0xff);
        Output[j + 1] = static_cast<BYTE>((Input[i] >> 8) & 0xff);
        Output[j + 2] = static_cast<BYTE>((Input[i] >> 16) & 0xff);
        Output[j + 3] = static_cast<BYTE>((Input[i] >> 24) & 0xff);
        i++;
        j += 4;
    }
}

void CMD5Checksum::Transform(BYTE Block[64])
{
    DWORD a = m_lMD5[0];
    DWORD b = m_lMD5[1];
    DWORD c = m_lMD5[2];
    DWORD d = m_lMD5[3];

    DWORD X[16] = {};
    ByteToDWord(X, Block, 64);

    // Round 1
    FF(a, b, c, d, X[ 0], MD5_S1[0], MD5_T[ 0]);
    FF(d, a, b, c, X[ 1], MD5_S1[1], MD5_T[ 1]);
    FF(c, d, a, b, X[ 2], MD5_S1[2], MD5_T[ 2]);
    FF(b, c, d, a, X[ 3], MD5_S1[3], MD5_T[ 3]);
    FF(a, b, c, d, X[ 4], MD5_S1[0], MD5_T[ 4]);
    FF(d, a, b, c, X[ 5], MD5_S1[1], MD5_T[ 5]);
    FF(c, d, a, b, X[ 6], MD5_S1[2], MD5_T[ 6]);
    FF(b, c, d, a, X[ 7], MD5_S1[3], MD5_T[ 7]);
    FF(a, b, c, d, X[ 8], MD5_S1[0], MD5_T[ 8]);
    FF(d, a, b, c, X[ 9], MD5_S1[1], MD5_T[ 9]);
    FF(c, d, a, b, X[10], MD5_S1[2], MD5_T[10]);
    FF(b, c, d, a, X[11], MD5_S1[3], MD5_T[11]);
    FF(a, b, c, d, X[12], MD5_S1[0], MD5_T[12]);
    FF(d, a, b, c, X[13], MD5_S1[1], MD5_T[13]);
    FF(c, d, a, b, X[14], MD5_S1[2], MD5_T[14]);
    FF(b, c, d, a, X[15], MD5_S1[3], MD5_T[15]);

    // Round 2
    GG(a, b, c, d, X[ 1], MD5_S2[0], MD5_T[16]);
    GG(d, a, b, c, X[ 6], MD5_S2[1], MD5_T[17]);
    GG(c, d, a, b, X[11], MD5_S2[2], MD5_T[18]);
    GG(b, c, d, a, X[ 0], MD5_S2[3], MD5_T[19]);
    GG(a, b, c, d, X[ 5], MD5_S2[0], MD5_T[20]);
    GG(d, a, b, c, X[10], MD5_S2[1], MD5_T[21]);
    GG(c, d, a, b, X[15], MD5_S2[2], MD5_T[22]);
    GG(b, c, d, a, X[ 4], MD5_S2[3], MD5_T[23]);
    GG(a, b, c, d, X[ 9], MD5_S2[0], MD5_T[24]);
    GG(d, a, b, c, X[14], MD5_S2[1], MD5_T[25]);
    GG(c, d, a, b, X[ 3], MD5_S2[2], MD5_T[26]);
    GG(b, c, d, a, X[ 8], MD5_S2[3], MD5_T[27]);
    GG(a, b, c, d, X[13], MD5_S2[0], MD5_T[28]);
    GG(d, a, b, c, X[ 2], MD5_S2[1], MD5_T[29]);
    GG(c, d, a, b, X[ 7], MD5_S2[2], MD5_T[30]);
    GG(b, c, d, a, X[12], MD5_S2[3], MD5_T[31]);

    // Round 3
    HH(a, b, c, d, X[ 5], MD5_S3[0], MD5_T[32]);
    HH(d, a, b, c, X[ 8], MD5_S3[1], MD5_T[33]);
    HH(c, d, a, b, X[11], MD5_S3[2], MD5_T[34]);
    HH(b, c, d, a, X[14], MD5_S3[3], MD5_T[35]);
    HH(a, b, c, d, X[ 1], MD5_S3[0], MD5_T[36]);
    HH(d, a, b, c, X[ 4], MD5_S3[1], MD5_T[37]);
    HH(c, d, a, b, X[ 7], MD5_S3[2], MD5_T[38]);
    HH(b, c, d, a, X[10], MD5_S3[3], MD5_T[39]);
    HH(a, b, c, d, X[13], MD5_S3[0], MD5_T[40]);
    HH(d, a, b, c, X[ 0], MD5_S3[1], MD5_T[41]);
    HH(c, d, a, b, X[ 3], MD5_S3[2], MD5_T[42]);
    HH(b, c, d, a, X[ 6], MD5_S3[3], MD5_T[43]);
    HH(a, b, c, d, X[ 9], MD5_S3[0], MD5_T[44]);
    HH(d, a, b, c, X[12], MD5_S3[1], MD5_T[45]);
    HH(c, d, a, b, X[15], MD5_S3[2], MD5_T[46]);
    HH(b, c, d, a, X[ 2], MD5_S3[3], MD5_T[47]);

    // Round 4
    II(a, b, c, d, X[ 0], MD5_S4[0], MD5_T[48]);
    II(d, a, b, c, X[ 7], MD5_S4[1], MD5_T[49]);
    II(c, d, a, b, X[14], MD5_S4[2], MD5_T[50]);
    II(b, c, d, a, X[ 5], MD5_S4[3], MD5_T[51]);
    II(a, b, c, d, X[12], MD5_S4[0], MD5_T[52]);
    II(d, a, b, c, X[ 3], MD5_S4[1], MD5_T[53]);
    II(c, d, a, b, X[10], MD5_S4[2], MD5_T[54]);
    II(b, c, d, a, X[ 1], MD5_S4[3], MD5_T[55]);
    II(a, b, c, d, X[ 8], MD5_S4[0], MD5_T[56]);
    II(d, a, b, c, X[15], MD5_S4[1], MD5_T[57]);
    II(c, d, a, b, X[ 6], MD5_S4[2], MD5_T[58]);
    II(b, c, d, a, X[13], MD5_S4[3], MD5_T[59]);
    II(a, b, c, d, X[ 4], MD5_S4[0], MD5_T[60]);
    II(d, a, b, c, X[11], MD5_S4[1], MD5_T[61]);
    II(c, d, a, b, X[ 2], MD5_S4[2], MD5_T[62]);
    II(b, c, d, a, X[ 9], MD5_S4[3], MD5_T[63]);

    m_lMD5[0] += a;
    m_lMD5[1] += b;
    m_lMD5[2] += c;
    m_lMD5[3] += d;
}

void CMD5Checksum::Update(BYTE* Input, ULONG nInputLen)
{
    UINT nIndex = static_cast<UINT>((m_nCount[0] >> 3) & 0x3F);

    if ((m_nCount[0] += nInputLen << 3) < (nInputLen << 3))
    {
        m_nCount[1]++;
    }
    m_nCount[1] += (nInputLen >> 29);

    UINT nPartLen = 64 - nIndex;
    UINT i = 0;

    if (nInputLen >= nPartLen)
    {
        std::memcpy(&m_lpszBuffer[nIndex], Input, nPartLen);
        Transform(m_lpszBuffer);

        for (i = nPartLen; i + 63 < nInputLen; i += 64)
        {
            Transform(&Input[i]);
        }
        nIndex = 0;
    }

    std::memcpy(&m_lpszBuffer[nIndex], &Input[i], nInputLen - i);
}

CString CMD5Checksum::Final()
{
    BYTE Bits[8] = {};
    DWordToByte(Bits, reinterpret_cast<DWORD*>(m_nCount), 8);

    UINT nIndex = static_cast<UINT>((m_nCount[0] >> 3) & 0x3f);
    UINT nPadLen = (nIndex < 56) ? (56 - nIndex) : (120 - nIndex);
    Update(const_cast<BYTE*>(PADDING), nPadLen);

    Update(Bits, 8);

    BYTE lpszMD5[16] = {};
    DWordToByte(lpszMD5, reinterpret_cast<DWORD*>(m_lMD5), 16);

    CString strMD5;
    for (int i = 0; i < 16; i++)
    {
        CString strByte;
        if (lpszMD5[i] == 0)
        {
            strByte = _T("00");
        }
        else if (lpszMD5[i] <= 15)
        {
            strByte.Format(_T("0%x"), lpszMD5[i]);
        }
        else
        {
            strByte.Format(_T("%x"), lpszMD5[i]);
        }
        strMD5 += strByte;
    }

    return strMD5;
}
