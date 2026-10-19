/*//===============================================================

	<< DEBUGGING UTILITY >>

	FILE : DEBUGUTIL.H
	DESC : Utility methods for debugging
	INIT BUILT DATE : 2005. 04. 28
	LAST BUILT DATE : 2006. 03. 07

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

/*
	P.S.>
	- This header should be included near project root header
	- Assumes WINDOWS.H and platform headers are already included
	- BASESET.H must be included prior to this file
*/

#if defined(_DEBUG)
//#include <STRSAFE.H>
#include <CRTDBG.H>		// Must be included last for CRT debug heap support
#endif	// _DEBUG


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

/*
	<VISUAL STUDIO VERSION CONFIGURATION>
		Minimum system required				Macros to define
		------------------------			------------------------
		Visual Studio.net 9.0 (2008)		_MSC_VER 15.00 (1500)
		Visual Studio.net 8.0 (2005)		_MSC_VER 14.00 (1400)
		Visual Studio.net 7.1 (2003)		_MSC_VER 13.10 (1310)
		Visual Studio.net 7.0				_MSC_VER 13.00 (1300)
		Visual Studio 6.0					_MSC_VER 12.00 (1200)
		Visual Studio 5.0					_MSC_VER 10.00 (1000)
*/

/*
	<MEMORY STATE DESCRIPTIONS (WIN32)>

	0xCDCDCDCD	: Allocated on HEAP but not initialized
	0xDDDDDDDD	: Memory area freed from HEAP
	0xFDFDFDFD	: 'NoMansLand' fence automatically placed at boundary of heap memory; must never be overwritten (indicates buffer overflow)
	0xCCCCCCCC	: Located on STACK but not initialized
*/
#if defined(_X86_)
#define DF_MEMSTATE_CDCD	((DWORD_PTR)(0xCDCDCDCD))
#define DF_MEMSTATE_DDDD	((DWORD_PTR)(0xDDDDDDDD))
#define DF_MEMSTATE_FDFD	((DWORD_PTR)(0xFDFDFDFD))
#define DF_MEMSTATE_CCCC	((DWORD_PTR)(0xCCCCCCCC))
#elif defined(_AMD64_)
#define DF_MEMSTATE_CDCD	((DWORD_PTR)(0xCDCDCDCDCDCDCDCD))
#define DF_MEMSTATE_DDDD	((DWORD_PTR)(0xDDDDDDDDDDDDDDDD))
#define DF_MEMSTATE_FDFD	((DWORD_PTR)(0xFDFDFDFDFDFDFDFD))
#define DF_MEMSTATE_CCCC	((DWORD_PTR)(0xCCCCCCCCCCCCCCCC))
#elif defined(_IA64_)
#pragma FORCE COMPILE ABORT!
#else	// !_X86 && !_AMD64_ && !_IA64_
#pragma FORCE COMPILE ABORT!
#endif	// !_X86 && !_AMD64_ && !_IA64_

// DWORD return value type definition
#define HASERROR			((DWORD)0x00000001L)	// Opposite of NOERROR (error present)
#define OLEERROR			((HRESULT)0x80040000L)	// HRESULT error (OLE_E_FIRST) (Note: S_FALSE is not treated as failure by FAILED())

// Compile comment macro functions
// P.S.>
/*
	- Compile-time build log notice
	- Outputs filename and line number with clickable jump
	- Format as #pragma COMPILE_COMMENT("comment")
*/
#define __COMPILE_COMMENTX__(pMSG)		#pMSG
#define __COMPILE_COMMENT__(pMSG)		__COMPILE_COMMENTX__(pMSG) 
#define	COMPILE_COMMENT(pCMT)			message(__FILE__ "(" __COMPILE_COMMENT__(__LINE__) ") : "pCMT)

