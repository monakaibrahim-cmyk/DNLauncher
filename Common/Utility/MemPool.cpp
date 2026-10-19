
#include "Stdafx.h"
#include "MemPool.h"

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

CLfhHeap::~CLfhHeap()
{
	HeapDestroy(m_hLfhHeap);
	m_hLfhHeap = NULL;
}

CLfhHeap * CLfhHeap::GetInstance()
{
	static CLfhHeap s;
	return &s;
}

bool CLfhHeap::InitPool()
{
	if (m_hLfhHeap) return true;
	m_hLfhHeap = HeapCreate(0, 0, 0);
	
	if (m_hLfhHeap == NULL)	return false;
	if (IsDebuggerPresent())	return true;	// Disable LFH when debugger is attached
	ULONG heapFragValue = 2;
	if (HeapSetInformation(m_hLfhHeap, HeapCompatibilityInformation, &heapFragValue, sizeof(heapFragValue)) == 0)
		return false;
	return true;
}