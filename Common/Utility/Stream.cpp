#include "stdafx.h"
#include "Stream.h"

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

void CStream::operator << ( const std::string &str )
{
	DWORD strLen = (DWORD)str.length();
	if( strLen > 0 )
	{
		strLen+=1;
		*this << strLen;
		Write ( str.c_str(), sizeof(char)*strLen );
	}
	else
	{
		*this << 0;
	}
}

void CStream::operator >> ( std::string &str )
{
	DWORD dwSize;
	*this >> dwSize;

	if( dwSize > 0 )
	{
		char *szBuffer = new char[dwSize];
		Read ( szBuffer, sizeof(char)*(dwSize) );

		str = szBuffer;
		delete [] szBuffer;
	}
}

void CStream::operator << ( const std::wstring &str )
{
	DWORD strLen = (DWORD)str.length();
	if( strLen > 0 )
	{
		strLen+=1;
		*this << strLen;
		Write ( str.c_str(), sizeof(wchar_t)*strLen );
	}
	else
	{
		*this << 0;
	}
}

void CStream::operator >> ( std::wstring &str )
{
	DWORD dwSize;
	*this >> dwSize;

	if( dwSize > 0 )
	{
		wchar_t *szBuffer = new wchar_t[dwSize];
		Read ( szBuffer, sizeof(wchar_t)*(dwSize) );

		str = szBuffer;
		delete [] szBuffer;
	}
}

void CStream::WriteBuffer ( const void* pBuffer, int Size )
{
	ASSERT(pBuffer!=NULL);
	Write( pBuffer, Size );
}

void CStream::ReadBuffer ( void* pBuffer, int Size )
{
	ASSERT(pBuffer!=NULL);
	Read ( pBuffer, Size );
}

void CStream::operator << ( const std::vector<std::string> &vecVALUE )
{
	DWORD dwVecSize = (DWORD)vecVALUE.size();
	*this << ( dwVecSize );

	for( DWORD i=0; i<dwVecSize; i++ )
	{
		*this << vecVALUE[i];
	}
}

void CStream::operator >> ( std::vector<std::string> &vecVALUE )
{
	DWORD dwSize(0);
	*this >> ( dwSize );

	if( dwSize > 0 )
	{
		vecVALUE.clear();
		vecVALUE.reserve(dwSize);

		std::string tVALUE;

		for ( DWORD i=0; i<dwSize; ++i )
		{
			*this >> tVALUE;
			vecVALUE.push_back( tVALUE );
		}
	}
}

void CStream::operator << ( const std::vector<std::wstring> &vecVALUE )
{
	DWORD dwVecSize = (DWORD)vecVALUE.size();
	*this << ( dwVecSize );

	for( DWORD i=0; i<dwVecSize; i++ )
	{
		*this << vecVALUE[i];
	}
}

void CStream::operator >> ( std::vector<std::wstring> &vecVALUE )
{
	DWORD dwSize(0);
	*this >> ( dwSize );

	if( dwSize > 0 )
	{
		vecVALUE.clear();
		vecVALUE.reserve(dwSize);

		std::wstring tVALUE;

		for ( DWORD i=0; i<dwSize; ++i )
		{
			*this >> tVALUE;
			vecVALUE.push_back( tVALUE );
		}
	}
}


CFileStream::CFileStream()
{
	m_pStream = NULL;
	m_nMode = OPEN_READ;
}

CFileStream::CFileStream( const char *pFileName, int nMode )
{
	m_pStream = NULL;
	Open( pFileName, nMode );
}

CFileStream::~CFileStream()
{
	Close();
}

void CFileStream::Activate()
{
	Open( m_szFileName.c_str(), m_nMode );
}

bool CFileStream::Open( const char *pFileName, int nMode )
{
	Close();
	char szModeString[ 10 ];

	m_nMode = nMode;
	switch( nMode ) 
	{
		case OPEN_READ_WRITE:
			strcpy( szModeString, "r+b" );
			break;

		case OPEN_WRITE:
			strcpy( szModeString, "wb" );
			break;

		case OPEN_READ:
		default :
			strcpy( szModeString, "rb" );
			break;
	}

	m_pStream = fopen( pFileName, szModeString );
	m_szFileName = pFileName;

	return IsValid();
}

