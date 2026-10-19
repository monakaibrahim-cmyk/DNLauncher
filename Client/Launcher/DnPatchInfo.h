//
//	DnPatchInfo.h	ġ    Ŭ
//

#pragma once

struct stLoginServerSet
{
	CString	m_strLoginUrl;	// α  ּ Ip
	WORD	m_wLoginPort;	// α  Port
};

struct stPartitionListSet
{
	CString m_strGuidepageUrl;	// ó ̵  ּ
	CString m_strHomepageUrl;	// Ȩ ּ
	CString m_strPartitionName;	// Ƽ ̸
	CString m_strVersionUrl;	// PatchInfoServer.cfg  ּ
	CString m_strPatchUrl;		// ġ  CDN ּ
	CString m_strStateTestUrl;	// Ƽ  üũϱ   ּ
	WORD	m_wPartitionId;		// Ƽ Id
	WORD	m_wNew;				// ű Ƽ ǥ Flag
	WORD	m_wOpen;			//     ÷
	
	std::vector<stLoginServerSet> m_vecLoginServerList;	// αμ Ʈ 

	stPartitionListSet() : m_wPartitionId( 0 ), m_wNew( 0 ), m_wOpen( 1 ) {}
	~stPartitionListSet() { m_vecLoginServerList.clear(); }
};

struct stChannelListSet
{
	CString m_strChannelName;	// ä ̸
	std::vector<stPartitionListSet> m_vecPartitionList;	// Ƽ  Ʈ

	~stChannelListSet() { m_vecPartitionList.clear(); }
};


//////////////////////////////////////////////////////////////////////////
// PatchConfigList.xml  
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
	BOOL			SetPatchInfo();		// ġ 
	BOOL			IsSetPatchInfo()	{ return m_bSetPatchInfo; }
	void			LoadClientVersion();// Ŭ̾Ʈ   б
	void			LoadServerVersion();//    б

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
	BOOL	SetParameter();							// Ķ 

private:
	HRESULT DownLoadPatchConfigList();		// PatchConfigList.xml ٿε
	HRESULT ParsingPatchConfigList();		// PatchConfigList.xml Ľ
	void	LoadPatchVersionInfo();					// ġ  б
	void	SetPartitionList(	stChannelListSet& channellistset, WORD dwNew, WORD wPartitionId, WORD wOpen, CString strGuidepageUrl, CString strHomepageUrl, 
								CString strPartitionName, CString strVersionUrl, CString strPatchUrl, CString strStateTestUrl, std::vector<stLoginServerSet>& vecLoginServerList );

	void	ResetPatchInfo();						// ġ ʱȭ
	BOOL	SetBasePatchInfo();						// ⺻ ġ 
	BOOL	SetFirstPatchInfo();					// FIrstPatch  
	int		LoadVersion( CString& szFilePath );		// Ͽ   б
	int		LoadVersion( CString& szFilePath, CString szTypeName );
	BOOL	ReadConfig();								// ÿ config б
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
	std::vector<int>				m_vecSkipVersion; //ŵ 

	// õ Ƽ ġ 
	CString m_strGuidepageUrl;	// ó ̵  ּ
	CString m_strHomepageUrl;	// Ȩ ּ
	CString m_strPartitionName;	// Ƽ ̸
	CString m_strVersionUrl;	// PatchInfoServer.cfg  ּ
	CString m_strPatchUrl;		// ġ  CDN ּ

	std::vector<stLoginServerSet> m_vecLoginServerList;	// αμ Ʈ 

	int		m_nClientVersion;			//  Ŭ̾Ʈ 
	int		m_nServerVersion;			//   


#ifdef _USE_AUTOUPDATE
	int		m_nNextVersion;		//  Ʈ   ġ 
#endif // _USE_AUTOUPDATE

	int		m_nLanguageOffset;	// Resource.h  Offset
	WORD	m_wOpen;			// Ƽ  ÷

	CString m_strClientPath;	// Ŭ̾Ʈ ġ 
	CString m_strIPList;		// Ķ ѱ   α IP  (ex : 192.168.0.1;192.168.0.2;...)
	CString m_strPortList;		// Ķ ѱ   α Port  (ex : 4006;4007;...)
	CString m_strOptionParam;	// ɼ Ķ
	CString m_strTotalParam;	// ü Ķ (Ŭ̾Ʈ   ޵Ǵ Ķ)

#ifdef _USE_MULTILANGUAGE
	CString m_strLanguageParam;	// ٱ   (Ŭ̾Ʈ   ޵Ǵ Ķ)
#endif // _USE_MULTILANGUAGE
};

#define DNPATCHINFO CDnPatchInfo::GetInstance()