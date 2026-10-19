#include "stdafx.h"
#include "DnPatchInfo.h"
#include "VarArg.h"
#include "wininet.h"
#include "EtFileSystem.h"
#include "Stream.h"
#include "DnLauncher.h"
#include "DnControlData.h"
#include "DnFirstPatchInfo.h"
#include "DnFIrstPatchDlg.h"
#include "MD5Text.h"
#include "ResourceInit.h"

#pragma comment ( lib, "Wininet.lib" )
#pragma warning ( disable : 4018 )

extern CString g_szCmdLine;
extern CString g_szCommandLinePatchURL;
extern int g_nInitErrorCode;
extern CDnFIrstPatchDlg	 g_FirstPatchDlg;

//////////////////////////////////////////////////////////////////////////
// CDnPatchInfo Class
//////////////////////////////////////////////////////////////////////////

CDnPatchInfo::CDnPatchInfo()
: m_bSetPatchInfo( FALSE )
, m_nClientVersion( -1 )
, m_nServerVersion( -1 )
#ifdef _USE_AUTOUPDATE
, m_nNextVersion( -1 )
#endif // _USE_AUTOUPDATE
, m_wOpen( 0 )
, m_nLanguageOffset( 0 )
{
}

CDnPatchInfo::~CDnPatchInfo()
{
	m_vecChannelList.clear();
	m_vecSkipVersion.clear();
	m_vecLoginServerList.clear();
}

CDnPatchInfo& CDnPatchInfo::GetInstance()
{
	static CDnPatchInfo global;
	return global;
}

HRESULT CDnPatchInfo::Init()
{
	LogWnd::TraceLog( L"PatchInfo Init Start!" );
	// Read local config options.
	if( FAILED( DownLoadPatchConfigList() ) )
		return E_FAIL;

	// Remove temporary downloaded XML file.
	if( FAILED( ParsingPatchConfigList() ) )
		return E_FAIL;

	// Read local config options.
	TCHAR szCurDir[ _MAX_PATH ]={0,};
	GetCurrentDirectory( _MAX_PATH, szCurDir );
	m_strClientPath = szCurDir;

	int nLast = m_strClientPath.GetLength();
	if ( nLast > 0 && m_strClientPath[nLast - 1] != _T('\\') && m_strClientPath[nLast - 1] != _T('/') )
		m_strClientPath += _T('\\');

	// Remove temporary downloaded XML file.
	ClientDeleteFile( m_strClientPath + PATCHCONFIG_LIST );
	LogWnd::TraceLog( L"PatchInfo Init Success!" );

	return S_OK;
}

#ifdef _USE_MULTILANGUAGE

void CDnPatchInfo::SetLanguageParam( CString strLanguageParam )
{
	m_strLanguageParam = strLanguageParam;
	m_nLanguageOffset = GetLanguageResourceIndexOffset( strLanguageParam );

	DNCTRLDATA.SetLanguageParam( m_strLanguageParam );
}

void CDnPatchInfo::SetLanguageParamByLanguageID( int nLanguageID )
{
	switch( nLanguageID )
	{
	case LANG_VIETNAMESE:
		DNPATCHINFO.SetLanguageParam( L"VNM" );
		break;
	case LANG_ENGLISH:
	default:
		DNPATCHINFO.SetLanguageParam( L"ENG" );
		break;
	}
}

void CDnPatchInfo::AddLanguageParamToTotalParam()
{
	if( m_strLanguageParam.GetLength() > 0 )
	{
		CString strLanguageParam;
		strLanguageParam.Format( _T( " /language:%s" ), m_strLanguageParam );
		m_strTotalParam += strLanguageParam;
	}
}

void CDnPatchInfo::SetLocaleGuidePage()
{
	std::vector<stChannelListSet>::iterator iter1 = m_vecChannelList.begin();

	if( iter1 != m_vecChannelList.end() )
	{
		std::vector<stPartitionListSet>::iterator iter2 = (*iter1).m_vecPartitionList.begin();

		for( ; iter2 != (*iter1).m_vecPartitionList.end(); iter2++ )
		{
			if( (*iter2).m_strPartitionName == m_strLanguageParam )
			{
				m_strGuidepageUrl = (*iter2).m_strGuidepageUrl;
				break;
			}
		}
	}
}

#endif // _USE_MULTILANGUAGE

