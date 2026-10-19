#pragma once

namespace CDebugSet
{
	//	Note	:	Output to file and screen
	//	Usage	:	Pass filename first, then format string and arguments like printf()
	void ToLogFile ( const char *szFormat, ... );
	void ToFile ( const char *szFileName, const char *szFormat, ... );
	void ToFileWithTime ( const char* szFileName, const char* szFormat, ... );
	void ClearFile ( const char *szFileName );

	const char* GetPath ();
	std::string GetCurTime ();

	//	Note	:	When outputting debug info to file, specify absolute path.
	//
	bool Initialize( const char *pszFullDir, bool bLogFileFinalOpen = false );
	bool Finalize();
};