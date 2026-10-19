//
//	DnPatchInfo.h : Patch configuration, versioning, and endpoint manager
//

#pragma once

struct stLoginServerSet
{
	CString	m_strLoginUrl;	// Login server IP address
	WORD	m_wLoginPort;	// Login server port
};

struct stPartitionListSet
{
	CString m_strGuidepageUrl;	// Launcher web view guide page URL
	CString m_strHomepageUrl;	// Official homepage URL
	CString m_strPartitionName;	// Partition / realm name
	CString m_strVersionUrl;	// PatchInfoServer.cfg endpoint URL
	CString m_strPatchUrl;		// Patch CDN base download URL
	CString m_strStateTestUrl;	// Server status test endpoint URL
	WORD	m_wPartitionId;		// Partition ID
	WORD	m_wNew;				// New partition flag
	WORD	m_wOpen;			// Open partition status flag
	
	std::vector<stLoginServerSet> m_vecLoginServerList;	// Login server address list

	stPartitionListSet() : m_wPartitionId( 0 ), m_wNew( 0 ), m_wOpen( 1 ) {}
	~stPartitionListSet() { m_vecLoginServerList.clear(); }
};

struct stChannelListSet
{
	CString m_strChannelName;	// Channel / regional realm name
	std::vector<stPartitionListSet> m_vecPartitionList;	// Partition list

	~stChannelListSet() { m_vecPartitionList.clear(); }
};


//////////////////////////////////////////////////////////////////////////
// PatchConfigList.xml hierarchy
// Channel
//		L Partition
//				L LoginIpList
//////////////////////////////////////////////////////////////////////////

// PatchInfo Class
class CDnPatchInfo
{
public:
	CDnPatchInfo();
	virtual ~CDnPatchInfo();

	static CDnPatchInfo& CDnPatchInfo::GetInstance();
	HRESULT			Init();
	void			SetClientPath( CString strClientPath );
	CString			GetClientPath()		{ return m_strClientPath; }
	BOOL			SetPatchInfo();		// Apply active patch configuration
	BOOL			IsSetPatchInfo()	{ return m_bSetPatchInfo; }
	void			LoadClientVersion();// Read client Version.cfg
	void			LoadServerVersion();// Read server PatchInfoServer.cfg

	void			SetClientVersion( int nClientVersion ) { m_nClientVersion = nClientVersion; }
	void			SetServerVersion( int nServerVersion ) { m_nServerVersion = nServerVersion; }
	int				GetClientVersion() { return m_nClientVersion; }
	int				GetServerVersion() { return m_nServerVersion; }


	CString			GetGuidepageUrl()		{ return m_strGuidepageUrl; }
	CString			GetHomepageUrl()		{ return m_strHomepageUrl; }
	CString			GetPartitionName()		{ return m_strPartitionName; }
	CString			GetPatchUrl()			{ return m_strPatchUrl; }
	CString			GetTotalParameter()		{ return m_strTotalParam; }
	CString			GetOptionParameter()	{ return m_strOptionParam; }
	CString			GetVersionURL()			{ return m_strVersionUrl; }
	
	std::vector<int>&				GetSkipVersion() { return m_vecSkipVersion; }
	std::vector<stChannelListSet>&	GetChannelList() { return m_vecChannelList; }

#ifdef _USE_AUTOUPDATE
	int GetNextVersion() { return m_nNextVersion; }
#endif // _USE_AUTOUPDATE
	WORD GetPartitionOpen() { return m_wOpen; }

#ifdef _USE_MULTILANGUAGE
	void	SetLanguageParam( CString strLanguageParam );
	CString GetLanguageParam() { return m_strLanguageParam; }
	void	SetLanguageParamByLanguageID( int nLanguageID );
	void	AddLanguageParamToTotalParam();
	void	SetLocaleGuidePage();
#endif // _USE_MULTILANGUAGE
	int		GetLanguageOffset() { return m_nLanguageOffset; }
	BOOL	SetParameter();							// Format client launch command line

private:
	HRESULT DownLoadPatchConfigList();		// Download PatchConfigList.xml
	HRESULT ParsingPatchConfigList();		// Parse PatchConfigList.xml
	void	LoadPatchVersionInfo();			// Load server and client version info
	void	SetPartitionList(	stChannelListSet& channellistset, WORD dwNew, WORD wPartitionId, WORD wOpen, CString strGuidepageUrl, CString strHomepageUrl, 
								CString strPartitionName, CString strVersionUrl, CString strPatchUrl, CString strStateTestUrl, std::vector<stLoginServerSet>& vecLoginServerList );

	void	ResetPatchInfo();						// Reset patch info state
	BOOL	SetBasePatchInfo();						// Set default base patch configuration
	BOOL	SetFirstPatchInfo();					// Set FirstPatch configuration
	int		LoadVersion( CString& szFilePath );		// Read version integer from file
	int		LoadVersion( CString& szFilePath, CString szTypeName );
	BOOL	ReadConfig();							// Read Config.ini options
	void	ParseCommandLineDev( LPCTSTR szCommandLine );

public:
	bool	LoadVersionData();

#ifdef _USE_SINGLE_CLIENT
	void LoadClientVersionFromResourceFile();
#else // _USE_SINGLE_CLIENT
	void LoadClientVersionFromVersionFile();
#endif // _USE_SINGLE_CLIENT

private:
	BOOL							m_bSetPatchInfo;
	std::vector<stChannelListSet>	m_vecChannelList;
	std::vector<int>				m_vecSkipVersion; // Versions to skip

	// Active Partition Endpoints
	CString m_strGuidepageUrl;	// Launcher web view guide page URL
	CString m_strHomepageUrl;	// Official homepage URL
	CString m_strPartitionName;	// Active partition name
	CString m_strVersionUrl;	// PatchInfoServer.cfg URL endpoint
	CString m_strPatchUrl;		// Patch CDN base download URL

	std::vector<stLoginServerSet> m_vecLoginServerList;	// Login server address list

	int		m_nClientVersion;			// Current client version
	int		m_nServerVersion;			// Latest server version

#ifdef _USE_AUTOUPDATE
	int		m_nNextVersion;		// Next incremental patch version
#endif // _USE_AUTOUPDATE

	int		m_nLanguageOffset;	// Resource.h language offset (0 = English, 10000 = Vietnamese)
	WORD	m_wOpen;			// Partition open status flag

	CString m_strClientPath;	// Client directory path
	CString m_strIPList;		// Semicolon-delimited IP list (e.g. 192.168.0.1;192.168.0.2;...)
	CString m_strPortList;		// Semicolon-delimited port list (e.g. 14301;14301;...)
	CString m_strOptionParam;	// Launcher option parameters (/ip:... /port:... /Lver:... /use_packing)
	CString m_strTotalParam;	// Full command line passed to client executable

#ifdef _USE_MULTILANGUAGE
	CString m_strLanguageParam;	// Multilanguage parameter passed to client (/lang:...)
#endif // _USE_MULTILANGUAGE
};

#define DNPATCHINFO CDnPatchInfo::GetInstance()