HRESULT CDnPatchInfo::DownLoadPatchConfigList()
{
	// Set client directory path.
	WCHAR LocalLoginListUrl[1024]={ 0, };
	TCHAR szCurDir[ _MAX_PATH ]={0,};
	bool bUseLocalURL = false;
	GetCurrentDirectory( _MAX_PATH, szCurDir );

	TCHAR szLocalURL[MAX_PATH]={0,};
	swprintf_s( szLocalURL, L"%s\\%s", szCurDir,  L"LocalURL.ini" );

	FILE *stream = NULL;
	char szString[256]={0,};
	if( _wfopen_s( &stream, szLocalURL, L"r" ) == 0 )
	{
		fseek( stream, 0L, SEEK_SET );
		fscanf_s( stream, "%s", szString, 256 );

		fclose( stream );

		MultiByteToWideChar( CP_ACP, 0, szString, -1, LocalLoginListUrl, _countof(LocalLoginListUrl) );
		bUseLocalURL = true;
	}

	WCHAR PatchConfigListUrl[1024]={ 0, };
	//kat 2016
	// Command line override for PatchConfigList.xml URL if specified
	// Read local config options.
	//else
		wcscpy_s( PatchConfigListUrl, _countof(PatchConfigListUrl), PATCHCONFIG_LIST_URL );

	LogWnd::TraceLog( _T("DownLoad PatchConfigList (FileName %s)"), PATCHCONFIG_LIST );

//	CString test;
// Read local config options.
//	ErrorMessageBoxLog( test );
//	LogWnd::TraceLog( test );

	HRESULT hr = S_FALSE;
	for( int i=0; i<RETRY_MAX_COUNT; i++ )
	{
		if( bUseLocalURL )	// Check if LocalURL.ini override is used
		{
			BOOL bResult = DeleteUrlCacheEntry( CVarArg<__MAX_PATH>(_T("%s"), LocalLoginListUrl) );
			hr = DownloadToFile( CVarArg<__MAX_PATH>(_T("%s"), LocalLoginListUrl), CVarArg<__MAX_PATH>(_T(".\\%s"), PATCHCONFIG_LIST) );
		}
		else
		{
			BOOL bResult = DeleteUrlCacheEntry( CVarArg<__MAX_PATH>(_T("%s%s"), PatchConfigListUrl, PATCHCONFIG_LIST) );
			hr = DownloadToFile( CVarArg<__MAX_PATH>(_T("%s%s"), PatchConfigListUrl, PATCHCONFIG_LIST), CVarArg<__MAX_PATH>(_T(".\\%s"), PATCHCONFIG_LIST) );
		}
		if( hr == S_OK )
			break;
	}

	if( hr == S_FALSE )
		hr = E_FAIL;

	if( FAILED( hr ) )
	{
		ErrorMessageBoxLog( _S( STR_LOAD_PATCHCONFIGLIST_FAILED + DNPATCHINFO.GetLanguageOffset() ) );
		g_nInitErrorCode = INIT_ERROR_PATCHCONFIGLIST_DOWNLOAD;
	}

	return hr;
}

