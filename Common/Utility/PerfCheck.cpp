#include "StdAfx.h"
#include "PerfCheck.h"

#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include "psapi.h"

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

int g_nPerfCounter = 0;
bool g_bEnableProfile = false;
void (__stdcall *s_pProfileOutputDebugFunc)(const char*, ...) = _OutputDebug;

void SetProfileOutputDebugFuncPtr( void (__stdcall *Func)(const char*, ...) )
{
	s_pProfileOutputDebugFunc = Func;
}

typedef struct tagPERFDATA
{
	double	fMinCounter;
	double	fMaxCounter;
	double	fTotalCounter;

	LARGE_INTEGER	prevCounter;
	DWORD	nCountHits;

	// For offset
	double fFpsTotalCounter;
	DWORD dwFpsCountHits;
	double fAveFpsTotalCounter;
	DWORD dwAveFpsCountHits;

	int nPrevPrefCounter;

	string  strName;	

} PERFDATA, *LPPERFDATA;

static bool PerfCmp(const LPPERFDATA lhs, const LPPERFDATA rhs)
{
	return lhs->fMaxCounter > rhs->fMaxCounter;
}

class CPerfCheck
{
public:
	CPerfCheck()
	{
		m_vecPerfDataPtr.reserve(64);
	}

	~CPerfCheck()
	{
		OutputPerfInfo();

		vector<LPPERFDATA>::iterator it = m_vecPerfDataPtr.begin();
		vector<LPPERFDATA>::iterator itend = m_vecPerfDataPtr.end();

		for (; it != itend; it++)
			delete (*it);
	}

	void OutputPerfInfo( void (__stdcall *Func)(const char*, ...) = OutputDebugFunc )
	{

		char buf[256];

		vector<LPPERFDATA> vecPerfDataPtr;

		vecPerfDataPtr.assign(m_vecPerfDataPtr.begin(), m_vecPerfDataPtr.end());

		vector<LPPERFDATA>::iterator it = vecPerfDataPtr.begin();
		vector<LPPERFDATA>::iterator itend = vecPerfDataPtr.end();

		sort(it, itend, PerfCmp);

		Func("\n\n-----  Profiling Result Start -----\n\n");
		Func("      [ Func Name ]      Call Count          MAX(ms)          MIN(ms)          AVG(ms)\n\n");

		LARGE_INTEGER lFreq;		
		QueryPerformanceFrequency(&lFreq);

		double fFreq = double(lFreq.QuadPart) / 1000.;

		for (; it != itend; it++)
		{
			LPPERFDATA lpPerf = *it;
			
			// Basic profiling results
			sprintf(buf, "%-25s    %6d,          %6.4lf,          %6.4lf,          %6.4lf \n", lpPerf->strName.c_str(), lpPerf->nCountHits,
				lpPerf->fMaxCounter / fFreq,
				(lpPerf->fMinCounter == 100000000. ) ? ( 0. ) : ( lpPerf->fMinCounter / fFreq ),
				lpPerf->fTotalCounter / fFreq / double(lpPerf->nCountHits)
			);

			Func(buf);

			// Per-tick calculation results
			if( lpPerf->dwAveFpsCountHits > 0 ) {
				sprintf(buf, "    +-- Frame Per Result -> Call : ( %6d ),      Ave : ( %6.4lf )\n", lpPerf->dwAveFpsCountHits,
					lpPerf->fAveFpsTotalCounter / fFreq );
				Func(buf);
			}
		}


		Func("\n-----  Profiling Result End -----\n\n");
		
	}

	int RegisterPerfID(const char* lpFnName)
	{
		LPPERFDATA pPerfData = new PERFDATA;
		
		pPerfData->fMinCounter = 100000000.;
		pPerfData->fMaxCounter = 0.0;
		pPerfData->fTotalCounter = 0.0;
		pPerfData->prevCounter.QuadPart = 0;

		pPerfData->nCountHits = 0;
		pPerfData->strName = lpFnName;

		pPerfData->fFpsTotalCounter = 0.0f;
		pPerfData->dwFpsCountHits = 0;
		pPerfData->fAveFpsTotalCounter = 0.f;
		pPerfData->dwAveFpsCountHits = 0;
		pPerfData->nPrevPrefCounter = g_nPerfCounter;

		m_vecPerfDataPtr.push_back(pPerfData);
		
		return (int)m_vecPerfDataPtr.size() - 1;
	}


	void StartPerfCheck(int nID)
	{		
		QueryPerformanceCounter(&m_vecPerfDataPtr[nID]->prevCounter);
	}