// Debugging macro functions
#if defined(_DEBUG)
	#if !defined(_CRTDBG_MAP_ALLOC)
		#define	_CRTDBG_MAP_ALLOC
	#endif	// _CRTDBG_MAP_ALLOC
	#if defined(MFC_VER)
		#define malloc(s)							_malloc_dbg(s, _NORMAL_BLOCK, __FILE__, __LINE__)
		#define calloc(c, s)						_calloc_dbg(c, s, _NORMAL_BLOCK, __FILE__, __LINE__)
		#define realloc(p, s)						_realloc_dbg(p, s, _NORMAL_BLOCK, __FILE__, __LINE__)
		#define _expand(p, s)						_expand_dbg(p, s, _NORMAL_BLOCK, __FILE__, __LINE__)
		#define free(p)								_free_dbg(p, _NORMAL_BLOCK)
		#define _msize(p)							_msize_dbg(p, _NORMAL_BLOCK)
		#define _aligned_malloc(s, a)				_aligned_malloc_dbg(s, a, __FILE__, __LINE__)
		#define _aligned_realloc(p, s, a)			_aligned_realloc_dbg(p, s, a, __FILE__, __LINE__)
		#define _aligned_offset_malloc(s, a, o)		_aligned_offset_malloc_dbg(s, a, o, __FILE__, __LINE__)
		#define _aligned_offset_realloc(p, s, a, o)	_aligned_offset_realloc_dbg(p, s, a, o, __FILE__, __LINE__)
		#define _aligned_free(p)					_aligned_free_dbg(p)
	#endif	// MFC_VER
	#define DN_TRACE					CDebugUtil::Trace
	#define DN_MESSAGEBOX				CDebugUtil::MessageBox
	#define	DN_CHECK_MEMORYLEAK()		{																\
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);									\
		_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);												\
	}
	#define	DN_ASSERT_CMP(pEXP)			{typedef char DUM[(pEXP)? 1: -1];}		// COMPILE-TIME assertion using negative array size (triggers C2118 on failure)
	#define	DN_ASSERT(pEXP, pMSG)		{																\
		BOOL bEXP = static_cast<BOOL>(pEXP);															\
		if ((FALSE == bEXP) && CBaseSet::IsWindowStationVisible()) {									\
			DWORD dwLastError = ::GetLastError();														\
			/* Retry Button => 1, Abort => Exit, Ignore => -1 */											\
			INT	iRetVal = CDebugUtil::CrtDbgReport(__FILE__, __LINE__, (const CHAR*)pMSG, #pEXP);		\
			::SetLastError(dwLastError);																\
			if (iRetVal == 1) {																			\
				::__debugbreak(); /*_asm { int 3 },	::_CrtDbgBreak();*/									\
			}																							\
		}																								\
	}
	#define DN_VERIFY(pEXP, pTRUEVAL, pMSG)			DN_ASSERT((pEXP) == (pTRUEVAL), pMSG)
	#define	DN_RETURN(pEXP)							{DN_ASSERT(0, "DN_RETURN!");return(pEXP);}
	#define	DN_RETURN_NONE							{DN_ASSERT(0, "DN_RETURN_NONE!");return;}
	#define	DN_BREAK								{DN_ASSERT(0, "DN_BREAK!");break;}
	#define	DN_CONTINUE								{DN_ASSERT(0, "DN_CONTINUE!");continue;}
	#define	DN_LEAVE								{DN_ASSERT(0, "DN_LEAVE!");__leave;}
#else	// _DEBUG
	#define DN_TRACE								/##/	// Note: Ensure macro ends properly to prevent C1075 in Release mode
	#define DN_MESSAGEBOX							/##/	// Note: Ensure macro ends properly to prevent C1075 in Release mode
	#define	DN_CHECK_MEMORYLEAK						/##/	// Note: Ensure macro ends properly to prevent C1075 in Release mode
	#define	DN_ASSERT_CMP(pEXP)
	#define	DN_ASSERT(pEXP, pMSG)
	#define DN_VERIFY(pEXP, pTRUEVAL, pMSG)			((void)(pEXP))
	#define	DN_RETURN(pEXP)							return(pEXP)
	#define	DN_RETURN_NONE							return
	#define	DN_BREAK								break
	#define	DN_CONTINUE								continue
	#define	DN_LEAVE								__leave
