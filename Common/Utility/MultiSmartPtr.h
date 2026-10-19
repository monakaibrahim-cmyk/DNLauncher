#pragma once

#include < vector >
#include <algorithm>
#include "SmartPtr.h"
#include "MultiCommon.h"
#include "MultiRoom.h"
#include "MultiElement.h"

//#ifdef _DEBUG
#define SMARTPTR_VALID_CHECK
//#endif //_DEBUG

template < class T >
class CMultiSmartPtr : virtual public CMultiElement
{
public:
	CMultiSmartPtr() 
	{	
//		Initialize( pRoom );
		m_nHandle = 0xffffffffffffffff;
		m_pInstance = 0;
		m_iRoomID = -1;
	}
	CMultiSmartPtr( _int64 nHandle, T *pInstance, CMultiRoom *pRoom )
	{
		Initialize( pRoom );
		m_nHandle = nHandle;
		m_pInstance = pInstance;
		if( pRoom )
			m_iRoomID = pRoom->GetRoomID();
		else
			m_iRoomID = -1;
	}
	template< class T2 >
	CMultiSmartPtr( CMultiSmartPtr< T2 > &Ptr ) 
	{
		m_nHandle = Ptr.m_nHandle;
		m_pInstance = reinterpret_cast< T * >( Ptr.m_pInstance );
		Initialize( Ptr.GetRoom() );
		m_iRoomID = Ptr.GetRoomID();
	}
	~CMultiSmartPtr() {}

public:
	union
	{
		_int64 m_nHandle;
		struct
		{
			int m_nIndex;
			int m_nID;
		};
	};
	T *m_pInstance;

private:
	int m_iRoomID;

public:
	void Identity() 
	{
		m_nHandle = 0xffffffffffffffff;
		m_pInstance = 0;
	}

	_int64 GetHandle() const { return m_nHandle; }
	int GetIndex()	{ return m_nIndex; }
	int GetID()		{ return m_nID; }
	int GetRoomID(){ return m_iRoomID; }
	T *GetPointer() { return m_pInstance; }
	operator T*()
	{
		if( !m_pInstance->IsValidSmartPtr( GetRoomID(), m_nHandle, m_pInstance ) )
		{
			return NULL;
		}
		return m_pInstance;
	}
	bool operator!()
	{
		if( !m_pInstance->IsValidSmartPtr( GetRoomID(), m_nHandle, m_pInstance ) )
		{
			return true;
		}
		if( !m_pInstance ) return true;

		return false;
	}
	T *operator->()
	{
#ifdef SMARTPTR_VALID_CHECK
		if( !m_pInstance->IsValidSmartPtr( GetRoomID(), m_nHandle, m_pInstance ) )
		{
			ASSERT( 0 );
			// Force crash
			int* p = NULL;
			*p = 0xfefe;
		}
#endif
		return( m_pInstance );
	}
	T &operator*()
	{
#ifdef SMARTPTR_VALID_CHECK
		if( !m_pInstance->IsValidSmartPtr( GetRoomID(), m_nHandle, m_pInstance ) )
		{
			ASSERT( 0 );
			// Force crash
			int* p = NULL;
			*p = 0xfefe;
		}
#endif
		return( *m_pInstance );
	}