HRESULT CDnPatchInfo::ParsingPatchConfigList()
{
	LogWnd::TraceLog( L"ParsingPatchConfigList" );

	if( ReadConfig() )	// Read local config options.
		return S_OK;

	CXMLParser aParser;
	{
		USES_CONVERSION;

		if( !aParser.Open( CVarArgA<__MAX_PATH>(".\\%s", T2CA(PATCHCONFIG_LIST)) ) )
		{
			LogWnd::Log( LogLevel::Error, _T("%s Files - Parsing Failed."), PATCHCONFIG_LIST );
			g_nInitErrorCode = INIT_ERROR_PATCHCONFIGLIST_PARSING;
			return E_FAIL;
		}
	}

	WCHAR szChannellName[MAX_PATH] = { '\0', };
	WCHAR szLocalName[MAX_PATH] = { '\0', };
	WCHAR szLoginAddr[MAX_PATH] = { '\0', };
	WCHAR szGuidepageAddr[1024] = { '\0', };
	WCHAR szHomepageAddr[1024] = { '\0', };
	WCHAR szUpdateAddr[1024] = { '\0', };
	WCHAR szVersionAddr[1024] = { '\0', };
	WCHAR szStateTestAddr[1024] = { '\0', };

	WORD wLoginPort = 0;
	WORD wNew = 0;
	WORD wPartitionID = 0;
	WORD wOpen = 0;

	std::vector<stLoginServerSet> vecLoginServerList;
	int nPartitionCount = 0;

	if( aParser.FirstChildElement( "document", true ) || aParser.FirstChildElement( "Document", true ) || aParser.FirstChildElement( NULL, true ) ) {
		const char* pszChannelTag = NULL;
		if( aParser.FirstChildElement( "ChannelList", true ) )
			pszChannelTag = "ChannelList";
		else if( aParser.FirstChildElement( "ChannelingList", true ) )
			pszChannelTag = "ChannelingList";

		if( pszChannelTag ) {
			do {
				const WCHAR* pChanAttr = aParser.GetAttribute( "channel_name" );
				if( !pChanAttr || pChanAttr[0] == L'\0' )
					pChanAttr = aParser.GetAttribute( "AreaShowName" );
				if( !pChanAttr || pChanAttr[0] == L'\0' )
					pChanAttr = aParser.GetAttribute( "channelingName" );

				if( pChanAttr )
					::wcsncpy_s( szChannellName, _countof(szChannellName), pChanAttr, _countof(szChannellName) );
				else
					szChannellName[0] = L'\0';

				stChannelListSet channellistset;
				channellistset.m_strChannelName = szChannellName;

				if( aParser.FirstChildElement( "Local", true ) ) {
					do {
						const WCHAR* pLocAttr = aParser.GetAttribute( "local_name" );
						if( !pLocAttr || pLocAttr[0] == L'\0' )
							pLocAttr = aParser.GetAttribute( "localName" );

						if( pLocAttr )
							::wcsncpy_s( szLocalName, _countof(szLocalName), pLocAttr, _countof(szLocalName) );
						else
							szLocalName[0] = L'\0';

						wNew = 0;
						wPartitionID = 0;
						wOpen = 0;

						if( aParser.GetAttribute( "new" ) )
							wNew = (WORD)_wtoi( aParser.GetAttribute( "new" ) );

						const WCHAR* pPartAttr = aParser.GetAttribute( "partitionid" );
						if( !pPartAttr )
							pPartAttr = aParser.GetAttribute( "partitionId" );
						if( pPartAttr )
							wPartitionID = (WORD)_wtoi( pPartAttr );

						if( aParser.GetAttribute( "open" ) )
							wOpen = (WORD)_wtoi( aParser.GetAttribute( "open" ) );

						szGuidepageAddr[0] = L'\0';
						szHomepageAddr[0] = L'\0';
						szVersionAddr[0] = L'\0';
						szUpdateAddr[0] = L'\0';
						szStateTestAddr[0] = L'\0';

						if( aParser.FirstChildElement( "guidepage", false ) )
						{
							const WCHAR* pAddr = aParser.GetAttribute( "addr" );
							if( !pAddr ) pAddr = aParser.GetAttribute( "web" );
							if( pAddr ) ::wcsncpy_s( szGuidepageAddr, _countof(szGuidepageAddr), pAddr, _countof(szGuidepageAddr) );
						}
						else if( aParser.FirstChildElement( "Launcher", false ) || aParser.FirstChildElement( "launcher", false ) )
						{
							const WCHAR* pWeb = aParser.GetAttribute( "web" );
							if( !pWeb ) pWeb = aParser.GetAttribute( "addr" );
							if( pWeb ) ::wcsncpy_s( szGuidepageAddr, _countof(szGuidepageAddr), pWeb, _countof(szGuidepageAddr) );
						}

						if( aParser.FirstChildElement( "homepage", false ) || aParser.FirstChildElement( "Homepage", false ) )
						{
							const WCHAR* pAddr = aParser.GetAttribute( "addr" );
							if( pAddr ) ::wcsncpy_s( szHomepageAddr, _countof(szHomepageAddr), pAddr, _countof(szHomepageAddr) );
						}

						if( aParser.FirstChildElement( "version", false ) || aParser.FirstChildElement( "Version", false ) )
						{
							const WCHAR* pAddr = aParser.GetAttribute( "addr" );
							if( pAddr ) ::wcsncpy_s( szVersionAddr, _countof(szVersionAddr), pAddr, _countof(szVersionAddr) );
						}

						if( aParser.FirstChildElement( "update", false ) || aParser.FirstChildElement( "Update", false ) )
						{
							const WCHAR* pAddr = aParser.GetAttribute( "addr" );
							if( pAddr ) ::wcsncpy_s( szUpdateAddr, _countof(szUpdateAddr), pAddr, _countof(szUpdateAddr) );
						}

						if( aParser.FirstChildElement( "statetest", false ) || aParser.FirstChildElement( "StateCheck", false ) || aParser.FirstChildElement( "statecheck", false ) )
						{
							const WCHAR* pAddr = aParser.GetAttribute( "addr" );
							if( pAddr ) ::wcsncpy_s( szStateTestAddr, _countof(szStateTestAddr), pAddr, _countof(szStateTestAddr) );
						}

						const char* pszLoginTag = NULL;
						if( aParser.FirstChildElement( "login", false ) )
							pszLoginTag = "login";
						else if( aParser.FirstChildElement( "Login", false ) )
							pszLoginTag = "Login";

						if( pszLoginTag ) {
							do {
								const WCHAR* pAddr = aParser.GetAttribute( "addr" );
								const WCHAR* pPort = aParser.GetAttribute( "port" );
								if( pAddr && pPort )
								{
									::wcsncpy_s( szLoginAddr, _countof(szLoginAddr), pAddr, _countof(szLoginAddr) );
									wLoginPort = (WORD)_wtoi( pPort );

									if( szLoginAddr[0] != L'\0' && wLoginPort )
									{
										stLoginServerSet loginserverset;
										loginserverset.m_strLoginUrl = szLoginAddr;
										loginserverset.m_wLoginPort = wLoginPort;
										vecLoginServerList.push_back( loginserverset );
									}
								}
							} while( aParser.NextSiblingElement( pszLoginTag ) );
						}

						SetPartitionList( channellistset, wNew, wPartitionID, wOpen, szGuidepageAddr, szHomepageAddr, 
											szLocalName, szVersionAddr, szUpdateAddr, szStateTestAddr, vecLoginServerList );
						nPartitionCount++;
						vecLoginServerList.clear();

					} while( aParser.NextSiblingElement( "Local" ) );

					aParser.GoParent();
				}

				m_vecChannelList.push_back( channellistset );
			} while( aParser.NextSiblingElement( pszChannelTag ) );

			aParser.GoParent();
		}
		aParser.GoParent();
	}

	if( m_vecChannelList.empty() || nPartitionCount == 0 )
	{
		LogWnd::Log( LogLevel::Error, _T("ParsingPatchConfigList Failed: No valid channels or partitions found in %s"), PATCHCONFIG_LIST );
		g_nInitErrorCode = INIT_ERROR_PATCHCONFIGLIST_PARSING;
		return E_FAIL;
	}

	LogWnd::TraceLog( L"ParsingPatchConfigList Complete: %d channels, %d partitions", (int)m_vecChannelList.size(), nPartitionCount );
	return S_OK;
}