void CFileStream::Close()
{
	if( m_pStream ) 
	{
		fclose( m_pStream );
		m_pStream = NULL;
	}
}

bool CFileStream::IsEnd() const
{
	ASSERT( m_pStream );

	return feof( m_pStream ) != 0;
}

long CFileStream::Tell() 
{
	ASSERT( m_pStream );

	return ftell( m_pStream );
}

int CFileStream::Size() const
{
	ASSERT( m_pStream );

	long lCur, lRet;

	lCur = ftell( m_pStream );
	fseek( m_pStream, 0, SEEK_END );
	lRet = ftell( m_pStream );
	fseek( m_pStream, lCur, SEEK_SET );

	return lRet;
}

bool CFileStream::IsValid() const
{
	return ( m_pStream != NULL );
}

int CFileStream::Seek( long lOffset, int nOrigin )
{
	ASSERT( m_pStream );

	if( fseek( m_pStream, lOffset, nOrigin ) == 0 )
	{
		return 1;	// Success
	}

	return 0;	// Fail
}

int CFileStream::Read( void *pBuffer, int nSize )
{
	ASSERT( m_pStream );

	//return ( int )fread( pBuffer, nSize, 1, m_pStream );
	return ( int )fread( pBuffer, 1, nSize, m_pStream );
}

int CFileStream::Write( const void *pBuffer, int nSize )
{
	ASSERT( m_pStream );

	//return ( int )fwrite( pBuffer, nSize, 1, m_pStream );
	return ( int )fwrite( pBuffer, 1, nSize, m_pStream );
}


/////////////////////////////////////////////////////////


CMemoryStream::CMemoryStream()
{
	m_pBuffer = NULL;
	m_nSize = 0;
	m_nCurrent = 0;
}


CMemoryStream::CMemoryStream( void *pBuffer, int nSize )
{
	m_pBuffer = static_cast< char* >( pBuffer );
	m_nSize = nSize;
	m_nCurrent = 0;
}

void CMemoryStream::Initialize( void *pBuffer, int nSize )
{
	m_pBuffer = static_cast< char* >( pBuffer );
	m_nSize = nSize;
	m_nCurrent = 0;
}

bool CMemoryStream::IsEnd() const
{
	return m_nCurrent >= m_nSize;
}

long CMemoryStream::Tell()
{
	return m_nCurrent;
}

int CMemoryStream::Size() const
{
	return m_nSize;
}

bool CMemoryStream::IsValid() const
{
	return m_pBuffer != NULL;
}

int CMemoryStream::Seek( long lOffset, int nOrigin )
{
	switch( nOrigin ) 
	{
		case SEEK_SET: 
			m_nCurrent = lOffset; 
			break;

		case SEEK_CUR: 
			m_nCurrent += lOffset; 
			break;

		case SEEK_END: 
			m_nCurrent = m_nSize + lOffset; 
			break;
		default: 
			ASSERT( 0 ); 
			return 0;
	}

	if( m_nCurrent >= m_nSize )
	{
		m_nCurrent = m_nSize;
	}

	return m_nCurrent;
}

int CMemoryStream::Read( void *pBuffer, int nSize )
{
	if( m_nCurrent + nSize > m_nSize )
	{
		nSize = m_nSize - m_nCurrent;
	}
	
	memcpy( pBuffer, m_pBuffer + m_nCurrent, nSize );

	m_nCurrent += nSize;

	return nSize;
}

int CMemoryStream::Write( const void *pBuffer, int nSize )
{
	if( m_nCurrent + nSize > m_nSize )
	{
		nSize = m_nSize - m_nCurrent;
	}

	memcpy( m_pBuffer + m_nCurrent, pBuffer, nSize );
	m_nCurrent += nSize;

	return nSize;
}

CPacketCompressStream::CPacketCompressStream()
{
	m_nValidBufferSize = 0;
	m_nValidBitCurrent = 0;
	m_nValueCount = 0;
}

struct BYTE3
{
	operator unsigned char* () { return data; }
	BYTE3() { data[0]=0; data[1]=0; data[2]=0; }
	unsigned char data[3];
};