	template < class T2 >
	CMultiSmartPtr< T > &operator = ( CMultiSmartPtr< T2 > &Sour )
	{
		m_nHandle = Sour.m_nHandle;
		Initialize( Sour.GetRoom() );
		m_iRoomID = Sour.GetRoom() ? Sour.GetRoom()->GetRoomID() : -1;
		m_pInstance = reinterpret_cast< T * >( Sour.m_pInstance );

		return *this;
	}
	template < class T2 >
	bool operator == ( const CMultiSmartPtr< T2 > &Sour )
	{
		if( ( m_nHandle == Sour.m_nHandle ) && (m_pInstance == reinterpret_cast< T * >( Sour.m_pInstance ) ) )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	template < class T2 >
	bool operator!= ( const CMultiSmartPtr< T2 > &Sour )
	{ 
		return( !( *this == Sour ) );
	}
};

template < class T >
class CMultiSmartPtrMng
{
public:
	static int s_nDefaultPoolSize;
	CMultiSmartPtrMng( int nPoolSize = 1 )
	{
		Reset( ( nPoolSize == 1 ) ? s_nDefaultPoolSize : nPoolSize  );
	}
	~CMultiSmartPtrMng()
	{
		// Pointers were created externally so CMultiSmartPtrMng does not own deletion.
/*		int i;

		for( i = 0; i < ( int )m_veCMultiSmartPtrs.size(); i++ )
		{
			if( m_veCMultiSmartPtrs[ i ] )
			{
				delete m_veCMultiSmartPtrs[ i ];
			}
		}*/
	}
	void Reset( int nPoolSize )
	{
		int i;

		m_vecSmartPtrs.resize( nPoolSize );
		m_vecEmptySlots.resize( nPoolSize );
		for( i = 0; i <nPoolSize ; i++ )
		{
			m_vecSmartPtrs[ i ] = CMultiSmartPtr< T >( 0xffffffff00000000 + i, 0, NULL );
			m_vecEmptySlots[ i ] = nPoolSize - i - 1;
		}
		m_vecUsedSlots.clear();
	}

protected:
	std::vector< CMultiSmartPtr< T > > m_vecSmartPtrs;
	std::vector< int > m_vecEmptySlots;
	std::vector< int > m_vecUsedSlots;

public:
	CMultiSmartPtr< T > operator[] ( int nID )
	{
		return m_vecSmartPtrs[ nID ];
	}
	int BufferSize()
	{
		return ( int )m_vecSmartPtrs.size();
	}
	void SwapItemIndex( int nItemIndex1, int nItemIndex2 )
	{
		int nBackup;
		nBackup = m_vecUsedSlots[ nItemIndex1 ];
		m_vecUsedSlots[ nItemIndex1 ] = m_vecUsedSlots[ nItemIndex2 ];
		m_vecUsedSlots[ nItemIndex2 ] = nBackup;
	}
	int GetItemCount()
	{
		return ( int )m_vecUsedSlots.size();
	}
	int GetItemIndex( CMultiSmartPtr< T > &SmartPtr )
	{
		int i;

		for( i = 0; i < ( int )m_vecUsedSlots.size(); i++ )
		{
			if( m_vecSmartPtrs[ m_vecUsedSlots[ i ] ] == SmartPtr )
			{
				return i;
			}
		}
		ASSERT( 0 && "Should never happen" ); 
		return -1;
	}
	CMultiSmartPtr< T > GetItem( int nItemIndex )
	{
		return m_vecSmartPtrs[ m_vecUsedSlots[ nItemIndex ] ];
	}

	bool IsValidItem( int nItemIndex )
	{
		if( static_cast<int>(m_vecUsedSlots.size()) <= nItemIndex )
			return false;

		if( static_cast<int>(m_vecSmartPtrs.size()) <= m_vecUsedSlots[nItemIndex] )
			return false;

		return true;
	}

	CMultiSmartPtr< T > &CreateHandle( T *pInstance )
	{
		ASSERT( pInstance );

		_int64 nHandle, nID;
		int nFreeSlotIndex;

		if( m_vecEmptySlots.empty() )
		{
			m_vecEmptySlots.push_back( ( int )m_vecSmartPtrs.size() );
			m_vecSmartPtrs.push_back( CMultiSmartPtr< T >( 0, 0, NULL ) );
		}

		nFreeSlotIndex = m_vecEmptySlots.back();
		m_vecEmptySlots.pop_back();
		nID = m_vecSmartPtrs[ nFreeSlotIndex ].GetID();
		nID++;
		nHandle = ( nID << 32 ) + nFreeSlotIndex;
		m_vecSmartPtrs[ nFreeSlotIndex ] = CMultiSmartPtr< T >( nHandle, pInstance, pInstance->GetRoom() );
		m_vecUsedSlots.push_back( nFreeSlotIndex );

		return m_vecSmartPtrs[ nFreeSlotIndex ];
	}

