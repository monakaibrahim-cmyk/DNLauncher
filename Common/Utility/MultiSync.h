
#pragma once

#include <stdio.h>
#include <crtdbg.h>
#include <tchar.h>

class	CMultiSync
{
public :
	CMultiSync(int count = 3);
	~CMultiSync();

	void EnterExclusive();
	void LeaveExclusive();

	void Reset();

	void EnterExclusive(const TCHAR *file, int line);
	int Enter(const TCHAR *file, int line);

	int Enter();
	void Leave(int handle);

private :
	CRITICAL_SECTION * m_pCS;
	int m_MaxCount;
	unsigned int m_iCnt;

	TCHAR (*m_DebugInfo)[64];
	TCHAR _DebugInfo[8][64];
} ;

#define _MCS_ENTER(CS)	(CS).Enter(_T(__FILE__), __LINE__)
#define _MCS_ENTEREXCLUSIVE(CS)	(CS).EnterExclusive(_T(__FILE__), __LINE__)

// 2009.01.19 Kimbap
// Added ScopeLock<CSyncLock> class
#include "CriticalSection.h"

template <> 
class ScopeLock<CMultiSync>
{
public:

	ScopeLock( CMultiSync& LockObj ):m_pLockObj(&LockObj)
	{
		m_iSyncIndex = m_pLockObj->Enter();
	}

	ScopeLock( CMultiSync& LockObj, bool bExclusive ):m_pLockObj(&LockObj),m_iSyncIndex(-1)
	{
		m_pLockObj->EnterExclusive();
	}

	~ScopeLock()
	{
		(m_iSyncIndex == -1) ? m_pLockObj->LeaveExclusive() : m_pLockObj->Leave( m_iSyncIndex );
	}

private:
	CMultiSync*	m_pLockObj;
	int			m_iSyncIndex;
};