BYTE3 CompressFloat( float in )
{
	unsigned int value = *(unsigned int*)(float*)(&in);
	unsigned int temp = 0x00000000;

	temp |= ((value & 0xC0000000)>>8 );
	temp |= ((value & 0x07000000)>>5 );
	temp |= ((value & 0x00FFFFFF)>>5 );

	BYTE3 c;
	c.data[0] = (unsigned char)((temp & 0x00FF0000)>>16 );
	c.data[1] = (unsigned char)((temp & 0x0000FF00)>>8 );
	c.data[2] = (unsigned char)((temp & 0x000000FF)>>0 );

	return c;
}

float DecompressFloat( BYTE3 in )
{
	unsigned int temp = 0x00000000;

	temp |= ((unsigned int)in.data[0])<<16;
	temp |= ((unsigned int)in.data[1])<<8;
	temp |= ((unsigned int)in.data[2])<<0;

	unsigned int value = 0x00000000;

	value |= ((temp & 0x00C00000)<<8 );
	value |= ((temp & 0x00380000)<<5 );
	value |= ((temp & 0x0007FFFF)<<5 );

	return *(float*)(unsigned int*)(&value);
}

CPacketCompressStream::CPacketCompressStream( void *pBuffer, int nSize )
: CMemoryStream( pBuffer, nSize )
{
	m_nValidBufferSize = 0;
	m_nValidBitCurrent = 0;
	m_nValueCount = 0;
}


int CPacketCompressStream::Seek( long lOffset, int nOrigin, CompressTypeEnum Type )
{
	int nCompressValueSize = 0;

	switch( Type ) {
		case NOCOMPRESS: return CMemoryStream::Seek( lOffset, nOrigin );
		case INTEGER_SHORT: nCompressValueSize = sizeof(short); break;
		case INTEGER_CHAR:	nCompressValueSize = sizeof(char); break;
		case DWORD_SHORT:	nCompressValueSize = sizeof(short); break;
		case DWORD_CHAR:	nCompressValueSize = sizeof(char); break;
		case FLOAT_SHORT:	nCompressValueSize = sizeof(short); break;
		case VECTOR2_SHORT:	nCompressValueSize = sizeof(short) * 2; break;
		case VECTOR3_SHORT:	nCompressValueSize = sizeof(short) * 3; break;
		case VECTOR2_BIT:	nCompressValueSize = ( sizeof(float) - 1 ) * 2; break;
		case VECTOR3_BIT:	nCompressValueSize = ( sizeof(float) - 1 ) * 3; break;
	}
	return CMemoryStream::Seek( nCompressValueSize, nOrigin );
}

int CPacketCompressStream::Size() const
{
	return CMemoryStream::Size() + m_nValidBufferSize;
}

int CPacketCompressStream::Read( void *pBuffer, int nSize )
{
	return Read( pBuffer, nSize, NOCOMPRESS );
}

int CPacketCompressStream::Write( const void *pBuffer, int nSize )
{
	return Write( pBuffer, nSize, NOCOMPRESS );
}