BOOL CDnPatchInfo::ReadConfig()
{
	CHAR szCurDir[ _MAX_PATH ]= { 0, };
	CHAR szPatchInfoName[128]={0,};

	// Populate partition and channel lists
	CHAR ModuleName[MAX_PATH] ={0,};
	::GetModuleFileNameA( NULL, ModuleName , MAX_PATH );

	CHAR drive[_MAX_DRIVE];
	CHAR dir[_MAX_DIR];
	CHAR fname[_MAX_FNAME];
	CHAR ext[_MAX_EXT];

	_splitpath( ModuleName , drive, dir, fname, ext );

	CStringA Str;

#ifndef _DEBUG
	Str = drive;
	Str += dir;
#endif // !_DEBUG
	Str += PATCHINFONAME;

	CFileStream* pStream = new CFileStream( Str.GetBuffer() );

	if( pStream == NULL || !pStream->IsValid() )
	{
		SAFE_DELETE( pStream );
		return FALSE;
	}

	int nSize = pStream->Size()+ 3 ;	
	TCHAR *szCmdLine = new TCHAR[nSize];
	char *szTemp = new char[nSize];

	ZeroMemory( szCmdLine , sizeof(TCHAR)*nSize );
	ZeroMemory( szTemp , sizeof(char)*nSize );

	pStream->Read( szTemp, nSize );
	SAFE_DELETE( pStream );
	MultiByteToWideChar( CP_ACP, 0, szTemp, -1, szCmdLine, sizeof(TCHAR)*nSize );
	ParseCommandLineDev( szCmdLine );

	SAFE_DELETE_ARRAY( szCmdLine );
	SAFE_DELETE_ARRAY( szTemp );
	SAFE_DELETE( pStream );

	return TRUE;
}

BOOL CDnPatchInfo::SetPatchInfo()
{
	if( !SetBasePatchInfo() )	// Set base patch configuration
	{
		g_nInitErrorCode = INIT_ERROR_SET_PATCHINFO;
		m_bSetPatchInfo = FALSE;
		return FALSE;
	}

	if( !SetParameter() )		// Set launch command line parameters
	{
		g_nInitErrorCode = INIT_ERROR_SET_PARAMETER;
		m_bSetPatchInfo = FALSE;
		return FALSE;
	}

	LoadPatchVersionInfo();		// Load client and server version numbers

	m_bSetPatchInfo = TRUE;
	return TRUE;
}

BOOL CDnPatchInfo::SetFirstPatchInfo()
{
	unsigned int nSelectChannelNum = 0;
	unsigned int nSelectPartitionNum = 0;

	if( m_vecChannelList.empty() )
	{
		LogWnd::Log( LogLevel::Error, _T("SetFirstPatchInfo: m_vecChannelList is empty!") );
		return FALSE;
	}

	if( nSelectChannelNum >= m_vecChannelList.size() )
		return FALSE;

	stChannelListSet& channel = m_vecChannelList[nSelectChannelNum];
	if( channel.m_vecPartitionList.empty() || nSelectPartitionNum >= channel.m_vecPartitionList.size() )
		return FALSE;

	stPartitionListSet& partition = channel.m_vecPartitionList[nSelectPartitionNum];

	ResetPatchInfo();

	m_strGuidepageUrl = partition.m_strGuidepageUrl;
	m_strHomepageUrl = partition.m_strHomepageUrl;
	m_strPartitionName = partition.m_strPartitionName;
	m_strVersionUrl = partition.m_strVersionUrl;
	m_strPatchUrl = partition.m_strPatchUrl;
	m_wOpen = partition.m_wOpen;

	for( size_t i = 0; i < partition.m_vecLoginServerList.size(); ++i )
	{
		const stLoginServerSet& login = partition.m_vecLoginServerList[i];
		m_vecLoginServerList.push_back( login );

		CString strIP;
		CString strPort;
		strIP.Format( _T("%s"), login.m_strLoginUrl.GetString() );
		strPort.Format( _T("%d"), login.m_wLoginPort );
		if( i + 1 < partition.m_vecLoginServerList.size() )
		{
			strIP += _T(";");
			strPort += _T(";");
		}
		m_strIPList += strIP; 
		m_strPortList += strPort;
	}

	if( m_vecLoginServerList.empty() || m_strIPList.GetLength() == 0 || m_strPortList.GetLength() == 0 )
	{
		LogWnd::Log( LogLevel::Error, _T("SetFirstPatchInfo: LoginServerList is empty!") );
		return FALSE;
	}

	return TRUE;
}

