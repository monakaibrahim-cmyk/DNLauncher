#pragma once
#include <list>
#include <vector>
#include <algorithm>

//----------------------------------------------------------------------------
class SyncObject
{
public:
	SyncObject();
	~SyncObject();

	void		Lock();
	void		Unlock();

private:
	CRITICAL_SECTION	m_cs;
};

//----------------------------------------------------------------------------
template < class _T >
class SyncObjectGuard
{
public:
	SyncObjectGuard( _T& LockObj )
		: m_MonitorObj( &LockObj )
	{
		m_MonitorObj->Lock();
	}

	~SyncObjectGuard()
	{
		m_MonitorObj->Unlock();
	}

private:
	_T*		m_MonitorObj;
};


template<typename _T, int RESERVE_SIZE = 0 >
class MemPool
{
public:
	MemPool()
		: m_pReserveData(NULL), m_nReserveSize(0), m_nUsedReserveSize(0), m_nInitCapacity(0), m_nTotalAllocatedSize(0)
	{
		Guard<SyncObject>  Sync(m_CS);
		if ( RESERVE_SIZE > 0 )
		{
			Reserve( RESERVE_SIZE );
		}
	}

	virtual ~MemPool()
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		Destroy();
	}

	// Allocate reserved space.
	void	Reserve(int nSize)
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		m_nUsedReserveSize = 0;
		m_nReserveSize = nSize;

		if ( m_pReserveData )
		{
			delete[] m_pReserveData;
			m_pReserveData = NULL;
		}

		if ( m_nReserveSize > 0 )
		{
			m_pReserveData = new BYTE[sizeof(_T)*m_nReserveSize];
		}
	}

	void InitCapacity(UINT nCapacity)
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		m_nInitCapacity = nCapacity;

		m_AllocateData.reserve(m_nInitCapacity);
		m_FreeData.reserve(m_nInitCapacity);
	}

	// Clear reserved space
	void	Destroy()
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		if ( m_pReserveData )
		{
			delete[] m_pReserveData;
			m_pReserveData = NULL;
		}

		m_nUsedReserveSize = 0;
		m_nReserveSize = 0;

		std::for_each(m_AllocateData.begin(), m_AllocateData.end(), __DeleteAllocatedData );

		m_AllocateData.clear();
		m_FreeData.clear();

	}

	_T*	Alloc()
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		++m_nTotalAllocatedSize;
		_T* pData = NULL;

		if ( m_FreeData.empty() )
		{
			// If remaining in reserved space 
			if ( m_nUsedReserveSize < m_nReserveSize )
			{
				pData = ((_T*)m_pReserveData) + (m_nUsedReserveSize++);
			}

			// Allocate new if exhausted.
			else
			{
				pData = __AllocateData();
				m_AllocateData.push_back(pData);
			}

			return pData;
		}


		pData = m_FreeData.back();
		m_FreeData.pop_back();
		return pData;

	}

	inline void Free(_T* pData)
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		--m_nTotalAllocatedSize;
		m_FreeData.push_back(pData);

	}

	inline DWORD GetAllocatedCount()
	{
		SyncObjectGuard<SyncObject> Sync(m_CS);
		return m_nTotalAllocatedSize;
	}

private:

	static _T* __AllocateData()
	{
		return (_T*)::operator new(sizeof(_T));
	}

	static void __DeleteAllocatedData(_T* pData)
	{
		::operator delete(pData);          
	}

private:
	// Pre-allocated pool storage 
	BYTE*	m_pReserveData;

	// Additional dynamic allocations 
	std::list<_T*>   m_AllocateData;
	std::vector<_T*> m_FreeData;

	// Reserved pool capacity
	DWORD m_nReserveSize;
	// Used reserved count 
	DWORD m_nUsedReserveSize;
	// Initial reserved chunk size for additional allocations
	DWORD m_nInitCapacity;
	// Total allocation count
	DWORD m_nTotalAllocatedSize;

	// Multi-threading synchronization lock
	SyncObject	m_CS;

};


template < class _T, int RESERVE_SIZE = 0 >
class ObjectPool
{
	typedef MemPool<_T, RESERVE_SIZE>		SELF_TYPE;

public:
	ObjectPool()
	{

	}

	virtual ~ObjectPool()
	{

	}

	static _T* Alloc()
	{
		return ms_Pool.Alloc();
	}

	static void Free(_T* pData)
	{
		ms_Pool.Free(pData);
	}

	void * operator new(size_t mem_size)
	{
		return ms_Pool.Alloc();
	}

	void operator delete(void* pT)
	{
		ms_Pool.Free((_T*)pT);
	}

	static SELF_TYPE& GetSharedPool()
	{
		return ms_Pool;
	}

protected:
	static SELF_TYPE ms_Pool;
};

template <class T, int RESERVE_SIZE> 
MemPool<T, RESERVE_SIZE>  ObjectPool<T, RESERVE_SIZE>::ms_Pool;

