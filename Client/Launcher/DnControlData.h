#pragma once
#include <vector>

struct stControlPositionData
{
	int		nID;
	int		nTextID;
	int		nType;
	int		nEnum;
	RECT	RectPos;
};

class CDnControlData
{
private:
	CDnControlData();
	~CDnControlData();

	CString m_szLanguageParam; // Language parameter (e.g. FRA, ESP, GER).
	std::vector<stControlPositionData>	m_vecCtrlPosData;

	bool	LoadXMLFile(char* szFilePath);
	bool	LoadResourceFromXMLFile(int nID, LPCTSTR szFileName);
	void	ParsingRectData(WCHAR* szPosition, RECT& rt);
	bool	SetPositionData(CRect* pRt, int nMax);
	RECT	GetCtrlRect(int enumIndex);

public:
	static CDnControlData &GetInstance()
	{
		static CDnControlData obj;
		return obj;
	}
	
	CString GetFilePath( WCHAR* szFilePath );

	// Language parameter
	void	SetLanguageParam(CString str) { m_szLanguageParam = str; }
	CString	GetMulitiLanguageFilePath();
	int		GetMulitiLanguageResourceID(); // Returns resource ID based on language parameter.
	
	// Sets control position data from file or resource.
	HRESULT SetControlDataFromLocalFile( CString szFilePath , CRect* pRect, int nMaxCnt );				 // Local XML file
	HRESULT SetControlDataFromResource( int nResourceID, LPCTSTR szFileName, CRect* pRect, int nMaxCnt );// Resource XML
	/* arg1 : Resource ID, arg2 : File name, arg3: Control rect array, arg4 : Max control count */
};

#define DNCTRLDATA CDnControlData::GetInstance()