BOOL CDnPatchInfo::SetBasePatchInfo()
{
	unsigned int nSelectChannelNum = 0;
	unsigned int nSelectPartitionNum = 0;

	if( m_vecChannelList.empty() )
	{
		LogWnd::Log( LogLevel::Error, _T("SetBasePatchInfo: m_vecChannelList is empty!") );
		return FALSE;
	}

	if( nSelectChannelNum >= m_vecChannelList.size() )
	{
		LogWnd::Log( LogLevel::Error, _T("SetBasePatchInfo: Channel index %u out of range"), nSelectChannelNum );
		return FALSE;
	}

	stChannelListSet& channel = m_vecChannelList[nSelectChannelNum];
	if( channel.m_vecPartitionList.empty() || nSelectPartitionNum >= channel.m_vecPartitionList.size() )
	{
		LogWnd::Log( LogLevel::Error, _T("SetBasePatchInfo: No partitions in channel %s"), channel.m_strChannelName.GetString() );
		return FALSE;
	}

	stPartitionListSet& partition = channel.m_vecPartitionList[nSelectPartitionNum];

	ResetPatchInfo();

	m_strGuidepageUrl = partition.m_strGuidepageUrl;
	m_strHomepageUrl = partition.m_strHomepageUrl;
	m_strPartitionName = partition.m_strPartitionName;
	m_strVersionUrl = partition.m_strVersionUrl;
	m_strPatchUrl = partition.m_strPatchUrl;
	m_wOpen = partition.m_wOpen;

	for( size_t i = 0; i < partition.m_vecLoginServerList.size(); ++i )
	{
		const stLoginServerSet& login = partition.m_vecLoginServerList[i];
		m_vecLoginServerList.push_back( login );

		CString strIP;
		CString strPort;
		strIP.Format( _T("%s"), login.m_strLoginUrl.GetString() );
		strPort.Format( _T("%d"), login.m_wLoginPort );
		if( i + 1 < partition.m_vecLoginServerList.size() )
		{
			strIP += _T(";");
			strPort += _T(";");
		}
		m_strIPList += strIP; 
		m_strPortList += strPort;
	}

	if( m_vecLoginServerList.empty() || m_strIPList.GetLength() == 0 || m_strPortList.GetLength() == 0 )
	{
		LogWnd::Log( LogLevel::Error, _T("SetBasePatchInfo: LoginServerList is empty!") );
		return FALSE;
	}

	LogWnd::TraceLog( L"SetBasePatchInfo Success: Partition[%s], IPs[%s], Ports[%s]",
		m_strPartitionName.GetString(), m_strIPList.GetString(), m_strPortList.GetString() );

	return TRUE;
}

void CDnPatchInfo::LoadPatchVersionInfo()
{
	LogWnd::TraceLog( L"LoadPatchVersionInfo" );

	if( m_nClientVersion == -1 )
		LoadClientVersion();

	if( m_nServerVersion == -1 )
		LoadServerVersion();

	LogWnd::TraceLog( L"LoadPatchVersionInfo Complete : Client Ver[%d] / Server Ver[%d]", m_nClientVersion, m_nServerVersion );
}

void CDnPatchInfo::LoadClientVersion()
{
#ifdef _USE_SINGLE_CLIENT
	LoadClientVersionFromResourceFile();
#else
	LoadClientVersionFromVersionFile();
#endif // _USE_SINGLE_CLIENT
}

#ifdef _USE_SINGLE_CLIENT
void CDnPatchInfo::LoadClientVersionFromResourceFile()
{
	CString szFindPackingFile;

	szFindPackingFile = m_strClientPath;	
	szFindPackingFile += _T("Resource00.pak");

	CEtPackingFile *pPackingFile = new CEtPackingFile();
	CEtFileHandle *FileHandle = NULL;

	char StrVersionName[32] = "\\version.cfg";
	char szTemp[ _MAX_PATH ] = {0,};
	char *pBuff = NULL;
	int nFileSize = 0;

	WideCharToMultiByte( CP_ACP, 0, szFindPackingFile.GetBuffer(), -1, szTemp, _MAX_PATH, NULL, NULL );

	if( pPackingFile->OpenFileSystem( szTemp ) )
	{
		FileHandle = pPackingFile->OpenFile( StrVersionName );

		if( FileHandle ) 
		{
			nFileSize = FileHandle->GetFileContext()->dwAllocSize;
			pBuff = new char[nFileSize];
			FileHandle->Read( pBuff, nFileSize );

			char arg1[256]={0,}, arg2[256]={0,};
			char *szToken = NULL, *nextToken = NULL;
			char delimiters[] = "\r\n";

			szToken = strtok_s( pBuff, delimiters, &nextToken );

			while( szToken != NULL )
			{
				if( sscanf_s( szToken, "%s %s", arg1, (unsigned int)sizeof(arg1), arg2, (unsigned int)sizeof(arg2) ) )
				{
					_strlwr_s( arg1 );
					if( _stricmp( arg1, "version" ) == 0 )	// Match version key
					{
						m_nClientVersion = atol( arg2 );
						//break;
					}
					else if( _stricmp( arg1, "module") == 0 ) // Match module key
					{
						DNFIRSTPATCHINFO.SetLocalModuleVersion(atol( arg2 ));
					}
				}
				szToken = strtok_s( NULL, delimiters, &nextToken );
			}

			SAFE_DELETE( pBuff );
		}
		else 
		{
			CString strFilePath;
			strFilePath = m_strClientPath;
			strFilePath += CLIENT_VERSION_NAME;

			CString strTempName;
			strTempName = _T("Version");
			m_nClientVersion = LoadVersion( strFilePath , strTempName);

			strTempName = _T("Module");
			int nModuleVersion = LoadVersion( strFilePath , strTempName);
			DNFIRSTPATCHINFO.SetLocalModuleVersion(nModuleVersion);

			if( nModuleVersion <= -1 )
			{
				// If client version is -1, fallback to local version file
				if( m_nClientVersion != -1 )
				{
					nModuleVersion = m_nClientVersion;
					DNFIRSTPATCHINFO.SetLocalModuleVersion(nModuleVersion);
				}
				else
					DNFIRSTPATCHINFO.SetFirstPatchStatus(DNFIRSTPATCHINFO.EM_FIRSTPATCH_VERSION_FAIL);
			}
		

			if( m_nClientVersion == -1 || nModuleVersion == -1 )
			{
				ErrorMessageBoxLog( _T("Fail to load client version") );
			}	
			else 
			{
				// Fallback: load version from resource file
				char strVersion[256] = {0,};
				sprintf_s( strVersion, sizeof(strVersion), "Version %d\r\nModule %d", m_nClientVersion, DNFIRSTPATCHINFO.GetLocalModuleVersion() );
				char StrVersionName[32] = "\\version.cfg";
				pPackingFile->AddFile( StrVersionName, strVersion, sizeof(strVersion) );
			}
		}

		pPackingFile->CloseFile( FileHandle );
		pPackingFile->CloseFileSystem();
	}
	else
	{
		LogWnd::Log( LogLevel::Error, _T("Checking Client Version: %s : %d"), szFindPackingFile, GetLastError() );
		ErrorMessageBoxLog(_T("Fail to Read Resource Pak"));
		m_nClientVersion = -1;
		DNFIRSTPATCHINFO.SetLocalModuleVersion(-1);
	}

	SAFE_DELETE( pPackingFile );
}

