#pragma once

#include <queue>
#include <string>

// WiseLog analytics logging URLs (KR service)
/*
------ Web Analytics Logging URLs -------------------------------------------
1. Client Download:     http://dragonnest.nexon.com/wiselog/clientldownload.aspx
2. Game Start:          http://dragonnest.nexon.com/wiselog/gamestart.aspx

------ Launcher Analytics ----------------------------------------------------
3. Game Launcher:       http://dragonnest.nexon.com/wiselog/gamelauncher.aspx
4. Version Check Start: http://dragonnest.nexon.com/wiselog/versioncheckstart.aspx
5. Version Check End:   http://dragonnest.nexon.com/wiselog/versioncheckend.aspx
6. Patch Start:         http://dragonnest.nexon.com/wiselog/patchstart.aspx
7. Patch End:           http://dragonnest.nexon.com/wiselog/patchend.aspx

Launcher Start Click:   http://dragonnest.nexon.com/wiselog/launcherstartclick.aspx
Web Load Start:         http://dragonnest.nexon.com/wiselog/webloadstart.aspx
Web Load End:           http://dragonnest.nexon.com/wiselog/webloadend.aspx
Patch Cancel:           http://dragonnest.nexon.com/wiselog/patchcancel.aspx

------ Client In-Game Analytics ----------------------------------------------
8. Security Init Start: http://dragonnest.nexon.com/wiselog/hackinistart.aspx
9. Security Init End:   http://dragonnest.nexon.com/wiselog/hackiniend.aspx
10. Game Engine:        http://dragonnest.nexon.com/wiselog/gameengin.aspx
11. CI Movie:           http://dragonnest.nexon.com/wiselog/cimov.aspx
12. Server:             http://dragonnest.nexon.com/wiselog/server.aspx
13. Character:          http://dragonnest.nexon.com/wiselog/character.aspx
14. Channel:            http://dragonnest.nexon.com/wiselog/channel.aspx
*/

/*
	Desc : WiseLog analytics client for Nexon Korean service.
	Example: g_WiseLog.WriteToWiseLog("hackinistart.aspx");
*/

#if defined(_KR)

class WiseLog
{
public:
	WiseLog();
	virtual ~WiseLog();

	/*
		desc  : Starts the WiseLog worker thread.
		param : uMyOid - Player OID identifier.
	*/
	bool		Start(UINT uMyOid);
	void		Destroy();

	// Enqueues log URL and signals background worker thread to send HTTP request.
	bool		WriteToWiseLog(const char* szLogFile);
	bool		Terminate( DWORD nExitCode );

	// Sends HTTP POST directly. Called from worker thread.
	void		SendWebPost(const char* szLogFile);

protected:

	void		Run();

	HANDLE		m_hThreadHandle;
	DWORD		m_nThreadID;
	bool		m_bRunning;
	char		m_szThreadNick[128];

	HANDLE		m_hThreadSignal;
	UINT32		m_uMyOid;
	CRITICAL_SECTION m_Lock;

	std::queue<std::string>	m_WiseLogQueue;

private:

	static	DWORD	WINAPI	_Runner( LPVOID pParam );
	static  void SetThreadName( DWORD dwThreadID, const char* szThreadName);

private:

	typedef struct tagTHREADNAME_INFO 
	{ 
		DWORD dwType;		// must be 0x1000 
		LPCSTR szName;		// pointer to name (in user addr space) 
		DWORD dwThreadID;	// thread ID (-1=caller thread) 
		DWORD dwFlags;		// reserved for future use, must be zero 
	} THREADNAME_INFO; 

};

#endif	// #if defined(_KR)