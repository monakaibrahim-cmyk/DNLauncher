// Note : Simple List Memory Pool -_-;;;;
//		Added for future interface usage.
//
#pragma once

#include <list>
#include <algorithm>

template<typename TYPE>
class CSLMemPool
{
protected:
	struct DeleteObject
	{
		template<typename TYPE>
		void operator() ( const TYPE *ptr ) const
		{
			ASSERT(ptr&&"CMemPool<TYPE>::operator()");
			delete ptr;
		}
	};

	typedef typename std::list<TYPE*>			MEMPOOL_LIST;
	typedef typename MEMPOOL_LIST::iterator		MEMPOOL_LIST_ITER;

	MEMPOOL_LIST m_listMemPool;

public:
	CSLMemPool();
	~CSLMemPool();

public:
	// Note : Allocate memory.
	//		Return from pool if available, otherwise new.
	TYPE* Allocate();
	// Note : Return to memory pool. Object retains prior values.
	//		Must initialize before or after returning to pool.
	void Deallocate( TYPE* ptr );
	// Note : Return to memory pool after reinitializing object with constructor.
	void DeallocateEx( TYPE* ptr );

public:
	DWORD GetAmount()	{ return static_cast<DWORD>(m_listMemPool.size()); }
	void Clear()		{ std::for_each ( m_listMemPool.begin(), m_listMemPool.end(), DeleteObject() ); }
};

template<typename TYPE>
inline CSLMemPool<TYPE>::CSLMemPool()
{
}

template<typename TYPE>
inline CSLMemPool<TYPE>::~CSLMemPool()
{
	Clear();
}

template<typename TYPE>
inline TYPE* CSLMemPool<TYPE>::Allocate()
{
	if( m_listMemPool.empty() )
	{
		return new TYPE;
	}

	TYPE* ptr = *m_listMemPool.begin();
	m_listMemPool.pop_front();

	ASSERT(ptr&&"CMemPool<TYPE>::Allocate");
	return ptr;
}

template<typename TYPE>
inline void CSLMemPool<TYPE>::Deallocate( TYPE* ptr )
{
	ASSERT(ptr&&"CMemPool<TYPE>::Deallocate");
	m_listMemPool.push_back ( ptr );
}

template<typename TYPE>
inline void CSLMemPool<TYPE>::DeallocateEx( TYPE* ptr )
{
	ASSERT(ptr&&"CMemPool<TYPE>::DeallocateEx");
	*ptr = TYPE();
	m_listMemPool.push_back ( ptr );
}