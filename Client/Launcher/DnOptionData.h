//
//	DnOptionData.h
//

#pragma once

struct stOptionData
{
	std::string m_strOptionField;
	std::string m_strOptionValue;
};

class CDnOptionData
{
public:
	// Config.ini Data
	int m_nWidth;
	int m_nHeight;
	int m_nGraphicQuality;
	int m_nTextureQuality;
	int m_bWindow;
	int m_bVSync;
	int m_bAutoGameStart;
	int m_nLanguageID;
	int m_bUseDX11;

std::vector<stOptionData> m_vecOptionData;

public:
	CDnOptionData();
	virtual ~CDnOptionData();

	static CDnOptionData& GetInstance();
	BOOL SaveConfigOption( HWND hWnd );
	BOOL LoadConfigOption( HWND hWnd );
	void SetDefaultResolution();

void SetLanguageID( int nLanguageID ) { m_nLanguageID = nLanguageID; }
	int  GetLanguageID() const { return m_nLanguageID; }
	void SetUseDX11( int bUseDX11 ) { m_bUseDX11 = bUseDX11; }
	int  GetUseDX11() const { return m_bUseDX11; }

private:
	BOOL SetOptionValue( FILE *stream, char * szString );
};

#define DNOPTIONDATA CDnOptionData::GetInstance()