#endif	// _DEBUG

// HEAP check macro functions
// P.S.>
/*
		- Call DN_DCRT_ON() once to activate CRT debug heap tracking
		- CRTDBG_CHECK_ALWAYS_DF checks heap on every alloc/free; disabled due to heavy overhead
		- Must call _CrtSetDbgFlag() to enable CRT debug functions
*/
#if defined(_DEBUG)
	#if (1 == DN_DCRT_LEVEL)
		#define	DN_DCRT_ON()		::_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF)
	#elif (2 == DN_DCRT_LEVEL)
		#define	DN_DCRT_ON()		::_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF |		\
													 _CRTDBG_LEAK_CHECK_DF)
	#elif (3 == DN_DCRT_LEVEL)
		#define	DN_DCRT_ON()		::_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_DELAY_FREE_MEM_DF |		\
													 _CRTDBG_LEAK_CHECK_DF| _CRTDBG_CHECK_ALWAYS_DF)
	#else
		#define	DN_DCRT_ON()
	#endif

	#if (0 < DN_DCRT_LEVEL)
		#define	DN_DCRT_OFF()		::_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF)
		#define	DN_HEAP_CHECK()		DN_ASSERT(::_CrtCheckMemory(),					"Under/Overwrite or Invalid Access!")
		#define	DN_HEAP_PTR(pPTR)	DN_ASSERT(!::_CrtIsValidHeapPointer(pPTR),		"Invalid Heap Pointer")
		#define	DN_HEAP_LEAK()		DN_ASSERT(!::_CrtDumpMemoryLeaks(),				"Memory Leakage!")
		#define	DN_CODE(pCODE)		DN_ASSERT(!::IsBadCodePtr((FARPROC)pCODE),		"Bad Code!");
	#else
		#define	DN_DCRT_OFF()
		#define	DN_HEAP_CHECK()		
		#define	DN_HEAP_PTR(pPTR)
		#define	DN_HEAP_LEAK()
		#define	DN_CODE(pCODE)		DN_ASSERT(NULL != pCODE,						"Bad Code!");
	#endif

	// DESC : Checks for NULL and verifies whether pSZ is 0.
	#if (3 > DN_DCRT_LEVEL)
		#define	DN_READ(pMSG, pSZ)		DN_ASSERT((NULL != pMSG) && (0 < pSZ),		"Can`t Read!");
		#define	DN_WRITE(pBUF, pSZ)		DN_ASSERT((NULL != pBUF) && (0 < pSZ),		"Can`t Write!");
		#define	DN_STRINGA(pMSG, pSZ)	DN_ASSERT((NULL != pMSG) && ('\0'  != pMSG[0]) && (0 < pSZ),										"Invalid String!");
		#define	DN_STRINGW(pMSG, pSZ)	DN_ASSERT((NULL != pMSG) && (L'\0' != pMSG[0]) && (0 < pSZ),										"Invalid String!");
	#else
		#define	DN_READ(pMSG, pSZ)		DN_ASSERT(!::IsBadReadPtr(pMSG, pSZ),		"Can`t Read!");
		#define	DN_WRITE(pBUF, pSZ)		DN_ASSERT(!::IsBadWritePtr(pBUF, pSZ),		"Can`t Write!");
		#define	DN_STRINGA(pMSG, pSZ)	DN_ASSERT(!::IsBadStringPtrA(pMSG, pSZ) && ('\0'  != pMSG[0]) && (::strlen(pMSG) <= (size_t)pSZ),	"Invalid String!");
		#define	DN_STRINGW(pMSG, pSZ)	DN_ASSERT(!::IsBadStringPtrW(pMSG, pSZ) && (L'\0' != pMSG[0]) && (::wcslen(pMSG) <= (size_t)pSZ),	"Invalid String!");
	#endif