	void DeleteHandle( CMultiSmartPtr< T > hHandle )
	{
		ASSERT( hHandle.GetHandle() == m_vecSmartPtrs[ hHandle.GetIndex() ].GetHandle() );

		int nIndex;
		_int64 nID;
		std::vector< int >::iterator Iter;

		nIndex = hHandle.GetIndex();
		nID = hHandle.GetID();
		if( nIndex < static_cast<int>(m_vecSmartPtrs.size()) )
			m_vecSmartPtrs[ nIndex ] = CMultiSmartPtr< T >( nID << 32, 0, hHandle.GetRoom() );
		Iter = std::find( m_vecUsedSlots.begin(), m_vecUsedSlots.end(), nIndex );
		if( Iter != m_vecUsedSlots.end() )
		{
			m_vecUsedSlots.erase( Iter );
		}
		m_vecEmptySlots.push_back( nIndex );
	}
	void PopItem( CMultiRoom *pRoom, int nItemIndex )
	{
		if( ( nItemIndex >= ( int )m_vecUsedSlots.size() ) && ( nItemIndex < 0 ) )
		{
			return;
		}
		int nIndex = m_vecUsedSlots[ nItemIndex ];
		_int64 nID = m_vecSmartPtrs[ nIndex ].GetID();
		if( nIndex < static_cast<int>(m_vecSmartPtrs.size()) )
			m_vecSmartPtrs[ nIndex ] = CMultiSmartPtr< T >( nID << 32, 0, pRoom );
		m_vecUsedSlots.erase( m_vecUsedSlots.begin() + nItemIndex );
		m_vecEmptySlots.push_back( nIndex );
	}
};

template < class T, int MAXCOUNT >
class CMultiSmartPtrBase : virtual public CMultiElement
{
public:
	CMultiSmartPtrBase( CMultiRoom *pRoom ):m_uiRoomIndex(pRoom->GetRoomID())
	{
		m_uiRoomIndex = pRoom->GetRoomID();
		Initialize( pRoom );
		AddToList();
	}
	virtual ~CMultiSmartPtrBase()
	{
		DeleteFromList();
		m_MySmartPtr = s_Identity;
	}

private:
	static CMultiSmartPtrMng< T > s_SmartPtrMng[MAXCOUNT];	// Declared private so derived classes cannot access directly.
	static CMultiSmartPtr< T > s_Identity;
	UINT	m_uiRoomIndex;

protected:
	CMultiSmartPtr< T > m_MySmartPtr;

public:
	virtual void Release() { delete this; }
	void AddToList() { m_MySmartPtr = s_SmartPtrMng[m_uiRoomIndex].CreateHandle( static_cast< T * >( this ) ); }
	void DeleteFromList() { s_SmartPtrMng[m_uiRoomIndex].DeleteHandle( m_MySmartPtr ); }
	int GetMyItemIndex() { return s_SmartPtrMng[m_uiRoomIndex].GetItemIndex( m_MySmartPtr ); }

	static void SwapItemIndex( CMultiRoom *pRoom, int nItemIndex1, int nItemIndex2 ) { STATIC_INSTANCE_(s_SmartPtrMng).SwapItemIndex( nItemIndex1, nItemIndex2 ); }
	// Returns count of currently allocated slots.
	static int GetItemCount( CMultiRoom *pRoom ) { return STATIC_INSTANCE_(s_SmartPtrMng).GetItemCount(); }			
	// Retrieve from allocated slot list. Note: nItemIndex may change upon insertion/deletion.
	static CMultiSmartPtr< T >GetItem( CMultiRoom *pRoom, int nItemIndex ) { return STATIC_INSTANCE_(s_SmartPtrMng).GetItem( nItemIndex ); }	
	static bool  IsValidItem( CMultiRoom* pRoom, int nItemIndex ){ return STATIC_INSTANCE_(s_SmartPtrMng).IsValidItem( nItemIndex ); }

