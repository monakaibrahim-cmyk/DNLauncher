#pragma once

#include <stdio.h>
#include "AssertX.h"

template < class T > class CSingleton
{
public:
	CSingleton()
	{
#pragma warning( disable:4311 4312 )
		ASSERT( !s_pObj && "Duplicate instance created." );

#if defined( WIN64 )
		s_pObj = static_cast<T*>(this);
#else // #if defined( WIN64 )
		int offset = ( int )( T * )1 - ( int )( CSingleton < T > * )( T * )1;
		s_pObj = ( T * )( ( int )this + offset );
#endif // #if defined( WIN64 )
#pragma warning( default:4311 4312 )
	}
	virtual ~CSingleton()
	{
		ASSERT( s_pObj );
		s_pObj = NULL;
	}

protected:
	static T* s_pObj;

public:
	static T& GetInstance()
	{
		ASSERT( s_pObj );
		return ( *s_pObj );
	}
	static T *GetInstancePtr()
	{
		return s_pObj;
	}
	static bool CreateInstance()
	{
		ASSERT( !s_pObj );
		T *pTemp = new T;
		ASSERT( pTemp );
		return true;
	}
	static void DestroyInstance()
	{
		ASSERT( s_pObj );
		delete s_pObj;
		s_pObj = NULL;
	}
	static bool IsActive()
	{
		return ( s_pObj ) ? true : false;
	}
};

template < class T > T *CSingleton < T >::s_pObj = 0;


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : DECLARE_SINGLETON_CLASS
//*---------------------------------------------------------------
// DESC : Singleton macro function
// PRGM : B4nFter
// P.S.>
//		- Method 2: Macro function
//*---------------------------------------------------------------
#define DECLARE_SINGLETON_CLASS(pCLASS)								\
private:															\
	static pCLASS	m_Singleton;									\
public:																\
	static pCLASS&	GetInstance();									\
	static pCLASS*	GetInstancePtr();

#define DEFINE_SINGLETON_CLASS(pCLASS)								\
	pCLASS pCLASS::m_Singleton;										\
	pCLASS&	pCLASS::GetInstance()		{ return m_Singleton; }		\
	pCLASS*	pCLASS::GetInstancePtr()	{ return &m_Singleton; }

// Implemented out of line to prevent C4744 warning with /GL in _tmain()
/*
#define DECLARE_SINGLETON_CLASS(pCLASS)								\
private:															\
	static pCLASS	m_Singleton;									\
public:																\
	static pCLASS&	GetInstance()		{ return m_Singleton; }		\
	static pCLASS*	GetInstancePtr()	{ return &m_Singleton; }

#define DEFINE_SINGLETON_CLASS(pCLASS)								\
	pCLASS pCLASS::m_Singleton;
*/