	void EndPerfCheck(int nID)
	{
		LARGE_INTEGER currCount;
		QueryPerformanceCounter(&currCount);
		
		LPPERFDATA pPerf = m_vecPerfDataPtr[nID];		
		double fDiffCount;

		fDiffCount = double(currCount.QuadPart - pPerf->prevCounter.QuadPart);

		if (pPerf->fMinCounter > fDiffCount)
			pPerf->fMinCounter = fDiffCount;
		else if (pPerf->fMaxCounter < fDiffCount)
			pPerf->fMaxCounter = fDiffCount;

		pPerf->fTotalCounter += fDiffCount;
		pPerf->nCountHits++;

		if( g_nPerfCounter != pPerf->nPrevPrefCounter ) {
			bool bFirst = ( pPerf->dwAveFpsCountHits == 0 ) ? true : false;
			pPerf->fAveFpsTotalCounter += pPerf->fFpsTotalCounter;
			if( !bFirst ) pPerf->fAveFpsTotalCounter /= 2.f;

			pPerf->dwAveFpsCountHits += pPerf->dwFpsCountHits;
			if( !bFirst ) pPerf->dwAveFpsCountHits /= 2;

			pPerf->fFpsTotalCounter = fDiffCount;
			pPerf->dwFpsCountHits = 1;

			pPerf->nPrevPrefCounter = g_nPerfCounter;
		}
		else {
			pPerf->fFpsTotalCounter += fDiffCount;
			pPerf->dwFpsCountHits++;
		}
	}

protected:

	vector<LPPERFDATA> m_vecPerfDataPtr;

};

// Memory Checker

class CProfileMemChecker {
public:
	CProfileMemChecker() {}
	virtual ~CProfileMemChecker() {
		OutputResult( NULL );
	}

protected:
	struct InfoStruct {
		std::string szString;
		unsigned int dwUseMem;
		int nCallCount;
	};
	struct TempStruct {
		std::string szString;
		unsigned int dwCurrentMem;
	};
	std::vector<InfoStruct> m_vecResult;
	std::vector<TempStruct> m_vecTemp;

	InfoStruct *FindResult( char *szStr )
	{
		for( DWORD i=0; i<m_vecResult.size(); i++ ) {
			if( strcmp( m_vecResult[i].szString.c_str(), szStr ) == NULL ) return &m_vecResult[i];
		}
		return NULL;
	}

public:
	void StartBlock( char *szString )
	{
		MEMORYSTATUS memInfo;
		GlobalMemoryStatus(&memInfo);

		TempStruct Block;

		Block.szString = szString;
		Block.dwCurrentMem = (DWORD)memInfo.dwAvailPhys;
		m_vecTemp.push_back( Block );
	}

	void EndBlock( bool bPrintResult = true )
	{
		if( m_vecTemp.empty() ) 
			return;

		MEMORYSTATUS memInfo;
		GlobalMemoryStatus(&memInfo);

		TempStruct Block = m_vecTemp[ m_vecTemp.size() - 1 ];

		DWORD dwUseMem = (DWORD)( Block.dwCurrentMem - memInfo.dwAvailPhys );

		InfoStruct *pInfo = NULL;

		pInfo = FindResult( (char*)Block.szString.c_str() );
		if( pInfo ) {
			pInfo->dwUseMem += dwUseMem;
			pInfo->nCallCount++;
		}
		else {
			InfoStruct Info;
			Info.szString = Block.szString;
			Info.dwUseMem = dwUseMem;
			Info.nCallCount = 1;
			m_vecResult.push_back( Info );
		}
		m_vecTemp.erase( m_vecTemp.end() - 1 );

		if( bPrintResult ) {
			OutputResult( (char*)Block.szString.c_str() );
		}
	}
	void CancleBlock()
	{
		m_vecTemp.erase( m_vecTemp.end() - 1 );
	}
	void OutputResult( char *szString = NULL, void (__stdcall *Func)(const char*, ...) = OutputDebugFunc )
	{
		if( szString ) {
			InfoStruct *pInfo = FindResult( szString );
			if( pInfo )
				Func( "Mem Checker : [ %s ], Use Mem : %d bytes\n", pInfo->szString.c_str(), pInfo->dwUseMem );
		}
		else {
			Func( "\n----------------------- Memory Use Result ----------------------------\n" );
			Func( "\nFunction Name\tCall Count   Total Allocate memory ( byte )\n" );
			for( DWORD i=0; i<m_vecResult.size(); i++ ) {
				InfoStruct *pInfo = &m_vecResult[i];
				Func( "[ %s ] :       %d           Use %d bytes\n", pInfo->szString.c_str(), pInfo->nCallCount, pInfo->dwUseMem );
			}
		}
	}

};


// Help Func
#ifdef ENABLE_PROFILER
CPerfCheck	s_PerfCheck;
CProfileMemChecker s_ProfileMemCheck;

int RegisterPerfID(const char* lpFnName)
{
	return s_PerfCheck.RegisterPerfID(lpFnName);
}

void StartPerfCheck(int nID)
{
	s_PerfCheck.StartPerfCheck(nID);
}

void EndPerfCheck(int nID)
{
	s_PerfCheck.EndPerfCheck(nID);
}


