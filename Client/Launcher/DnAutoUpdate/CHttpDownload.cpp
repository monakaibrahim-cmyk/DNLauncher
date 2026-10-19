#include "stdafx.h"
#include "CHttpDownload.h"
#include "MD5Checksum.h"

#include "mmsystem.h"

BOOL ClientDeleteFile( LPCTSTR FineName )
{
	DWORD dwNowTime = timeGetTime();

	if( ::GetFileAttributes( FineName ) != 0xFFFFFFFF )
	{
		while( 1 )
		{
			if( timeGetTime() > dwNowTime + 5000 )
			{
				return FALSE; 
			}

			DWORD dwAttr = ::GetFileAttributes( FineName );
			if( dwAttr & FILE_ATTRIBUTE_READONLY )
			{
				dwAttr &= ~FILE_ATTRIBUTE_READONLY;
				::SetFileAttributes( FineName , dwAttr );
			}
			if( DeleteFile( FineName ) ) 
			{
				return TRUE; 
			}
		}
	}

	return TRUE;
}

CHttpDownload::CHttpDownload()
: m_hHttpConnection( NULL )
, m_dwTempFileLength( 0 )
, m_dwDownloadFileLength( 0 )
, m_dwTotalFileLength( 0 )
, m_dwTotalBytes( 0 )
, m_fRate( 0.0f )
, m_fPercent( 0.0f )
, m_bExit( FALSE )
{
}

CHttpDownload::~CHttpDownload()
{
	Reset();
}

void CHttpDownload::Reset()
{
	if( m_hHttpConnection )
		InternetCloseHandle( m_hHttpConnection );

	m_hHttpConnection = NULL;
	m_dwTempFileLength = 0;
	m_dwDownloadFileLength = 0;
	m_dwTotalFileLength = 0;
	m_dwTotalBytes = 0;
	m_fRate = 0.0f;
	m_fPercent = 0.0f;
	m_bExit = FALSE;
}

int CHttpDownload::DownloadFile( HINTERNET hInternetSession, CString strHttpPath, CString strLocalPath )
{
	if( hInternetSession == NULL || strHttpPath.GetLength() == 0 || strLocalPath.GetLength() == 0 )
		return HTTPDOWNLOAD_ERROR;	// argument error

	m_strHttpPath = strHttpPath;
	m_strLocalPath = strLocalPath + L".tmp";

	// Query remote file size
	DWORD dwDownloadFileSize = GetDownloadFileSize( hInternetSession, m_strHttpPath );

	if( dwDownloadFileSize == 0 )
		return HTTPDOWNLOAD_ERROR;

	TRACE( L"Download File Size = %d\n", dwDownloadFileSize );

	// Check if destination file already exists and matches size
	CFile file;
	CFileException e;

	if( file.Open( strLocalPath, CFile::modeRead, &e ) )
	{
		if( file.GetLength() == dwDownloadFileSize )
		{
			m_dwTotalFileLength = dwDownloadFileSize;
			m_dwTotalBytes = dwDownloadFileSize;
			m_fPercent = 100.0f;
			return HTTPDOWNLOAD_ALREADY_DOWNLOAD;		// File already completely downloaded
		}
		else
			ClientDeleteFile( strLocalPath );			// Incomplete or mismatched size: delete and re-download
	}
	
	// Check for existing partial .tmp download
	FILE* fp;
	fp = _wfopen( m_strLocalPath, _T("r") );
	UINT uiFileModeFlag = CFile::modeCreate | CFile::modeWrite | CFile::shareDenyWrite;

	if( fp != NULL )	// Existing .tmp file found, resume download
	{
		fclose( fp );
		uiFileModeFlag |= CFile::modeNoTruncate;
	}

	if( !file.Open( m_strLocalPath, uiFileModeFlag, &e ) )
		return HTTPDOWNLOAD_ERROR;	// file open error

	file.SeekToEnd();

	m_dwTempFileLength = static_cast<DWORD>( file.GetLength() );

	if( m_dwTempFileLength < dwDownloadFileSize )
	{
		// Connect via HTTP with Range header for resuming
		CString strAddHeader;
		strAddHeader.Format( L"Range:bytes=%d-\nCache-Control:no-cache\nPragma:no-cache", m_dwTempFileLength );

		m_hHttpConnection = InternetOpenUrl( hInternetSession, m_strHttpPath, strAddHeader, strAddHeader.GetLength(), 
											INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE, 0 );

		if( m_hHttpConnection == NULL )
		{
			file.Close();	// http connection error
			return HTTPDOWNLOAD_ERROR;
		}

		TCHAR szBuffer[MAX_PATH]={0,};
		DWORD dwBufferSize = MAX_PATH;
		DWORD dwIndex = 0;

		// Query remaining content length
		if( HttpQueryInfo( m_hHttpConnection, HTTP_QUERY_CONTENT_LENGTH, (LPVOID)&szBuffer, &dwBufferSize, &dwIndex ) != FALSE )
		{
			m_dwDownloadFileLength = (DWORD)_wtoi( szBuffer );
			m_dwTotalFileLength = m_dwTempFileLength + m_dwDownloadFileLength;
		}

		// Begin download (resume supported)
		if( m_dwDownloadFileLength > 0 )
		{
			DWORD dwRead, dwSize;
			DWORD dwStartTick, dwCurrentTick;
			m_dwTotalBytes = m_dwTempFileLength;

			char szReadBuf[32768];	// 32KiB

			dwStartTick = GetTickCount();

			do 
			{
				if( IsExit() )
				{
					file.Close();
					InternetCloseHandle( m_hHttpConnection );
					m_hHttpConnection = NULL;
					return HTTPDOWNLOAD_TERMINATE;
				}

				if( !InternetQueryDataAvailable( m_hHttpConnection, &dwSize, 0, 0 ) )
				{
					// error "data not available!"
					break;
				}

				if( !InternetReadFile( m_hHttpConnection, szReadBuf, dwSize, &dwRead ) )
				{
					// error "reading file fail!"
					break;
				}

				if( dwRead )
				{
					dwCurrentTick = GetTickCount();
					file.Write( szReadBuf, dwRead );

					m_dwTotalBytes += dwRead;
					m_fRate = (float)(m_dwTotalBytes / 1000) / (float)((dwCurrentTick - dwStartTick) / 1000);
					m_fPercent = (float)m_dwTotalBytes / (float)m_dwTotalFileLength * 100.0f;

					TRACE( L"Read : [%09d / %09d] --- [%4.2f KB/s] < %4.0f%% >\n", m_dwTotalBytes, m_dwTotalFileLength, m_fRate, m_fPercent );
				}

			} while( dwRead != 0 );
		}
		InternetCloseHandle( m_hHttpConnection );
	}
	file.Close();

	TRACE( L"--- MD5 Check Start... ---\n" );
	// Perform MD5 verification on completed download
	if( !GetMD5Checksum() )
	{
		ClientDeleteFile( m_strLocalPath );
		return HTTPDOWNLOAD_ERROR;	// md5 check error
	}
	TRACE( L"--- MD5 Check End! ---\n" );

	// Rename .tmp to destination file
	CString strNewLocalPath = m_strLocalPath.Left( m_strLocalPath.GetLength() - 4 );
	CFile::Rename( m_strLocalPath, strNewLocalPath );

	TRACE( L"--- Download Complete! ---\n" );
	
	return HTTPDOWNLOAD_SUCCESS;
}