#else // _USE_SINGLE_CLIENT

void CDnPatchInfo::LoadClientVersionFromVersionFile()
{
	CString szVersionFile;

	szVersionFile = m_strClientPath;
	szVersionFile += _T("\\version.cfg");

	CString strTempName;
	
	strTempName = _T("Version");
	m_nClientVersion = LoadVersion( szVersionFile , strTempName);

	strTempName = _T("Module");
	int nModuleVersion = LoadVersion( szVersionFile , strTempName);
	DNFIRSTPATCHINFO.SetLocalModuleVersion( nModuleVersion );

	if( nModuleVersion <= -1 )
	{
		// If client version is -1, fallback to local version file
		if( m_nClientVersion != -1 )
		{
			nModuleVersion = m_nClientVersion;
			DNFIRSTPATCHINFO.SetLocalModuleVersion(nModuleVersion);
		}
		else
			DNFIRSTPATCHINFO.SetFirstPatchStatus(DNFIRSTPATCHINFO.EM_FIRSTPATCH_VERSION_FAIL);
	}

	if( m_nClientVersion == -1  || nModuleVersion == -1)
	{
		LogWnd::Log( LogLevel::Error, _T("Checking Client Version: %s : %d"), szVersionFile, m_nClientVersion );
		ErrorMessageBoxLog( _T("Fail to read resource pak") );
	}
}

#endif // _USE_SINGLE_CLIENT

void CDnPatchInfo::LoadServerVersion()
{
	CString strFilePath;
	strFilePath = m_strClientPath;
	strFilePath += SERVER_VERSION_NAME;

	HRESULT hr = E_FAIL;
	for( int i=0; i<RETRY_MAX_COUNT; i++ )
	{
		CString strVersionUrlFile = m_strVersionUrl + SERVER_VERSION_NAME;
		BOOL bResult = DeleteUrlCacheEntry( strVersionUrlFile.GetBuffer() );	// Clear WinInet URL cache for PatchInfoServer.cfg
		hr = DownloadToFile( strVersionUrlFile.GetBuffer(), strFilePath.GetBuffer() );
		if( hr == S_OK )
			break;
	}

	if( hr == S_OK )
	{
		CString strTempName;
		strTempName = _T("Version");
		m_nServerVersion = LoadVersion( strFilePath, strTempName );
		
		DeleteFile( strFilePath );
	}
	else
		LogWnd::Log( LogLevel::Error, _T("PatchInfoServer.cfg download Failed!") );


	if( m_nClientVersion <= 0 || m_nServerVersion <= 0 )
	{
		ErrorMessageBoxLog(_S( STR_CONFIRM_PATCH_VER_FAILED + DNPATCHINFO.GetLanguageOffset()));

		if(m_nClientVersion == -1)
			LogWnd::Log(LogLevel::Error, _T("Client Version is %d - Error"), m_nClientVersion);
		else if( m_nServerVersion == -1)
			LogWnd::Log(LogLevel::Error, _T("Server Version is %d - Error"), m_nServerVersion);
	}
}