#else	// _DEBUG
	#define	DN_DCRT_ON()
	#define	DN_DCRT_OFF()

	#define	DN_HEAP_CHECK()
	#define	DN_HEAP_PTR(pPTR)
	#define	DN_HEAP_LEAK()
	
	#define	DN_READ(pMSG, pSZ)
	#define	DN_WRITE(pBUF, pSZ)
	#define	DN_STRINGA(pMSG, pSZ)
	#define	DN_STRINGW(pMSG, pSZ)
	#define	DN_CODE(pCODE)
#endif	// _DEBUG

#if defined(_UNICODE)
#define DN_STRING		DN_STRINGW
#else	// _UNICODE
#define DN_STRING		DN_STRINGA
#endif	// _UNICODE


// Loop check macro functions
#if defined(_DEBUG)
#define	_UNIQUE_VAR(pVAR)							__XONLY__VAR__ ## pVAR
#define	_WHILE(pCOND, pLIMIT, pVAR)																		\
	INT _UNIQUE_VAR(pVAR) = pLIMIT+1;																	\
	while((pCOND) &&																					\
	((--_UNIQUE_VAR(pVAR)>=0)?true:(_ASSERTE(!"Infinite loop!"),false)))
#define	WHILE(pCOND, pLIMIT)																			\
	_WHILE(pCOND, pLIMIT, __COUNTER__)
#define	_FOR(pINIT, pCOND, pLOOP, pLIMIT, pVAR)															\
	INT _UNIQUE_VAR(pVAR) = pLIMIT+1;																	\
	for (pINIT;																							\
	((pCOND)&&((--_UNIQUE_VAR(pVAR)>=0)?true:(_ASSERTE(!"Infinite loop!"),false)));						\
	pLOOP)
#define	FOR(pINIT, pCOND, pLOOP, pLIMIT)																\
	_FOR(pINIT, pCOND, pLOOP, pLIMIT, __COUNTER__)
#else	// _DEBUG
#define	WHILE(pCOND, pLIMIT)						while((pCOND))
#define	FOR(pINIT, pCOND, pLOOP, pLIMIT)			for (pINIT; pCOND; pLOOP)
#endif	// _DEBUG
#define	WHILE_INFINITE								for (;;)