int CPacketCompressStream::Read( void *pBuffer, int nSize, CompressTypeEnum Type, float fValue )
{
	char cCompressValue[16] = { 0, };
	int nCompressValueSize = 0;

//	if( Type == VECTOR2_BIT || Type == VECTOR3_BIT ) Type = NOCOMPRESS;

	switch( Type ) {
		case NOCOMPRESS: return CMemoryStream::Read( pBuffer, nSize );
		case INTEGER_SHORT: nCompressValueSize = sizeof(short); break;
		case INTEGER_CHAR:	nCompressValueSize = sizeof(char); break;
		case DWORD_SHORT:	nCompressValueSize = sizeof(short); break;
		case DWORD_CHAR:	nCompressValueSize = sizeof(char); break;
		case FLOAT_SHORT:	nCompressValueSize = sizeof(short); break;
		case VECTOR2_SHORT:	nCompressValueSize = sizeof(short) * 2; break;
		case VECTOR3_SHORT:	nCompressValueSize = sizeof(short) * 3; break;
		case VECTOR2_BIT:	nCompressValueSize = ( sizeof(float) - 1 ) * 2; break;
		case VECTOR3_BIT:	nCompressValueSize = ( sizeof(float) - 1 ) * 3; break;
	}

	int nResult = CMemoryStream::Read( cCompressValue, nCompressValueSize );

	switch( Type ) {
		case INTEGER_SHORT:
			*(int*)pBuffer = *(short*)cCompressValue;
			break;
		case INTEGER_CHAR:
			*(int*)pBuffer = *(char*)cCompressValue;
			break;
		case DWORD_SHORT:
			*(DWORD*)pBuffer = *(short*)cCompressValue;
			break;
		case DWORD_CHAR:
			*(DWORD*)pBuffer = *(char*)cCompressValue;
			break;
		case FLOAT_SHORT:
			*(float*)pBuffer = (*(short*)cCompressValue) / ( ( fValue == 0.f ) ? 32760.f : fValue );
			break;
		case VECTOR2_SHORT:
			for( int i=0; i<2; i++ ) {
				*((float*)pBuffer + i ) = (*((short*)cCompressValue + i)) / ( ( fValue == 0.f ) ? 32760.f : fValue );
			}
			break;
		case VECTOR3_SHORT:
			for( int i=0; i<3; i++ ) {
				*((float*)pBuffer + i ) = (*((short*)cCompressValue + i)) / ( ( fValue == 0.f ) ? 32760.f : fValue );
			}
			break;
		case VECTOR2_BIT:
			for( int i=0; i<2; i++ ) {
				*( ((float*)pBuffer + i) ) = DecompressFloat( *((BYTE3*)cCompressValue + i ) );
			}
			break;
		case VECTOR3_BIT:
			for( int i=0; i<3; i++ ) {
				*( ((float*)pBuffer + i) ) = DecompressFloat( *((BYTE3*)cCompressValue + i ) );
			}
			break;
	}

	return nResult;
}