void ProfilePrint(void (__stdcall *Func)(const char*, ...))
{
	s_PerfCheck.OutputPerfInfo(Func);
}

void StartProfileMemCheck(char *lpFnName)
{
	s_ProfileMemCheck.StartBlock( lpFnName );
}

void EndProfileMemCheck()
{
	s_ProfileMemCheck.EndBlock( false );
}

void ProfileMemPrint(void (__stdcall *Func)(const char*, ...))
{
	s_ProfileMemCheck.OutputResult( NULL, Func );
}

#else 

int RegisterPerfID(const char* lpFnName) { return 0; }
void StartPerfCheck(int nID) {}
void EndPerfCheck(int nID) {}
void ProfilePrint(void (__stdcall *Func)(const char*, ...)) {}
void StartProfileMemCheck(char *lpFnName) {}
void EndProfileMemCheck() {}
void ProfileMemPrint(void (__stdcall *Func)(const char*, ...)) {}

#endif // ENABLE_PROFILER

#ifdef _TEST_CODE_KAL

class CProfileMemChecker2
{
public:
	struct InfoStruct
	{
		std::string szString;
		unsigned int dwUseMem;
		int nCallCount;
	};

	struct TempStruct
	{
		std::string szString;
		unsigned int dwCurrentMem;
	};

	CProfileMemChecker2() {}
	virtual ~CProfileMemChecker2()
	{
		OutputResult(NULL);
	}
	void StartBlock(const char *szString)
	{
		PROCESS_MEMORY_COUNTERS_EX pmc;
		memset(&pmc, 0, sizeof(PROCESS_MEMORY_COUNTERS_EX));
		pmc.cb = sizeof(PROCESS_MEMORY_COUNTERS_EX);
		if (GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(PROCESS_MEMORY_COUNTERS_EX)))
		{
			TempStruct Block;
			Block.szString = szString;
			Block.dwCurrentMem = pmc.PrivateUsage;
			m_vecTemp.push_back(Block);
		}
	}

	void EndBlock(bool bPrintResult = true)
	{
		if (m_vecTemp.empty()) 
			return;

		PROCESS_MEMORY_COUNTERS_EX pmc;
		memset(&pmc, 0, sizeof(PROCESS_MEMORY_COUNTERS_EX));
		pmc.cb = sizeof(PROCESS_MEMORY_COUNTERS_EX);
		if (GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(PROCESS_MEMORY_COUNTERS_EX)))
		{
			TempStruct Block = m_vecTemp[m_vecTemp.size() - 1];

			DWORD dwUseMem = (DWORD)(pmc.PrivateUsage - Block.dwCurrentMem);

			InfoStruct *pInfo = NULL;
			pInfo = FindResult((char*)Block.szString.c_str());
			if (pInfo)
			{
				pInfo->dwUseMem += dwUseMem;
				pInfo->nCallCount++;
			}
			else
			{
				InfoStruct Info;
				Info.szString = Block.szString;
				Info.dwUseMem = dwUseMem;
				Info.nCallCount = 1;
				m_vecResult.push_back(Info);
			}

			m_vecTemp.erase(m_vecTemp.end() - 1);

			if (bPrintResult)
			{
				OutputResult((char*)Block.szString.c_str());
			}
		}
	}

	void CancleBlock()
	{
		m_vecTemp.erase(m_vecTemp.end() - 1);
	}

	void OutputResult(const char *szString = NULL, void (__stdcall *Func)(const char*, ...) = OutputDebugFunc)
	{
		if (szString)
		{
			InfoStruct* pInfo = FindResult(szString);
			if (pInfo)
				Func("Mem Checker : [ %s ], Use Mem : %d KB\n", pInfo->szString.c_str(), pInfo->dwUseMem / 1024 );
		}
		else
		{
			Func( "\n----------------------- Memory Use Result ----------------------------\n" );
			Func( "\nFunction Name \t\t Call Count \t\t Total Allocate memory ( byte )\n" );
			for( DWORD i=0; i<m_vecResult.size(); i++ ) {
				InfoStruct *pInfo = &m_vecResult[i];
				Func( "[ %s ] : \t\t %d \t\t Use %d KB\n", pInfo->szString.c_str(), pInfo->nCallCount, pInfo->dwUseMem / 1024 );
			}
		}

		Func( "\n-----------------------------------------------------------------------\n" );
	}

	InfoStruct* FindResult(const char *szStr)
	{
		for (DWORD i=0; i<m_vecResult.size(); i++)
		{
			if (strcmp(m_vecResult[i].szString.c_str(), szStr) == NULL)
				return &m_vecResult[i];
		}
		return NULL;
	}

private:
	std::vector<InfoStruct> m_vecResult;
	std::vector<TempStruct> m_vecTemp;
};
CProfileMemChecker2 g_ProfileMemCheck;

#endif // _TEST_CODE_KAL