/*//===============================================================

	<< HTTP CLIENT >>

	FILE : HTTPCLIENT.H, HTTPCLIENT.CPP
	DESC : HTTP client class using WinINet API
	INIT BUILT DATE : 2006. 02. 20
	LAST BUILT DATE : 2006. 02. 21

	P.S.>
		- Supports One-Request,One-Response and Keep-Alive connection modes
		- One-Request,One-Response : Request and receive single HTTP resource (Open() -> RecvResponse() -> Close())
		- Keep-Alive : Connect to server and request multiple resources (Open() -> SendRequest() -> RecvResponse() -> Close())

	Copyright (c) 2002~2007 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include <TCHAR.H>
#include <WINDOWS.H>
#include <WININET.H>

#pragma comment(lib, "WININET.LIB")


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

#define	DF_DEFAULT_HTTP_PORTNUMBER	(80)

///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CHttpClient
//*---------------------------------------------------------------
// DESC : HTTP client class
// PRGM : B4nFter
//*---------------------------------------------------------------
class CHttpClient
{
public:
	enum EF_HTTP_CONNECTION_TYPE {
		EV_HTTP_CONNECTION_NONE			= 0,	// Initial value
		EV_HTTP_CONNECTION_ONEREQONERSP	= 1,	// HTTP mode: One-Req, One-Rsp
		EV_HTTP_CONNECTION_KEEPALIVE	= 2,	// HTTP mode: Keep-Alive
	};

public:
	CHttpClient();
	~CHttpClient();

	// Shared methods for One-Req,One-Rsp and Keep-Alive
	BOOL Open(
		LPCTSTR lpszHttpServerAddressUrl,	// One-Req,One-Rsp : URL path / Keep-Alive : Server host (URL or dot-decimal IP)
		EF_HTTP_CONNECTION_TYPE eHttpConnectionMode = EV_HTTP_CONNECTION_ONEREQONERSP,
		INTERNET_PORT wHttpServerPortNumber = DF_DEFAULT_HTTP_PORTNUMBER,	// Used only in Keep-Alive mode
		LPCTSTR lpszUserName = NULL,		// Used only in Keep-Alive mode
		LPCTSTR lpszPassword = NULL			// Used only in Keep-Alive mode
		);	
	VOID Close();
	BOOL IsOpen();
	INT RecvResponse(LPBYTE lpbtBuffer, INT nBufferSize);
	INT RecvDownFile(LPCTSTR lpszFileName, LPBINDSTATUSCALLBACK pCallBack);
	DWORD SetOption(DWORD dwMaxConnCount, DWORD dwTimout);

	// One-Req,One-Rsp dedicated methods

	// Keep-Alive dedicated methods
	BOOL ReOpen();
	INT SendRequest(LPCTSTR lpszUrl, BOOL bCheckResultDataLength = FALSE, BOOL bAsyncRequest = FALSE);	
	INT SendRequsetPostA(LPCTSTR lpszUrl, LPCSTR szPostData); // Post request (ANSI)
	INT SendRequestGet(LPCTSTR lpszUrl);	

	LONG m_RefCount;
	LONG IncRefCount() { return(InterlockedIncrement(&m_RefCount)); }
	LONG DecRefCount() { return(InterlockedDecrement(&m_RefCount)); }

private:
	VOID Initialize();
	VOID Finalize();

private:
	// Shared member variables for One-Req,One-Rsp and Keep-Alive
	HINTERNET m_hInternet;				// Handle from InternetOpen()
	HINTERNET m_hInternetConnection;	// One-Req,One-Rsp: InternetOpenUrl() handle / Keep-Alive: InternetConnect() handle
	HINTERNET m_hHttpRequest;			// Used only in Keep-Alive mode

	EF_HTTP_CONNECTION_TYPE m_eHttpConnectionMode;

	// One-Req,One-Rsp member variables

	// Keep-Alive member variables
	TCHAR m_szHttpServerAddress[MAX_PATH];
	INTERNET_PORT m_wHttpServerPortNumber;
	TCHAR m_szUserName[MAX_PATH];
	TCHAR m_szPassword[MAX_PATH];	
};

