#pragma once

#include <stdio.h>
#include "AssertX.h"
#include "MultiRoom.h"
//#include "DNGameRoom.h"

template < class T, int MAXCOUNT > 
class CMultiSingleton : virtual public CMultiElement
{
public:
	CMultiSingleton( CMultiRoom *pRoom )
	{
#pragma warning( disable:4311 4312 )
		Initialize( pRoom );
#if defined( WIN64 )
		STATIC_INSTANCE(s_pObj) = static_cast<T*>(this);
#else 
		ASSERT( !STATIC_INSTANCE(s_pObj) && "Duplicate instance created." );

		int offset = ( int )( T * )1 - ( int )( CMultiSingleton < T, MAXCOUNT > * )( T * )1;
		STATIC_INSTANCE(s_pObj) = ( T * )( ( int )this + offset );
#endif
#pragma warning( default:4311 4312 )
	}
	virtual ~CMultiSingleton()
	{
		ASSERT( STATIC_INSTANCE(s_pObj) );
		STATIC_INSTANCE(s_pObj) = NULL;
	}

protected:
	static T* s_pObj[MAXCOUNT];

public:
	static T& GetInstance( CMultiRoom *pRoom )
	{
		ASSERT( STATIC_INSTANCE_(s_pObj) );
		return ( *STATIC_INSTANCE_(s_pObj) );
	}
	static T& GetInstance( int nID )
	{
		return ( *s_pObj[nID] );
	}

	static T *GetInstancePtr( CMultiRoom *pRoom )
	{
		ASSERT( STATIC_INSTANCE_(s_pObj) );
		return STATIC_INSTANCE_(s_pObj);
	}
	static bool CreateInstance( CMultiRoom *pRoom )
	{
		ASSERT( !STATIC_INSTANCE_(s_pObj) );
		T *pTemp = new T;
		ASSERT( pTemp );
		return true;
	}
	static void DestroyInstance( CMultiRoom *pRoom )
	{
		ASSERT( STATIC_INSTANCE_(s_pObj) );
		delete STATIC_INSTANCE_(s_pObj);
		STATIC_INSTANCE_(s_pObj) = NULL;
	}
	static bool IsActive( CMultiRoom *pRoom )
	{
		return ( STATIC_INSTANCE_(s_pObj) ) ? true : false;
	}
};

template < class T, int MAXCOUNT > T *CMultiSingleton < T, MAXCOUNT >::s_pObj[MAXCOUNT] = { NULL, };
