
#include "STDAFX.H"
#include "ACCESS.H"
#include "COMMONMACROS.H"
#include "BASESET.H"
#include "DEBUGUTIL.H"
#include "SAFESTRINGMACROS.H"


#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

#if defined(_DEBUG)
CAccess::TP_DEBUGLIST CAccess::m_Debug;
//MODE_DBG(CAccess::TP_DEBUGLIST CAccess::m_Debug;);
CAccess::TP_LOCK CAccess::m_DebugLock;
//MODE_DBG(CAccess::TP_LOCK CAccess::m_DebugLock);
#endif	// _DEBUG


CAccess::CAccess() : m_dwAccessCount(0), m_bEnable(FALSE), m_bOpen(FALSE)
{
	
}


CAccess::~CAccess()
{
	Close();
}


DWORD CAccess::Open(BOOL pDoEnable)
{
	DN_ASSERT(!IsOpen(),			"Alrady Opened!");
#if defined(_DEBUG)
//	DN_ASSERT(m_DebugLock.IsOpen(),	"Invalid!");	// CAccess::OpenDebug() must be called first
#endif	// _DEBUG

	m_dwAccessCount = 0;
	m_bEnable = pDoEnable;	// !!! Temporary -> should be replaced with access level flag later
	m_bOpen = TRUE;

/*
	DWORD dwRetVal = m_Lock.Open();
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}
*/

	return NOERROR;
}


VOID CAccess::Close()
{
//	DN_ASSERT(IsOpen(),		"Not Opened!");

	m_bEnable = FALSE;		// !!! Temporary -> should be replaced with access level flag later
	m_bOpen = FALSE;

//	m_Lock.Close();
}


VOID CAccess::Reset()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");
	DN_ASSERT(!m_Lock.IsLock(),	"Invalid!");

	TP_LOCKAUTO aLockAuto(m_Lock);

	ResetNoLock();
}


VOID CAccess::ResetNoLock()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");
	DN_ASSERT(1 > m_dwAccessCount,	"Invalid!");

	m_bEnable = TRUE;
	m_dwAccessCount = 0;
}


DWORD CAccess::GetAccessCount() const
{
	DN_ASSERT(IsOpen(),			"Not Opened!");
	DN_ASSERT(!m_Lock.IsLock(),	"Invalid!");

	TP_LOCKAUTO aLockAuto(m_Lock);

	return(GetAccessCountNoLock());
}


DWORD CAccess::GetAccessCountNoLock() const
{
	DN_ASSERT(IsOpen(),			"Not Opened!");
	DN_ASSERT(m_Lock.IsLock(),	"Invalid!");

	return(m_dwAccessCount);
}


BOOL CAccess::CanAttach()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");
	DN_ASSERT(!m_Lock.IsLock(),	"Invalid!");

	TP_LOCKAUTO aLockAuto(m_Lock);

	return(CanAttachNoLock());
}


BOOL CAccess::CanAttachNoLock()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");
	DN_ASSERT(m_Lock.IsLock(),	"Invalid!");

	return(m_bEnable == TRUE);
}


BOOL CAccess::Attach()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	BOOL bRetVal = FALSE;

	TP_LOCKAUTO aLockAuto(m_Lock);

	if (CanAttachNoLock()) {
		bRetVal = TRUE;
		AttachMain();
	}
	return(bRetVal);
}


/*
BOOL CAccess::AttachTry()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	BOOL bRetVal = FALSE;

	if (m_Lock.LockTry()) {

		if (CanAttachNoLock()) {
			bRetVal = TRUE;
			AttachMain();
		}
		m_Lock.UnLock();
	}
	return(bRetVal);
}
*/


VOID CAccess::AttachMust()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	TP_LOCKAUTO aLockAuto(m_Lock);

	AttachMain();
}


BOOL CAccess::Detach()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	BOOL bRetVal = FALSE;

	TP_LOCKAUTO aLockAuto(m_Lock);

	DetachMain();
	if (FALSE == m_bEnable) {
		if (1 > m_dwAccessCount) {
			m_bEnable = FALSE;
			bRetVal = (0 == m_dwAccessCount);	// To prevent double processing, TRUE only when 0
		}
	}
	return(bRetVal);
}


BOOL CAccess::DetachMust()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	BOOL bRetVal = FALSE;

	TP_LOCKAUTO aLockAuto(m_Lock);

	if (0 < m_dwAccessCount) {	// To prevent double processing, process only when > 0
		m_dwAccessCount = 0;
		m_bEnable = FALSE;
		bRetVal = TRUE;
	}
	return(bRetVal);
}


VOID CAccess::AttachMain()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	++m_dwAccessCount;

#if defined(_DEBUG)
	{
		DWORD aThreadId = ::GetCurrentThreadId();
		TP_LOCKAUTO aLockAuto(m_DebugLock);
		
		TP_DEBUGLIST_ITR aIt = m_Debug.find(aThreadId);
		if (m_Debug.end() == aIt) {
			std::pair<TP_DEBUGLIST_ITR, bool> RetVal = m_Debug.insert(TP_DEBUGLIST::value_type(aThreadId, 0));
			DN_ASSERT(RetVal.second,	"Check!");
			aIt = RetVal.first;
		}

		DN_ASSERT(++(aIt->second) < DF_DEBUG_COUNT,	"After Call Attach(), Call Detach() Immediatly After Using is Over !!!");
	}
#endif // _DEBUG
}


VOID CAccess::DetachMain()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	--m_dwAccessCount;

#if defined(_DEBUG)
	{
		DWORD aThreadId = ::GetCurrentThreadId();
		TP_LOCKAUTO aLockAuto(m_DebugLock);
		
		TP_DEBUGLIST_ITR aIt = m_Debug.find(aThreadId);
		if (m_Debug.end() != aIt) {
			--(aIt->second);
		}
	}
#endif // _DEBUG
}


VOID CAccess::DisableAttach()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	TP_LOCKAUTO aLockAuto(m_Lock);

	DisableAttachNoLock();
}


VOID CAccess::DisableAttachNoLock()
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	m_bEnable = FALSE;
}


VOID CAccess::Lock() const
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	m_Lock.Lock();
}


VOID CAccess::Unlock() const
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	m_Lock.UnLock();
}


/*
BOOL CAccess::LockTry() const
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	return m_Lock.LockTry();
}
*/


#if defined(_DEBUG)
BOOL CAccess::IsLock() const
{
	DN_ASSERT(IsOpen(),			"Not Opened!");

	return((m_Lock.IsLock())?(TRUE):(FALSE));
}


DWORD CAccess::OpenDebug()
{
/*
	DWORD dwRetVal = m_DebugLock.Open();
	if (NOERROR != dwRetVal) {
		DN_RETURN(HASERROR+0);
	}
*/

	return NOERROR;
}


DWORD CAccess::GetAccessCountByThread()
{
	TP_LOCKAUTO aLockAuto(m_DebugLock);

	return(m_Debug[::GetCurrentThreadId()]);
}
#endif // _DEBUG