DWORD CHttpDownload::GetDownloadFileSize( HINTERNET hInternetSession, CString strHttpPath )
{
	if( hInternetSession == NULL )
		return 0;

	m_hHttpConnection = InternetOpenUrl( hInternetSession, strHttpPath, NULL, 0, INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE, 0 );

	if( m_hHttpConnection == NULL )
		return 0;

	TCHAR szBuffer[MAX_PATH]={0,};
	DWORD dwBufferSize = MAX_PATH;
	DWORD dwIndex = 0;
	DWORD dwFileSize = 0;

	// Query remote content length
	if( HttpQueryInfo( m_hHttpConnection, HTTP_QUERY_CONTENT_LENGTH, (LPVOID)&szBuffer, &dwBufferSize, &dwIndex ) != FALSE )
		dwFileSize = (DWORD)_wtoi( szBuffer );

	InternetCloseHandle( m_hHttpConnection );
	return dwFileSize;
}

BOOL CHttpDownload::GetMD5Checksum()
{
	CString strHttpMD5 = m_strHttpPath + L".MD5";
	CString strLocalMD5 = m_strLocalPath + L".MD5";

	HRESULT hr = E_FAIL;
	for( int i = 0 ; i < RETRY_MAX_COUNT ; i++ )
	{
		BOOL bResult = DeleteUrlCacheEntry( strHttpMD5 );
		hr = ::URLDownloadToFile( NULL, strHttpMD5, strLocalMD5, 0, NULL );
		if( hr == S_OK	)
			break;
	}

	if( FAILED( hr ) )
	{
		TRACE( L"MD5 Check File Download Failed!, Error : %ld", hr );
		return FALSE;
	}

	CString strDownloadChecksum;
	CFile fileMD5;
	CFileException e;

	if( !fileMD5.Open( strLocalMD5, CFile::modeRead, &e ) )
		return FALSE;

	char pBuf[100];
	fileMD5.Read( pBuf, 100 );
	fileMD5.Close();
	ClientDeleteFile( strLocalMD5 );

	strDownloadChecksum = pBuf;
	int nIndex = strDownloadChecksum.Find('\n');
	strDownloadChecksum = strDownloadChecksum.Left( nIndex - 1 );

	CString strLocalChecksum = CMD5Checksum::GetMD5( m_strLocalPath );
	// Compare MD5 checksums
	return wcscmp( strLocalChecksum, strDownloadChecksum ) == 0 ? TRUE : FALSE;
}