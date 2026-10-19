#include "stdafx.h"
#include "DnOptionData.h"

//////////////////////////////////////////////////////////////////////////
// CDnOptionData Class
//////////////////////////////////////////////////////////////////////////

CDnOptionData::CDnOptionData()
: m_nWidth( 1280 )
, m_nHeight( 800 )
, m_nGraphicQuality( 0 )
, m_nTextureQuality( 0 )
, m_bWindow( FALSE )
, m_bVSync( FALSE )
, m_bAutoGameStart( FALSE )
, m_nLanguageID( 0 )
, m_bUseDX11( 0 )
{
}

CDnOptionData::~CDnOptionData()
{
	m_vecOptionData.clear();
}

CDnOptionData& CDnOptionData::GetInstance()
{
	static CDnOptionData global;
	return global;
}

void CDnOptionData::SetDefaultResolution()
{
	int cx = GetSystemMetrics( SM_CXSCREEN );
	int cy = GetSystemMetrics( SM_CYSCREEN );
	if( cx > 0 && ( (double)cy / (double)cx ) > 0.625 )
	{
		m_nWidth = 1024;
		m_nHeight = 768;
	}
	else
	{
		m_nWidth = 1280;
		m_nHeight = 800;
	}
}

BOOL CDnOptionData::SaveConfigOption( HWND hWnd )
{
	FILE *stream = NULL;
	TCHAR szFilename[MAX_PATH] = {0,};
	TCHAR szPath[_MAX_PATH] = {0,};
	SHGetSpecialFolderPath( hWnd, szPath, CSIDL_PERSONAL, 0 );

	swprintf_s( szFilename, L"%s\\DragonNest", szPath );
	_wmkdir( szFilename );
	swprintf_s( szFilename, L"%s\\DragonNest\\Config", szPath );
	_wmkdir( szFilename );
	swprintf_s( szFilename, L"%s\\DragonNest\\Config\\%s", szPath, L"Config.ini" );

	CString szInstallPath = szFilename;

	if( _wfopen_s( &stream, szInstallPath.GetString(), L"w+" ) != 0 )
		return FALSE;

	fseek( stream, 0L, SEEK_SET );

	fprintf( stream, " Width %d\n ", m_nWidth );
	fprintf( stream, "Height %d\n ", m_nHeight );
	fprintf( stream, "GraphicQuality %d\n ", m_nGraphicQuality );
	fprintf( stream, "TextureQuality %d\n ", m_nTextureQuality );
	fprintf( stream, "WindowMode %d\n ", m_bWindow ? 1 : 0 );
	fprintf( stream, "VSync %d\n ", m_bVSync ? 1 : 0 );
	fprintf( stream, "LanguageID %d\n ", m_nLanguageID );
	fprintf( stream, "UseDX11 %d\n ", m_bUseDX11 ? 1 : 0 );

	std::vector<stOptionData>::iterator iter = m_vecOptionData.begin();
	for( ; iter != m_vecOptionData.end(); iter++ )
		fprintf( stream, "%s %s\n ", (*iter).m_strOptionField.c_str(), (*iter).m_strOptionValue.c_str() );

	fclose( stream );

	return TRUE;
}

BOOL CDnOptionData::LoadConfigOption( HWND hWnd )
{
	FILE *stream = NULL;
	char szString[256] = {0,};
	TCHAR szFilename[MAX_PATH] = {0,};
	TCHAR szPath[_MAX_PATH] = {0,};
	SHGetSpecialFolderPath( hWnd, szPath, CSIDL_PERSONAL, 0 );

	swprintf_s( szFilename, L"%s\\DragonNest", szPath );
	_wmkdir( szFilename );
	swprintf_s( szFilename, L"%s\\DragonNest\\Config", szPath );
	_wmkdir( szFilename );
	swprintf_s( szFilename, L"%s\\DragonNest\\Config\\%s", szPath, L"Config.ini" );

	CString szInstallPath = szFilename;

	if( _wfopen_s( &stream, szInstallPath.GetString(), L"r+" ) != 0 )
		return FALSE;

	m_vecOptionData.clear();
	fseek( stream, 0L, SEEK_SET );

	for( int i = 0; ; i++ )
	{
		int numRead = fscanf_s( stream, "%s", szString, 256 );
		if( numRead != 1 ) break;
		if( !SetOptionValue( stream, szString ) )
		{
			stOptionData OptionData;
			OptionData.m_strOptionField = szString;
			fscanf_s( stream, "%s", szString, 256 );
			OptionData.m_strOptionValue = szString;
			m_vecOptionData.push_back( OptionData );
		}
	}

	fclose( stream );

	if( m_nWidth == 0 || m_nHeight == 0 )
	{
		SetDefaultResolution();
	}

	return TRUE;
}

BOOL CDnOptionData::SetOptionValue( FILE *stream, char * szString )
{
	if( !szString )
		return FALSE;

	if( strcmp( "Width", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_nWidth) );
		return TRUE;
	}
	else if( strcmp( "Height", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_nHeight) );
		return TRUE;
	}
	else if( strcmp( "GraphicQuality", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_nGraphicQuality) );
		return TRUE;
	}
	else if( strcmp( "TextureQuality", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_nTextureQuality) );
		return TRUE;
	}
	else if( strcmp( "WindowMode", szString ) == 0 )
	{
		int iWindowMode = 0;
		fscanf_s( stream, "%d", &(iWindowMode) );
		m_bWindow = ( iWindowMode != 0 );
		return TRUE;
	}
	else if( strcmp( "VSync", szString ) == 0 )
	{
		int iVSync = 0;
		fscanf_s( stream, "%d", &(iVSync) );
		m_bVSync = ( iVSync != 0 );
		return TRUE;
	}
#ifdef _USE_MULTILANGUAGE
	else if( strcmp( "LanguageID", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_nLanguageID) );
		DNPATCHINFO.SetLanguageParamByLanguageID( m_nLanguageID );
		DNPATCHINFO.SetLocaleGuidePage();
		return TRUE;
	}
#else
	else if( strcmp( "LanguageID", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_nLanguageID) );
		return TRUE;
	}
#endif
	else if( strcmp( "UseDX11", szString ) == 0 )
	{
		fscanf_s( stream, "%d", &(m_bUseDX11) );
		return TRUE;
	}

	return FALSE;
}