	int GetMyIndex() { return m_MySmartPtr.GetIndex(); }
	CMultiSmartPtr< T > GetMySmartPtr() { return m_MySmartPtr; }
	// Retrieve from full list. nIndex remains invariant regardless of insert/delete.
	static CMultiSmartPtr< T > GetSmartPtr( CMultiRoom *pRoom, int nIndex ) { 
		if( nIndex < 0 || nIndex >= STATIC_INSTANCE_(s_SmartPtrMng).BufferSize() ) return Identity();
		return STATIC_INSTANCE_(s_SmartPtrMng)[ nIndex ]; 
	}
	static void Reset( CMultiRoom *pRoom ) { STATIC_INSTANCE_(s_SmartPtrMng).Reset( STATIC_INSTANCE_(s_SmartPtrMng).BufferSize() ); }

	static bool IsValidSmartPtr( CMultiRoom *pRoom, _int64 nHandle, T *pInstnace )
	{
		if( nHandle == -1 ) return false;
		if( pInstnace == NULL ) return false;
		if( pRoom == NULL ) return false;

		CMultiSmartPtr< T > CheckSmartPtr;
		int nIndex = (int)( nHandle & 0xffffffff );
		if( nIndex < 0 || nIndex >= STATIC_INSTANCE_(s_SmartPtrMng).BufferSize() )
		{
			return false;
		}
		CheckSmartPtr = STATIC_INSTANCE_(s_SmartPtrMng)[ nIndex ];
		if( CheckSmartPtr.GetHandle() != nHandle )
		{
			return false;
		}
		if( CheckSmartPtr.GetPointer() != pInstnace )
		{
			return false;
		}

		return true;
	}

	static bool IsValidSmartPtr( int iRoomID, _int64 nHandle, T *pInstnace )
	{
		if( nHandle == -1 ) return false;
		if( pInstnace == NULL ) return false;
		if( iRoomID < 0 || iRoomID >= _countof(s_SmartPtrMng) )
			return false;

		CMultiSmartPtr< T > CheckSmartPtr;
		int nIndex = (int)( nHandle & 0xffffffff );
		if( nIndex < 0 || nIndex >= s_SmartPtrMng[iRoomID].BufferSize() )
		{
			return false;
		}
		CheckSmartPtr = s_SmartPtrMng[iRoomID][ nIndex ];
		if( CheckSmartPtr.GetHandle() != nHandle )
		{
			return false;
		}
		if( CheckSmartPtr.GetPointer() != pInstnace )
		{
			return false;
		}

		return true;
	}

	static void DeleteAllObject( CMultiRoom *pRoom )
	{
		while( STATIC_INSTANCE_(s_SmartPtrMng).GetItemCount() )
		{
			CMultiSmartPtr< T > hHandle;
			hHandle = STATIC_INSTANCE_(s_SmartPtrMng).GetItem( 0 );
			if( hHandle )
			{
				int nCount = STATIC_INSTANCE_(s_SmartPtrMng).GetItemCount();
				delete hHandle;
				if( nCount == STATIC_INSTANCE_(s_SmartPtrMng).GetItemCount() ) {
					STATIC_INSTANCE_(s_SmartPtrMng).PopItem( pRoom, 0 );
				}
			}
			else 
			{
				STATIC_INSTANCE_(s_SmartPtrMng).PopItem( pRoom, 0 );
			}
		}
	}
	static CMultiSmartPtr< T > Identity() { return s_Identity; }
};

#define DECL_MULTISMART_PTR_STATIC( Name, MAXCOUNT, Count ) \
	int CMultiSmartPtrMng< Name >::s_nDefaultPoolSize = Count; \
	CMultiSmartPtrMng< Name > CMultiSmartPtrBase< Name, MAXCOUNT >::s_SmartPtrMng[MAXCOUNT]; \
	CMultiSmartPtr< Name > CMultiSmartPtrBase< Name, MAXCOUNT >::s_Identity;