int CPacketCompressStream::Write( const void *pBuffer, int nSize, CompressTypeEnum Type, float fValue )
{
	/*
	if( 1 + ( m_nValueCount / 8 )  > m_nValidBufferSize ) {
		memcpy( (char*)pBuffer + m_nValidBufferSize, (char*)pBuffer + m_nValidBufferSize + 1, sizeof(m_nCurrent) );
		m_nValidBufferSize++;
		m_nCurrent++;
		*(char*)m_pBuffer[m_nValidBufferSize] = 0;
	}
	*/
//	if( Type == VECTOR2_BIT || Type == VECTOR3_BIT ) Type = NOCOMPRESS;

	static int nCount = 0;
	void *pCompressValue = NULL;
	int nCompressValueSize = 0;
	switch( Type ) {
		case NOCOMPRESS:
			pCompressValue = (void*)pBuffer;
			nCompressValueSize = nSize;
			break;
		case INTEGER_SHORT:
			{
				if( (*(int*)pBuffer) > SHRT_MAX || (*(int*)pBuffer) < SHRT_MIN ) {
					ASSERT(0);
				}
				pCompressValue = (void*)pBuffer;
				nCompressValueSize = sizeof(short);
			}
			break;
		case INTEGER_CHAR:
			{
				if( (*(int*)pBuffer) > CHAR_MAX || (*(int*)pBuffer) < CHAR_MIN ) {
					ASSERT(0);
				}
				pCompressValue = (void*)pBuffer;
				nCompressValueSize = sizeof(char);
			}
			break;
		case DWORD_SHORT:
			{
				if( (*(DWORD*)pBuffer) > ULONG_MAX || (*(DWORD*)pBuffer) < 0 ) {
					ASSERT(0);
				}
				pCompressValue = (void*)pBuffer;
				nCompressValueSize = sizeof(short);
			}
			break;
		case DWORD_CHAR:
			{
				if( (*(DWORD*)pBuffer) > ULONG_MAX || (*(DWORD*)pBuffer) < 0 ) {
					ASSERT(0);
				}
				pCompressValue = (void*)pBuffer;
				nCompressValueSize = sizeof(char);
			}
			break;
		case FLOAT_SHORT:
			{
				static short nTemp;
				nTemp = (short)( (*(float*)pBuffer) * ( fValue == 0.f ? 32760.f : fValue ) );
//				if( ( nTemp / 30000.f ) != (*(float*)pBuffer) ) {
//					ASSERT(0);
//				}
				pCompressValue = &nTemp;
				nCompressValueSize = sizeof(short);
			}
			break;
		case VECTOR2_SHORT:
			{
				static short nTemp[2];

				for( int i=0; i<2; i++ ) {
					nTemp[i] = (short)( (*((float*)pBuffer + i) ) * ( fValue == 0.f ? 32760.f : fValue ) );

//					if( ( nTemp[i] / 30000.f ) != (*((float*)pBuffer + i)) ) {
//						ASSERT(0);
//					}
				}
				pCompressValue = &nTemp;
				nCompressValueSize = sizeof(short) * 2;
			}
			break;
		case VECTOR3_SHORT:
			{
				static short nTemp[3];
				for( int i=0; i<3; i++ ) {
					nTemp[i] = (short)( (*((float*)pBuffer + i)) * ( fValue == 0.f ? 32760.f : fValue ) );

//					if( ( nTemp[i] / 30000.f ) != (*((float*)pBuffer + i)) ) {
//						ASSERT(0);
//					}
				}
				pCompressValue = &nTemp;
				nCompressValueSize = sizeof(short) * 3;
			}
			break;
		case VECTOR2_BIT:
			{
				static BYTE3 nTemp[2];
				for( int i=0; i<2; i++ ) {
					nTemp[i] = CompressFloat( *((float*)pBuffer + i) );
				}
				pCompressValue = &nTemp;
				nCompressValueSize = ( sizeof(float) - 1 ) * 2;
			}
			break;
		case VECTOR3_BIT:
			{
				static BYTE3 nTemp[3];
				for( int i=0; i<3; i++ ) {
					nTemp[i] = CompressFloat( *((float*)pBuffer + i) );
				}
				pCompressValue = &nTemp;
				nCompressValueSize = ( sizeof(float) - 1 ) * 3;
			}
			break;
	}

	return CMemoryStream::Write( pCompressValue, nCompressValueSize );

	// Compress when 0
//	if( (int*)pCompressValue
}

/////////////////////////////////////////////////////////

CByteStream::CByteStream()
{
	m_nCurrent = 0;
}

CByteStream::CByteStream( void *pBuffer, int nSize )
{
	m_nCurrent = 0;
	Write( pBuffer, nSize );
}

bool CByteStream::IsEnd() const
{
	return m_nCurrent >= (int)m_Buffer.size();
}

long CByteStream::Tell()
{
	return m_nCurrent;
}

int CByteStream::Size() const
{
	return (int)m_Buffer.size();
}

bool CByteStream::IsValid() const
{
	return !m_Buffer.empty();
}

int CByteStream::Seek( long lOffset, int nOrigin )
{
	switch( nOrigin ) 
	{
	case SEEK_SET: 
		m_nCurrent = lOffset; 
		break;

	case SEEK_CUR: 
		m_nCurrent += lOffset; 
		break;

	case SEEK_END: 
		m_nCurrent = (int)m_Buffer.size() + lOffset; 
		break;
	default: 
		ASSERT( 0 ); 
		return 0;
	}

	if( m_nCurrent >= (int)m_Buffer.size() )
	{
		m_nCurrent = (int)m_Buffer.size();
	}

	return m_nCurrent;
}

int CByteStream::Read( void *pBuffer, int nSize )
{
	int sizeBuff = (int)(m_Buffer.end() - (m_Buffer.begin()+m_nCurrent));
	if ( nSize > sizeBuff )
		return 0;

	std::copy( m_Buffer.begin()+m_nCurrent, m_Buffer.begin()+m_nCurrent+nSize, (char*)pBuffer );
	m_nCurrent += nSize;

	return nSize;
}

int CByteStream::Write( const void *pBuffer, int nSize )
{
	m_Buffer.insert( m_Buffer.end(), (char*)pBuffer, (char*)pBuffer+nSize);

	return nSize;
}