// Macros preventing object copying and assignment (specify access level when used)
#define	DISABLE_COPY_ASSIGN(pCLS)											\
		private:															\
			pCLS(const pCLS##&)												\
			{																\
				DN_ASSERT(0, "Don`t use Copy Constructor!");				\
			}																\
			pCLS##& operator=(const pCLS##&)								\
			{																\
				DN_ASSERT(0, "Don`t use Assignment operator!");				\
				return(*this);												\
			}
#define	DISABLE_COPY_ASSIGN_DEFAULT(pCLS)									\
		public:																\
			pCLS()															\
			{																\
				/*DN_ASSERT(0, "Don`t use Default constructor!");*/			\
			}																\
		private:															\
			pCLS(const pCLS##&)												\
			{																\
				DN_ASSERT(0, "Don`t use Copy constructor!");				\
			}																\
			pCLS##& operator=(const pCLS##&)								\
			{																\
				DN_ASSERT(0, "Don`t use Assignment operator!");				\
				return(*this);												\
			}

// Type conversion and inheritance checking macros
template<typename TDERV, typename TBASE>
class CCnvChker
{
private:
	typedef	char							TP_SMALL;
	typedef class { TP_SMALL DUM[2];}		TP_BIG;
	static  TP_SMALL	Test(TBASE);
	static  TP_BIG		Test(...);
	static  TDERV		MakeDerv();
public:
#pragma warning (disable:4244)	//possible loss of data
	enum {EV_ISCONV = (sizeof(Test(MakeDerv())) == sizeof(TP_SMALL))};
#pragma warning (default:4244)
	enum {EV_ISSAME = false};
};
template<typename TDERV>
class CCnvChker<TDERV, TDERV>
{
public:
	enum {EV_ISCONV = true};
	enum {EV_ISSAME = true};
};

#define	IS_SUPER_CLASS(pDERV, pBASE)	\
	(CCnvChker<const pDERV*, const pBASE*>::EV_ISCONV && !CCnvChker<const pDERV*, const void*>::EV_ISSAME)
#define	IS_SAME_CLASS(pDERV, pBASE)		\
	(IS_SUPER_CLASS(pDERV, pBASE) && CCnvChker<const pDERV, const pBASE>::EV_ISSAME)

// Miscellaneous macro functions
#if defined(_DEBUG)
#if !defined(NEW)
//#define NEW	::new(_CLIENT_BLOCK, __FILE__, __LINE__)	// Prints file and line info for unfreed dynamic allocations (_CLIENT_BLOCK sets Client Block ID in lower 16 bits to track allocations by ID)
#define NEW		::new(_NORMAL_BLOCK, __FILE__, __LINE__)	// Prints file and line info for unfreed dynamic allocations
#endif	// #if defined(NEW)
#define UNUSED(pVAL)				// Suppresses C4100 unreferenced formal parameter warning
#else	// _DEBUG
#if !defined(NEW)
#define NEW		::new(std::nothrow)
#endif	// #if defined(NEW)
#define UNUSED(pVAL) pVAL			// Suppresses C4100 unreferenced formal parameter warning
#endif	// _DEBUG
#define UNUSED_ALWAYS(pVAL) pVAL	// Declares unreferenced variables to suppress C4100 warning regardless of compiler options


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CDebugUtil
//*---------------------------------------------------------------
// DESC : Collection of utility debugging methods consisting entirely of static member methods
// PRGM : B4nFter
//*---------------------------------------------------------------
class CDebugUtil
{
public:
	static VOID Trace(LPCTSTR lpszFormat, ...);
	static VOID MessageBox(HWND hWnd, UINT uType, LPCTSTR lpszCaption, LPCTSTR lpszFormat, ...);
	static VOID SetProgramName(LPTSTR lpszOutBuffer, INT nOutBufferSize, LPCTSTR lpszProgamName = NULL);
	static LPCTSTR GetProgramName();
	static LPCTSTR GetProgramPath();
#if defined(_DEBUG)
	inline static INT CrtDbgReport(LPCSTR lpszFileName, INT iLineNo, LPCSTR lpszMsg, LPCSTR lpszReason);
#endif	// _DEBUG

// 	static size_t StrLenA(LPCSTR pStr, DWORD pStrSz);
// 	static size_t StrLenW(LPCWSTR pStr, DWORD pStrSz);
	static FILE* FOpenA(LPCSTR pPath, LPCSTR pMode);
	static FILE* FOpenW(LPCWSTR pPath, LPCWSTR pMode);
	static BOOL IsSpaceAllA(LPCSTR pMSG);
	static BOOL IsSpaceAllW(LPCWSTR pMSG);

/*
	template<typename TTYPE>
	static TTYPE TypeMax(const TTYPE / *pVar* /);
	template<typename TTYPE>
	static TTYPE TypeMin(const TTYPE / *pVar* /);
*/
	template<typename TTYPE>
	static BOOL IsOverflow(const TTYPE pBase, const TTYPE pPlus);
	template<typename TTYPE>
	static BOOL IsUnderflow(const TTYPE pBase, const TTYPE pMinus);
/*
	template<typename TTYPE, typename TVAL>
	static BOOL IsAssignable(const TTYPE / *pType* /, const TVAL pVal);
	template<typename TTYPE, typename TVAL>
	VOID Assign(TTYPE& pType, const TVAL pVal);
*/
};


///////////////////////////////////////////////////////////////////
//	IMPLEMENTATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDebugUtil::Trace
//*---------------------------------------------------------------
// DESC : Method for outputting debugging information to TRACE
// PARM :	1 . lpszFormat - Output format
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
inline VOID CDebugUtil::Trace(LPCTSTR lpszFormat, ...)
{
	_ASSERTE(NULL != lpszFormat);

	if (!CBaseSet::IsWindowStationVisible()) {
		return;
	}

	TCHAR szBuffer[1024];
	va_list	szArgs;

	va_start(szArgs, lpszFormat);
#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	_vsntprintf_s(szBuffer, COUNT_OF(szBuffer), _TRUNCATE, lpszFormat, szArgs);
#else	// #if	(_MSC_VER >= 1400)
	#pragma warning (disable:4995)
	_vsntprintf(szBuffer, COUNT_OF(szBuffer), lpszFormat, szArgs);
	#pragma warning (default:4995)
#endif	// #if	(_MSC_VER >= 1400)
	va_end(szArgs);

	::OutputDebugString(szBuffer);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDebugUtil::MessageBox
//*---------------------------------------------------------------
// DESC : Method for outputting debugging information to message box
// PARM :	1 . hWnd - Window handle to display on
//			2 . uType - Creation flags
//			3 . lpszCaption - Caption title
//			4 . lpszFormat - Output format
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
inline VOID CDebugUtil::MessageBox(HWND hWnd, UINT uType, LPCTSTR lpszCaption, LPCTSTR lpszFormat, ...)
{
	_ASSERTE(NULL != lpszCaption);
	_ASSERTE(NULL != lpszFormat);

	if (!CBaseSet::IsWindowStationVisible()) {
		return;
	}

	TCHAR szBuffer[1024];
	va_list	szArgs;

	va_start(szArgs, lpszFormat);
#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	_vsntprintf_s(szBuffer, COUNT_OF(szBuffer), _TRUNCATE, lpszFormat, szArgs);
#else	// #if	(_MSC_VER >= 1400)
	#pragma warning (disable:4995)
	_vsntprintf(szBuffer, COUNT_OF(szBuffer), lpszFormat, szArgs);
	#pragma warning (default:4995)
#endif	// #if	(_MSC_VER >= 1400)
	va_end(szArgs);

	::MessageBox(hWnd, szBuffer, lpszCaption, uType | MB_SERVICE_NOTIFICATION);
}


#if defined(_DEBUG)
inline INT CDebugUtil::CrtDbgReport(LPCSTR lpszFileName, INT iLineNo, LPCSTR lpszMsg, LPCSTR lpszReason)
{
	_ASSERTE(NULL != lpszFileName);
	_ASSERTE(NULL != lpszMsg);
	_ASSERTE(NULL != lpszReason);

	return(::_CrtDbgReport(_CRT_ERROR, lpszFileName, iLineNo, NULL, "%s\n(Reason:%s)", lpszMsg, lpszReason));
}
#endif	// _DEBUG


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDebugUtil::SetProgramName
//*---------------------------------------------------------------
// DESC : Sets the program name used as prefix for log files
// PARM :	1 . lpszOutBuffer - Buffer to output program name
//			2 . nOutBufferSize - Program name output buffer size
//			3 . lpszProgamName - Custom program name specified by user
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
inline VOID CDebugUtil::SetProgramName(LPTSTR lpszOutBuffer, INT nOutBufferSize, LPCTSTR lpszProgamName)
{
	if (!lpszProgamName) {
		TCHAR szDrive[MAX_PATH], szDir[MAX_PATH], szFileName[MAX_PATH], szFileExt[MAX_PATH];

		// Get executable file name
		::GetModuleFileName(NULL, lpszOutBuffer, nOutBufferSize);

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
		_tsplitpath_s(lpszOutBuffer, szDrive, szDir, szFileName, szFileExt);
		_tcsncpy_s(lpszOutBuffer, nOutBufferSize, szFileName, _TRUNCATE);
#else	// #if	(_MSC_VER >= 1400)
		_tsplitpath(lpszOutBuffer, szDrive, szDir, szFileName, szFileExt);
		_tcsncpy(lpszOutBuffer, szFileName, nOutBufferSize);
#endif	// #if	(_MSC_VER >= 1400)
	}
	else {
#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
		_tcsncpy_s(lpszOutBuffer, nOutBufferSize, lpszProgamName, _TRUNCATE);
#else	// #if	(_MSC_VER >= 1400)
		_tcsncpy(lpszOutBuffer, lpszProgamName, nOutBufferSize);
#endif	// #if	(_MSC_VER >= 1400)
	}
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDebugUtil::GetProgramName
//*---------------------------------------------------------------
// DESC : Returns the name of the currently running program
// PARM : N/A
// RETV : Name of currently running program
// PRGM : B4nFter
//*---------------------------------------------------------------
inline LPCTSTR CDebugUtil::GetProgramName()
{
	static TCHAR szProgramName[MAX_PATH] = { _T('\0'), };

	if (_T('\0') == szProgramName[0]) {
		TCHAR szDrive[MAX_PATH], szDir[MAX_PATH], szFileName[MAX_PATH], szFileExt[MAX_PATH];

		// Get executable file name
		::GetModuleFileName(NULL, szProgramName, COUNT_OF(szProgramName));

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
		_tsplitpath_s(szProgramName, szDrive, szDir, szFileName, szFileExt);
		_tcsncpy_s(szProgramName, COUNT_OF(szProgramName), szFileName, _TRUNCATE);
#else	// #if	(_MSC_VER >= 1400)
		_tsplitpath(szProgramName, szDrive, szDir, szFileName, szFileExt);
		_tcsncpy(szProgramName, szFileName, COUNT_OF(szProgramName));
#endif	// #if	(_MSC_VER >= 1400)
	}
	return szProgramName;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDebugUtil::GetProgramPath
//*---------------------------------------------------------------
// DESC : Returns the path of the currently running program
// PARM : N/A
// RETV : Path of currently running program
// PRGM : B4nFter
//*---------------------------------------------------------------
inline LPCTSTR CDebugUtil::GetProgramPath()
{
	static TCHAR szProgramPath[MAX_PATH] = { _T('\0'), };

	if (_T('\0') == szProgramPath[0]) {
		TCHAR szDrive[MAX_PATH], szDir[MAX_PATH], szFileName[MAX_PATH], szFileExt[MAX_PATH];

		// Get executable file name
		::GetModuleFileName(NULL, szProgramPath, COUNT_OF(szProgramPath));

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
		_tsplitpath_s(szProgramPath, szDrive, szDir, szFileName, szFileExt);
		_sntprintf_s(szProgramPath, COUNT_OF(szProgramPath), _T("%s%s"), szDrive, szDir);
#else	// #if	(_MSC_VER >= 1400)
		_tsplitpath(szProgramPath, szDrive, szDir, szFileName, szFileExt);
		#pragma warning(disable:4995)
		_sntprintf(szProgramPath, _T("%s%s"), szDrive, szDir);
		#pragma warning(default:4995)
#endif	// #if	(_MSC_VER >= 1400)
	}
	return szProgramPath;
}


#if defined(_DEBUG)
/*
inline size_t CDebugUtil::StrLenA(LPCSTR pStr, DWORD pStrSz)
{
	// Zero length is treated as valid.
	size_t	aRv = 0;
	if ('\0' != *pStr)
	{
		if (!SUCCEEDED(::StringCchLengthA(pStr, ((STRSAFE_MAX_CCH<pStrSz)? STRSAFE_MAX_CCH:pStrSz), &aRv)))
		{
			DN_ASSERT(0, "Invalid String!");
		}
	}
	return(aRv);
}


inline size_t CDebugUtil::StrLenW(LPCWSTR pStr, DWORD pStrSz)
{
	// Zero length is treated as valid.
	size_t	aRv = 0;
	if (L'\0' != *pStr)
	{
		if (!SUCCEEDED(::StringCchLengthW(pStr, ((STRSAFE_MAX_CCH<pStrSz)? STRSAFE_MAX_CCH:pStrSz), &aRv)))
		{
			DN_ASSERT(0, "Invalid String!");
		}
	}
	return(aRv);
}
*/


inline FILE* CDebugUtil::FOpenA(LPCSTR pPath, LPCSTR pMode)
{
#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	FILE*	aFp = NULL;
	::fopen_s(&aFp, pPath, pMode);
	return(aFp);
#else	// #if	(_MSC_VER >= 1400)
	return(::fopen(pPath, pMode));
#endif	// #if	(_MSC_VER >= 1400)
}


inline FILE* CDebugUtil::FOpenW(LPCWSTR pPath, LPCWSTR pMode)
{
#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	FILE*	aFp = NULL;
	::_wfopen_s(&aFp, pPath, pMode);
	return(aFp);
#else	// #if	(_MSC_VER >= 1400)
	return(::_wfopen(pPath, pMode));
#endif	// #if	(_MSC_VER >= 1400)
}
#endif	// _DEBUG


inline BOOL CDebugUtil::IsSpaceAllA(LPCSTR pMSG)
{
	DN_ASSERT(NULL != pMSG,	"Invalid!");

	while('\0' != (*pMSG))
	{
		if (!::isspace((*pMSG++)&0xFF))		// 0xFF => Prevents assertion inside DCRT
		{
			return FALSE;
		}
	}
	return TRUE;
}


inline BOOL CDebugUtil::IsSpaceAllW(LPCWSTR pMSG)
{
	DN_ASSERT(NULL != pMSG,	"Invalid!");

	while(L'\0' != (*pMSG))
	{
		if (!::iswspace((*pMSG++)&0xFFFF))	// 0xFFFF => Prevents assertion inside DCRT
		{
			return FALSE;
		}
	}
	return TRUE;
}


/*
#if defined(max)
#undef max
#endif	// max
#if defined(min)
#undef min
#endif	// min


template<typename TTYPE>
inline TTYPE CDebugUtil::TypeMax(const TTYPE / *pVar* /)
{
	return(std::numeric_limits<TTYPE>::max());
}


template<typename TTYPE>
inline TTYPE CDebugUtil::TypeMin(const TTYPE / *pVar* /)
{
	return(std::numeric_limits<TTYPE>::min());
}
*/


template<typename TTYPE>
inline BOOL CDebugUtil::IsOverflow(const TTYPE pBase, const TTYPE pPlus)
{
//	DN_ASSERT(0 <= pPlus,	"Invalid parameter!");
	return((pPlus <= 0)? FALSE:((pBase+pPlus)<pBase));
}


template<typename TTYPE>
inline BOOL CDebugUtil::IsUnderflow(const TTYPE pBase, const TTYPE pMinus)
{
//	DN_ASSERT(0 <= pMinus,	"Invalid parameter!");	// pMinus is subtraction operand
	return((pMinus <= 0)? FALSE:(pBase<(pBase-pMinus)));
}


/*
template<typename TTYPE, typename TVAL>
inline BOOL CDebugUtil::IsAssignable(const TTYPE / *pType* /, const TVAL pVal)
{
	// Comparing signed and unsigned can cause errors; casting to INT64 resolves range checking
	return((std::numeric_limits<TTYPE>::min() <= static_cast<INT64>(pVal)) &&
		(static_cast<INT64>(pVal) <= std::numeric_limits<TTYPE>::max()));
}


template<typename TTYPE, typename TVAL>
inline VOID CDebugUtil::Assign(TTYPE& pType, const TVAL pVal)
{
	DN_ASSERT(IsAssignable(pType, pVal),	"Invalid!");
	pType = static_cast<TTYPE>(pVal);
}
*/

