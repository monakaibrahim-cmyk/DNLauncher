

///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include "STDAFX.H"
#include "MINIDUMPSET.H"
#include "MEMORYMAP.H"
#include "TIMESET.H"
#include "COMMONMACROS.H"
#include "BASESET.H"
#include "DEBUGUTIL.H"
#include "SAFESTRINGMACROS.H"



#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

///////////////////////////////////////////////////////////////////
//	IMPLEMENTATION
///////////////////////////////////////////////////////////////////


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::CMiniDumpSet
//*---------------------------------------------------------------
// DESC : 생성자
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
CMiniDumpSet::CMiniDumpSet() : m_hDebugHelp(NULL), m_lpMapping(NULL), m_hMap(NULL), m_hFile(INVALID_HANDLE_VALUE), m_lpfnMiniDumpWriteDump(NULL), m_lpfnMiniDumpReadDumpStream(NULL),
	m_dwProcessTime(0), m_dwUserTime(0), m_dwKernelTime(0), m_uExceptionCode(0), m_uExceptionAddress(0)
{
	::memset(m_szUserMessage, 0, sizeof(m_szUserMessage));
	::memset(m_szFilePath, 0, sizeof(m_szFilePath));
	::memset(m_szFileName, 0, sizeof(m_szFileName));
	::memset(m_szModuleName, 0, sizeof(m_szModuleName));
	::memset(m_szProcessorArchitecture, 0, sizeof(m_szProcessorArchitecture));
	::memset(m_szWindowVersion, 0, sizeof(m_szWindowVersion));
	::memset(m_szExceptionDesc, 0, sizeof(m_szExceptionDesc));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::~CMiniDumpSet
//*---------------------------------------------------------------
// DESC : 소멸자
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
CMiniDumpSet::~CMiniDumpSet()
{
	Close();
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::Open
//*---------------------------------------------------------------
// DESC : 객체자원 초기화
// PARM : N/A
// RETV : NOERROR - 성공 / 그외 - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CMiniDumpSet::Open()
{
	DN_ASSERT(!IsOpen(),	"Already Opened!");

	// DBGHELP.DLL 6.1.17.1 이후 버젼을 사용해야 함
	m_hDebugHelp = ::LoadLibrary(_T("dbghelp.dll"));
	if (!m_hDebugHelp) {
		DN_RETURN(::GetLastError());
	}

	m_lpfnMiniDumpWriteDump = (LPFN_MINIDUMPWRITEDUMP)::GetProcAddress(m_hDebugHelp, "MiniDumpWriteDump");
	if (!m_lpfnMiniDumpWriteDump) {
		DN_RETURN(::GetLastError());
	}
	m_lpfnMiniDumpReadDumpStream = (LPFN_MINIDUMPREADDUMPSTREAM)::GetProcAddress(m_hDebugHelp, "MiniDumpReadDumpStream");
	if (!m_lpfnMiniDumpReadDumpStream) {
		DN_RETURN(::GetLastError());
	}

	return NOERROR;	
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::Close
//*---------------------------------------------------------------
// DESC : 객체자원 해제
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
VOID CMiniDumpSet::Close()
{
	if (m_hDebugHelp) {
		::FreeLibrary(m_hDebugHelp);
		m_hDebugHelp = NULL;
	}
	if (m_lpMapping) {
		::UnmapViewOfFile(m_lpMapping);
		m_lpMapping = NULL;
	}
	if (m_hMap) {
		::CloseHandle(m_hMap);
		m_hMap = NULL;
	}
	if (INVALID_HANDLE_VALUE != m_hFile) {
		::CloseHandle(m_hFile);
		m_hFile = INVALID_HANDLE_VALUE;
	}
	m_lpfnMiniDumpWriteDump = NULL;
	m_lpfnMiniDumpReadDumpStream = NULL;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::Read
//*---------------------------------------------------------------
// DESC : 특정 경로에 있는 미니덤프 파일을 열어서 정보들을 읽어들임
// PARM :	1 . lpszFilePath - 미니덤프 파일경로
// RETV : NOERROR - 성공 / 그외 - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CMiniDumpSet::Read(LPCTSTR lpszFilePath)
{
	DN_STRING(lpszFilePath,	MAX_PATH);

	m_hFile = ::CreateFile( lpszFilePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == m_hFile) {
		DN_RETURN(::GetLastError());
	}
	m_hMap = ::CreateFileMapping(m_hFile, NULL, PAGE_READONLY, 0, 0, NULL);
	if (!m_hMap) {
		DN_RETURN(::GetLastError());
	}
	m_lpMapping = ::MapViewOfFile( m_hMap, FILE_MAP_READ, 0, 0, 0);
	if (!m_lpMapping) {
		DN_RETURN(::GetLastError());
	}

	DWORD dwRetVal = NOERROR;
	__try {
		if (!ReadMiscInfo()) {
			dwRetVal = HASERROR + 0;
			__leave;
		}
		if (!ReadMouleName()) {
			dwRetVal = HASERROR + 1;
			__leave;
		}
		if (!ReadSystemInfo()) {
			dwRetVal = HASERROR + 2;
			__leave;
		}
		if (!ReadException()) {
			dwRetVal = HASERROR + 3;
			__leave;
		}
		if (!ReadUserData()) {
			dwRetVal = HASERROR + 4;
			__leave;
		}
	}
	__finally {
		if (NOERROR != dwRetVal) {
			DWORD dwRetVal2 = ::GetLastError();
			if (NOERROR != dwRetVal) {
				dwRetVal = dwRetVal2;
			}
		}
	}

	return dwRetVal;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::Write
//*---------------------------------------------------------------
// DESC : 특정 경로에 미니덤프 파일을 생성
// PARM :	1 . lpstExceptionPointers - EXCEPTION_POINTERS 구조체 포인터
//			2 . pMiniDumpType - 미니덤프 기록형태
//			3 . lpszFilePath - 미니덤프 파일 저장경로
// RETV : NOERROR - 성공 / 그외 - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CMiniDumpSet::Write(LPEXCEPTION_POINTERS lpstExceptionPointers, MINIDUMP_TYPE pMiniDumpType, LPCTSTR lpszFilePath)
{
	DN_READ(lpstExceptionPointers, sizeof(LPEXCEPTION_POINTERS));
	DN_STRING(lpszFilePath,	MAX_PATH);

	DWORD dwRetVal = NOERROR;

	CTimeSet CurTime;
	#pragma warning(disable:4995)
	::wsprintf(m_szFileName, _T("%s%s_dmp_%04d%02d%02d%02d%02d%02d%03d_%d.dmp"),
				lpszFilePath,
				CDebugUtil::GetProgramName(),
				CurTime.GetYear(), CurTime.GetMonth(), CurTime.GetDay(),
				CurTime.GetHour(), CurTime.GetMinute(),CurTime.GetSecond(),CurTime.GetMilliseconds(),atoi(revDragonNest)+1);
	#pragma warning(default:4995)
	MAKE_STRING(m_szFileName);

	HANDLE hFile = ::CreateFile(m_szFileName, GENERIC_WRITE, FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE != hFile) {
		// 기존의 내용이 있다면 삭제를 해야 한다.
		//if (::SetEndOfFile(hFile))
		DN_VERIFY(::SetEndOfFile(hFile), TRUE,	"무슨 오류지?");
		{
			MINIDUMP_EXCEPTION_INFORMATION stExclpModuleList;
			stExclpModuleList.ThreadId = ::GetCurrentThreadId();
			stExclpModuleList.ExceptionPointers = lpstExceptionPointers;
			stExclpModuleList.ClientPointers = NULL;

			MINIDUMP_USER_STREAM_INFORMATION stUserMsgHead;
			MINIDUMP_USER_STREAM stUserMsgData;
			if (_T('\0') != m_szUserMessage[0]) {
				stUserMsgHead.UserStreamCount = 1;
				stUserMsgHead.UserStreamArray = &stUserMsgData;
#if defined(_UNICODE)
				stUserMsgData.Type = CommentStreamW;	// UNICODE
#else	// _UNICODE
				stUserMsgData.Type = CommentStreamA;	// MBCS
#endif	// _UNICODE
				stUserMsgData.BufferSize = static_cast<ULONG>(::lstrlen(m_szUserMessage))*sizeof(TCHAR);
				stUserMsgData.Buffer = const_cast<TCHAR*>(m_szUserMessage);
			}

			// 사용자용 메세지는 Dump file의 중간부분에 위치하는데 Hexa Editor로 열어서 "dbghelp.pdb" 를 찾으면 다음에 위치
			if (!m_lpfnMiniDumpWriteDump(::GetCurrentProcess(), ::GetCurrentProcessId(), hFile, pMiniDumpType, &stExclpModuleList, ((_T('\0') != m_szUserMessage[0])?(&stUserMsgHead):(NULL)), NULL)) {
				dwRetVal = ::GetLastError();
				DN_ASSERT(0, "error occured!");
			}
		}
		DN_VERIFY(::CloseHandle(hFile), TRUE, "@err, hr");
	}
	else {
		dwRetVal = ::GetLastError();
		DN_ASSERT(0, "Disk full?");
	}

	return(dwRetVal);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::SetUserMessage
//*---------------------------------------------------------------
// DESC : 미니덤프에 남게될 사용자 메시지를 지정
// PARM :	1 . lpszUserMessage - 사용자 메시지
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
VOID CMiniDumpSet::SetUserMessage(LPCTSTR lpszUserMessage)
{
	DN_ASSERT(NULL != lpszUserMessage,	"Invalid!");
	
	if (lpszUserMessage) {
		STRNCPY(m_szUserMessage, COUNT_OF(m_szUserMessage), lpszUserMessage);
	}
	else {
		::memset(m_szUserMessage, 0, sizeof(m_szUserMessage));
	}
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::GetExceptionCause
//*---------------------------------------------------------------
// DESC : 예외 코드로 예외의 발생원인을 찾아서 반환
// PARM :	1 . dwExceptionCode - 예외 코드
//			2 . lpszDesc - 결과를 반환받을 버퍼 포인터
//			3 . nDescSize - 버퍼 크기
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
VOID CMiniDumpSet::GetExceptionCause(DWORD dwExceptionCode, LPTSTR lpszDesc, DWORD nDescSize)
{
	DN_WRITE(lpszDesc, nDescSize);
	UNUSED_ALWAYS(nDescSize);

#pragma warning(disable:4995 4996)
	switch(dwExceptionCode) {
	case EXCEPTION_ACCESS_VIOLATION:			::lstrcpy(lpszDesc, _T("EXCEPTION_ACCESS_VIOLATION"));			break;
	case EXCEPTION_DATATYPE_MISALIGNMENT:		::lstrcpy(lpszDesc, _T("EXCEPTION_DATATYPE_MISALIGNMENT"));		break;
	case EXCEPTION_BREAKPOINT:					::lstrcpy(lpszDesc, _T("EXCEPTION_BREAKPOINT"));				break;
	case EXCEPTION_SINGLE_STEP:					::lstrcpy(lpszDesc, _T("EXCEPTION_SINGLE_STEP"));				break;
	case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:		::lstrcpy(lpszDesc, _T("EXCEPTION_ARRAY_BOUNDS_EXCEEDED"));		break;
	case EXCEPTION_FLT_DENORMAL_OPERAND:		::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_DENORMAL_OPERAND"));		break;
	case EXCEPTION_FLT_DIVIDE_BY_ZERO:			::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_DIVIDE_BY_ZERO"));		break;
	case EXCEPTION_FLT_INEXACT_RESULT:			::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_INEXACT_RESULT"));		break;
	case EXCEPTION_FLT_INVALID_OPERATION:		::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_INVALID_OPERATION"));		break;
	case EXCEPTION_FLT_OVERFLOW:				::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_OVERFLOW"));				break;
	case EXCEPTION_FLT_STACK_CHECK:				::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_STACK_CHECK"));			break;
	case EXCEPTION_FLT_UNDERFLOW:				::lstrcpy(lpszDesc, _T("EXCEPTION_FLT_UNDERFLOW"));				break;
	case EXCEPTION_INT_DIVIDE_BY_ZERO:			::lstrcpy(lpszDesc, _T("EXCEPTION_INT_DIVIDE_BY_ZERO"));		break;
	case EXCEPTION_INT_OVERFLOW:				::lstrcpy(lpszDesc, _T("EXCEPTION_INT_OVERFLOW"));				break;
	case EXCEPTION_PRIV_INSTRUCTION:			::lstrcpy(lpszDesc, _T("EXCEPTION_PRIV_INSTRUCTION"));			break;
	case EXCEPTION_IN_PAGE_ERROR:				::lstrcpy(lpszDesc, _T("EXCEPTION_IN_PAGE_ERROR"));				break;
	case EXCEPTION_ILLEGAL_INSTRUCTION:			::lstrcpy(lpszDesc, _T("EXCEPTION_ILLEGAL_INSTRUCTION"));		break;
	case EXCEPTION_NONCONTINUABLE_EXCEPTION:	::lstrcpy(lpszDesc, _T("EXCEPTION_NONCONTINUABLE_EXCEPTION"));	break;
	case EXCEPTION_STACK_OVERFLOW:				::lstrcpy(lpszDesc, _T("EXCEPTION_STACK_OVERFLOW"));			break;
	case EXCEPTION_INVALID_DISPOSITION:			::lstrcpy(lpszDesc, _T("EXCEPTION_INVALID_DISPOSITION"));		break;
	case EXCEPTION_GUARD_PAGE:					::lstrcpy(lpszDesc, _T("EXCEPTION_GUARD_PAGE"));				break;
	case EXCEPTION_INVALID_HANDLE:				::lstrcpy(lpszDesc, _T("EXCEPTION_INVALID_HANDLE"));			break;
	case 0xE06D7363:							::lstrcpy(lpszDesc, _T("Microsoft C++ Exception"));				break;
	default:									::wsprintf(lpszDesc,_T("0x%08X"), dwExceptionCode);				break;
	}
#pragma warning(default:4995 4996)
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::GetDumpInfo
//*---------------------------------------------------------------
// DESC : MiniDumpReadDumpStream 로 열려진 미니덤프 파일에서 특정 정보를 쿼리하기 위한 래핑 메서드
// PARM :	1 . eInfoType - 특정 정보타입
// RETV : 쿼리결과 (정보타입에 따라 다름)
// PRGM : B4nFter
//*---------------------------------------------------------------
LPVOID CMiniDumpSet::GetDumpInfo(ULONG eInfoType)
{
	DN_ASSERT(NULL != m_lpfnMiniDumpReadDumpStream,	"Invalid!");

	if (!m_lpMapping) {
		DN_RETURN(NULL);
	}

	ULONG uSize = 0;
	LPVOID lpStream = NULL;
	MINIDUMP_DIRECTORY* lpMiniDumpDirectory = NULL;
//	if (!m_lpfnMiniDumpReadDumpStream(m_lpMapping, eInfoType, &lpMiniDumpDirectory, &lpStream, &uSize)) {
	if (!::MiniDumpReadDumpStream(m_lpMapping, eInfoType, &lpMiniDumpDirectory, &lpStream, &uSize)) {
		return NULL;
	}
	return lpStream;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::ReadMiscInfo
//*---------------------------------------------------------------
// DESC : 열려진 미니덤프 파일에서 기타 정보를 얻음
// PARM : N/A
// RETV : TRUE - 성공 / FALSE - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CMiniDumpSet::ReadMiscInfo()
{
	MINIDUMP_MISC_INFO* lpMiscInfo = GetMiscInfo();
	if (!lpMiscInfo) {
		return FALSE;
	}
	if (lpMiscInfo->Flags1 & MINIDUMP_MISC1_PROCESS_TIMES) {
		m_dwProcessTime = lpMiscInfo->ProcessCreateTime;
		m_dwUserTime	= lpMiscInfo->ProcessUserTime;
		m_dwKernelTime	= lpMiscInfo->ProcessKernelTime;
	}
	return TRUE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::ReadMouleName
//*---------------------------------------------------------------
// DESC : 열려진 미니덤프 파일에서 모듈 리스트 정보를 얻음
// PARM : N/A
// RETV : TRUE - 성공 / FALSE - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CMiniDumpSet::ReadMouleName()
{
	MINIDUMP_MODULE_LIST* lpModuleList = GetModuleList();
	MINIDUMP_MODULE* lpModule = NULL;
	MINIDUMP_STRING* lpszModuleString = NULL;

	if (!lpModuleList || lpModuleList->NumberOfModules <= 0) {
		return FALSE;
	}

	lpModule = &lpModuleList->Modules[0];
	lpszModuleString = (MINIDUMP_STRING*)((LPBYTE)m_lpMapping + lpModule->ModuleNameRva);

	USES_CONVERSION;

#pragma warning(disable:4996)
	STRNCPY(m_szModuleName, COUNT_OF(m_szModuleName), W2T(lpszModuleString->Buffer));
	MAKE_STRING(m_szModuleName);
#pragma warning(default:4996)

	return TRUE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::ReadSystemInfo
//*---------------------------------------------------------------
// DESC : 열려진 미니덤프 파일에서 시스템 정보를 얻음
// PARM : N/A
// RETV : TRUE - 성공 / FALSE - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
#pragma warning(disable:4996)
BOOL CMiniDumpSet::ReadSystemInfo()
{
	// http://msdn2.microsoft.com/en-us/library/ms680396.aspx
	MINIDUMP_SYSTEM_INFO* lpSystemInfo = GetSystemInfo();
	if (!lpSystemInfo) {
		return FALSE;
	}

	TCHAR szTemp[128] = { _T('\0'), };
	LPCTSTR lpszSystemDesc = NULL;

	switch(lpSystemInfo->ProcessorArchitecture) {
	case PROCESSOR_ARCHITECTURE_INTEL:
		{
			 STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Intel "));
			 switch (lpSystemInfo->ProcessorLevel) {
			 case  3:
				 {
					 lpszSystemDesc = _T("80386");
				 }
				 break;
			 case  4:
				 {
					 lpszSystemDesc = _T("80486");
				 }
				 break;
			 case  5:
				 {
					 lpszSystemDesc = _T("Pentium");
				 }
				 break;
			 case  6:
				 {
					 lpszSystemDesc = _T("Pentium Pro/II or AMD Athlon");
				 }
				 break;
			 case 15:
				 {
					 lpszSystemDesc = _T("Pentium 4 or AMD Athlon64");
				 }
				 break;
			 default:
				 {
					 lpszSystemDesc = _T("Unknown");
				 }
				 break;
			 }

			 STRNCAT(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), lpszSystemDesc);

			 if (3 == lpSystemInfo->ProcessorLevel || 4 == lpSystemInfo->ProcessorLevel) {
				 if (HIWORD(lpSystemInfo->ProcessorRevision) == 0xFF) {
					 SNPRINTF(MODE_DBG_EX(szTemp, COUNT_OF(szTemp)), COUNT_OF(szTemp), 
						_T(" (%c%d)"), _T('A') + HIBYTE(LOWORD(lpSystemInfo->ProcessorRevision)), LOBYTE(LOWORD(lpSystemInfo->ProcessorRevision)));
				 }
				 else {
					 SNPRINTF(MODE_DBG_EX(szTemp, COUNT_OF(szTemp)), COUNT_OF(szTemp), 
						_T(" (%c%d)"), _T('A') + HIWORD(lpSystemInfo->ProcessorRevision), LOWORD(lpSystemInfo->ProcessorRevision));
				 }
			 }
			 else {
				 //Model xx, Stepping yy
				 SNPRINTF(MODE_DBG_EX(szTemp, COUNT_OF(szTemp)), COUNT_OF(szTemp), 
					_T(" (%d.%d)"), HIWORD(lpSystemInfo->ProcessorRevision),LOWORD(lpSystemInfo->ProcessorRevision));
			 }
			 MAKE_STRING(szTemp);
			 STRNCAT(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), szTemp);
		}
		break;
	case PROCESSOR_ARCHITECTURE_MIPS:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Mips"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_ALPHA:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Alpha"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_PPC:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("PowerPC"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_SHX:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("SHX"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_ARM:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("ARM"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_IA64:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Intel Itanium Processor Family "));
		}
		break;
	case PROCESSOR_ARCHITECTURE_ALPHA64:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Alpha64"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_MSIL:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Msil"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_AMD64:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("x64 (AMD or Intel)"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("IA32"));
		}
		break;
	case PROCESSOR_ARCHITECTURE_UNKNOWN:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Unknown"));
		}
		break;
	default:
		{
			STRNCPY(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), _T("Unknown"));
		}
		break;
	}

	lpszSystemDesc = NULL;
	switch (lpSystemInfo->MajorVersion)	{
	case 3:
		{
			switch (lpSystemInfo->MinorVersion)	{
			case 51: 
				{
					lpszSystemDesc = _T("NT 3.51");
				}
				break;
			default: 
				{
					lpszSystemDesc = _T("3-????");
				}
				break;
			}
		}
		break;
	case 4:
		{
			switch (lpSystemInfo->MinorVersion)	{
			case 0:
				{
					lpszSystemDesc = (VER_PLATFORM_WIN32_NT == lpSystemInfo->PlatformId) ? _T("NT 4.0") : _T("95");
				}
				break;
			case 10:
				{
					lpszSystemDesc = _T("98"); 
				}
				break;
			case 90:
				{
					lpszSystemDesc = _T("ME"); 
				}
				break;
			default:
				{
					lpszSystemDesc = _T("4-????"); 
				}
				break;
			}
		}
		break;
	case 5:
		{
			switch (lpSystemInfo->MinorVersion)	{
			case 0:
				{
					lpszSystemDesc = _T("2000"); 
				}
				break;
			case 1: 
				{
					lpszSystemDesc = _T("XP"); 
				}
				break;
			case 2:
				{
					lpszSystemDesc = _T("Server 2003"); 
				}
				break;
			default:
				{
					lpszSystemDesc = _T("5-????"); 
				}
				break;
			}
		}
		break;
	default:
		{
			lpszSystemDesc = _T("???"); 
		}
		break;
	}
	STRNCPY(m_szWindowVersion, COUNT_OF(m_szWindowVersion), lpszSystemDesc);
	
	SNPRINTF(MODE_DBG_EX(szTemp, COUNT_OF(szTemp)), COUNT_OF(szTemp), _T(" (%u)"), lpSystemInfo->BuildNumber);
	MAKE_STRING(szTemp);

	STRNCAT(m_szProcessorArchitecture, COUNT_OF(m_szProcessorArchitecture), szTemp);

	return TRUE;
}
#pragma warning(default:4996)


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::ReadException
//*---------------------------------------------------------------
// DESC : 열려진 미니덤프 파일에서 예외관련 정보를 얻음
// PARM : N/A
// RETV : TRUE - 성공 / FALSE - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CMiniDumpSet::ReadException()
{
	MINIDUMP_EXCEPTION_STREAM* lpExceptionStream = GetException();
	if (!lpExceptionStream)	{
		return FALSE;
	}

	m_uExceptionAddress = lpExceptionStream->ExceptionRecord.ExceptionAddress;
	m_uExceptionCode = lpExceptionStream->ExceptionRecord.ExceptionCode;
	GetExceptionCause((DWORD)m_uExceptionCode, m_szExceptionDesc, MAX_PATH);

	return TRUE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CMiniDumpSet::ReadUserData
//*---------------------------------------------------------------
// DESC : 열려진 미니덤프 파일에서 사용자 데이터 정보를 얻음
// PARM : N/A
// RETV : TRUE - 성공 / FALSE - 실패
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CMiniDumpSet::ReadUserData()
{
	ULONG nSize = 0;
	LPVOID lpStream	= NULL;
	MINIDUMP_DIRECTORY* lpMiniDumpDirectory = NULL;

#if defined(_UNICODE)
	if (!::MiniDumpReadDumpStream(m_lpMapping, CommentStreamW, &lpMiniDumpDirectory, &lpStream, &nSize)) {
#else	// _UNICODE
	if (!::MiniDumpReadDumpStream(m_lpMapping, CommentStreamA, &lpMiniDumpDirectory, &lpStream, &nSize)) {
#endif	// _UNICODE
		// UserStream 을 입력하지 않았을 경우도 성공
		return TRUE;
	}

	if (!lpStream || !nSize) {
		return FALSE;
	}

	if (IsBadStringPtr((LPCTSTR)lpStream, nSize/sizeof(TCHAR))) {
		return FALSE;
	}

	m_strUserString.Format(_T("%s"), lpStream);

	if (0 < m_strUserString.GetLength() && 0x0002 == m_strUserString.GetAt(m_strUserString.GetLength()-1)) {
		m_strUserString.SetAt(m_strUserString.GetLength()-1, _T('\0'));
	}

/*
	for (INT iCount = 1 ; iCount < 3 ; ++iCount)	{
		if (!::MiniDumpReadDumpStream(m_lpMapping, LastReservedStream + iCount, &lpMiniDumpDirectory, &lpStream, &nSize)) {
			// UserStream을 입력하지 않았을경우도 성공
			return TRUE;
		}
		else {
			if (!lpStream || !nSize) {
				return FALSE;
			}
//			if (IsBadStringPtrA((LPCSTR)lpStream, nSize)) {
			if (IsBadStringPtr((LPCTSTR)lpStream, nSize/sizeof(TCHAR))) {
				return FALSE;
			}
			TCHAR szString[1024] = { _T('\0'), };
#pragma warning(disable:4996)
			SNPRINTF(MODE_DBG_EX(szString, COUNT_OF(szString)), COUNT_OF(szString), _T("%s"), lpStream);
			MAKE_STRING(szString);
#pragma warning(default:4996)
			if (1 == iCount) {
				m_strSystemInfo = szString;
			}
			else {
				m_strUserString = szString;
			}
		}
	}
*/
	
	return TRUE;
}