int CDnPatchInfo::LoadVersion( CString& szFilePath )
{
	char* buffer = NULL;
	HANDLE	hFile = INVALID_HANDLE_VALUE;
	int nVersion = 0;

	hFile = CreateFile( szFilePath.GetBuffer(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );

	if( hFile == INVALID_HANDLE_VALUE )
		return -1;

	DWORD tmp = 0;
	DWORD nFileSize = 0;
	nFileSize = GetFileSize( hFile, &tmp );
	nFileSize++;

	// Validate version.cfg file size
	if( nFileSize < 5 )
	{
		AfxMessageBox( _T("Error the old version.cfg.") );
		CloseHandle(hFile);
		return -1; 
	}

	buffer = new char[nFileSize+1];
	if( buffer == NULL )
		return -1;

	ZeroMemory( buffer, nFileSize+1 );

	DWORD nReadSize = 0;
	ReadFile( hFile, buffer, nFileSize, &nReadSize, NULL );
	CloseHandle( hFile );	

	char arg1[256]={0,}, arg2[256]={0,};
	char *szToken = NULL, *nextToken = NULL;
	char delimiters[] = "\r\n";

	szToken = strtok_s( buffer, delimiters, &nextToken );

	while( szToken != NULL )
	{
		if( sscanf_s( szToken, "%s %s", arg1, (unsigned int)sizeof(arg1), arg2, (unsigned int)sizeof(arg2) ) )
		{
			_strlwr_s( arg1 );
			// Match version key
			if( _stricmp( arg1, "version" ) == 0 )
				nVersion = atol( arg2 );
			else if( _stricmp( arg1, "skipnum" ) == 0 )
			{
				int nValue = atol( arg2 );

				std::vector<int>::iterator itSkip = std::find( m_vecSkipVersion.begin(), m_vecSkipVersion.end(), nValue );

				if( itSkip == m_vecSkipVersion.end() )
					m_vecSkipVersion.push_back( nValue );
			}
#ifdef _USE_AUTOUPDATE
			else if( _stricmp( arg1, "nextversion" ) == 0 )
				m_nNextVersion = atol( arg2 );
#endif // _USE_AUTOUPDATE
		}
		szToken = strtok_s( NULL, delimiters, &nextToken );
	}
	SAFE_DELETE_ARRAY( buffer );

	return nVersion;
}

int CDnPatchInfo::LoadVersion( CString& szFilePath, CString szTypeName )
{
	char*	buffer = NULL;
	HANDLE	hFile  = INVALID_HANDLE_VALUE;
	int		nVersion = -1;

	hFile = CreateFile( szFilePath.GetBuffer(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );

	if( hFile == INVALID_HANDLE_VALUE )
		return -1;

	DWORD tmp = 0;
	DWORD nFileSize = 0;
	nFileSize = GetFileSize( hFile, &tmp );
	nFileSize++;

	// Validate version.cfg file size
	if( nFileSize < 5 )
	{
		AfxMessageBox( _T("Error the old version.cfg.") );
		CloseHandle(hFile);
		return -1; 
	}

	buffer = new char[nFileSize+1];
	if( buffer == NULL )
		return -1;

	ZeroMemory( buffer, nFileSize+1 );

	DWORD nReadSize = 0;
	ReadFile( hFile, buffer, nFileSize, &nReadSize, NULL );
	CloseHandle( hFile );	

	char arg1[256]={0,}, arg2[256]={0,};
	char *szToken = NULL, *nextToken = NULL;
	char delimiters[] = "\r\n";

	szToken = strtok_s( buffer, delimiters, &nextToken );
	int nValue = 0;
	while( szToken != NULL )
	{
		if( sscanf_s( szToken, "%s %s", arg1, (unsigned int)sizeof(arg1), arg2, (unsigned int)sizeof(arg2) ) )
		{
			_strlwr_s( arg1 );

			char szTemp[ _MAX_PATH ] = {0,};
			WideCharToMultiByte( CP_ACP, 0, szTypeName.GetBuffer(), -1, szTemp, _MAX_PATH, NULL, NULL );

			if( _stricmp( arg1, szTemp ) == 0 )
			{
				nVersion = atol( arg2 );
			}
		}
		szToken = strtok_s( NULL, delimiters, &nextToken );
	}
	SAFE_DELETE_ARRAY( buffer );

	return nVersion;
}

void CDnPatchInfo::SetClientPath( CString strClientPath )
{
	// Read config options
	m_strClientPath = strClientPath;

	int nLast = m_strClientPath.GetLength();
	if ( nLast > 0 && m_strClientPath[nLast - 1] != _T('\\') && m_strClientPath[nLast - 1] != _T('/') )
		m_strClientPath += _T('\\');
}

BOOL CDnPatchInfo::SetParameter()
{
	if( m_strIPList.GetLength() == 0 || m_strPortList.GetLength() == 0 )
	{
		LogWnd::Log( LogLevel::Error, _T("SetParameter Failed: IPList[%s], PortList[%s]"),
			m_strIPList.GetString(), m_strPortList.GetString() );
		return FALSE;
	}

	m_strOptionParam.Format( _T("/ip:%s /port:%s /Lver:%d /use_packing"), m_strIPList.GetString(), m_strPortList.GetString(), LAUNCHER_VERSION );
	m_strTotalParam.Format( _T( "%s %s" ), g_szCmdLine.GetString(), m_strOptionParam.GetString() );

	LogWnd::TraceLog( L"SetParameter Success: TotalParam[%s]", m_strTotalParam.GetString() );
	return TRUE;
}

void CDnPatchInfo::ResetPatchInfo()
{
	m_strGuidepageUrl.Empty();
	m_strHomepageUrl.Empty();
	m_strPartitionName.Empty();
	m_strVersionUrl.Empty();
	m_strPatchUrl.Empty();
	m_nClientVersion = -1;
	m_nServerVersion = -1;
	m_wOpen = 0;
	m_vecLoginServerList.clear();

	m_strIPList.Empty();
	m_strPortList.Empty();
	m_strOptionParam.Empty();
	m_strTotalParam.Empty();
}

void CDnPatchInfo::SetPartitionList( stChannelListSet& channellistset, WORD dwNew, WORD wPartitionId, WORD wOpen, CString strGuidepageUrl, CString strHomepageUrl, 
									CString strPartitionName, CString strVersionUrl, CString strPatchUrl, CString strStateTestUrl, std::vector<stLoginServerSet>& vecLoginServerList )
{
	stPartitionListSet serverlistset;
	serverlistset.m_wNew = dwNew;
	serverlistset.m_wPartitionId = wPartitionId;
	serverlistset.m_wOpen = wOpen;
	serverlistset.m_strGuidepageUrl = strGuidepageUrl;
	serverlistset.m_strHomepageUrl = strHomepageUrl;
	serverlistset.m_strPartitionName = strPartitionName;
	serverlistset.m_strVersionUrl = strVersionUrl;
	serverlistset.m_strPatchUrl = strPatchUrl;
	serverlistset.m_strStateTestUrl = strStateTestUrl;

	std::vector<stLoginServerSet>::iterator iter = vecLoginServerList.begin();
	for( ; iter != vecLoginServerList.end(); iter++ )
		serverlistset.m_vecLoginServerList.push_back( *iter );

	channellistset.m_vecPartitionList.push_back( serverlistset );
}

void CDnPatchInfo::ParseCommandLineDev( LPCTSTR szCommandLine )
{
	if( !szCommandLine )
		return;

	LPCTSTR szlpURL = L"urlpatch:";
	LPCTSTR szlpVersion = L"urlversion:";
	LPCTSTR szlpGuidepage = L"guidepage:";
	LPCTSTR szlpHomepage = L"homepage:";
	LPCTSTR szlpIP = L"ip:";
	LPCTSTR szlpPort = L"port:";

	std::wstring wszCmdLine = szCommandLine;	 
	std::vector<std::wstring> tokens;
	TokenizeW( wszCmdLine, tokens, std::wstring(L"\r\n"));

	std::vector<stLoginServerSet> vecLoginServerList;
	WCHAR szLoginAddr[MAX_PATH] = { '\0', };
	WCHAR szGuidepageAddr[1024] = { '\0', };
	WCHAR szHomepageAddr[1024] = { '\0', };
	WCHAR szUpdateAddr[1024] = { '\0', };
	WCHAR szVersionAddr[1024] = { '\0', };
	WORD wLoginPort = 0;

	for( int i=0; i<(int)tokens.size(); i++ )
	{
		RemoveSpaceW( tokens[i] );

		if( NULL != StrStr(tokens[i].c_str(), szlpURL ) )
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			::wcsncpy_s( szUpdateAddr, _countof(szUpdateAddr), tokens[i].c_str(), _countof(szUpdateAddr) );
		}

		if( NULL != StrStr(tokens[i].c_str(), szlpVersion ) )
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			::wcsncpy_s( szVersionAddr, _countof(szVersionAddr), tokens[i].c_str(), _countof(szVersionAddr) );
		}

		if( NULL != StrStr(tokens[i].c_str(), szlpGuidepage) )
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			::wcsncpy_s( szGuidepageAddr, _countof(szGuidepageAddr), tokens[i].c_str(), _countof(szGuidepageAddr) );
		}

		if( NULL != StrStr(tokens[i].c_str(), szlpHomepage) )
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			::wcsncpy_s( szHomepageAddr, _countof(szHomepageAddr), tokens[i].c_str(), _countof(szHomepageAddr) );
		}

		if( NULL != StrStr(tokens[i].c_str(), szlpIP) )
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			::wcsncpy_s( szLoginAddr, _countof(szLoginAddr), tokens[i].c_str(), _countof(szLoginAddr) );
		}

		if( NULL != StrStr(tokens[i].c_str(), szlpPort) )
		{
			tokens[i].erase( 0, tokens[i].find(L":") + 1 );
			wLoginPort = _wtoi( tokens[i].c_str() );
		}
	}
	tokens.clear();

	stLoginServerSet loginserverset;
	loginserverset.m_strLoginUrl = szLoginAddr;
	loginserverset.m_wLoginPort = wLoginPort;

	vecLoginServerList.push_back( loginserverset );

	stChannelListSet channellistset;
	channellistset.m_strChannelName = L"CustomChannel";
	SetPartitionList( channellistset, 0, 100, 1, szGuidepageAddr, szHomepageAddr, L"CustomConfig", szVersionAddr, szUpdateAddr, L"", vecLoginServerList );
	m_vecChannelList.push_back( channellistset );
}


