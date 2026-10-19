/*//===============================================================

	<< MEMORY-SHUFFLE DATA TYPE >>

	PRGM : B4nFter

	FILE : MEMORYSHUFFLEDATATYPE.H, MEMORYSHUFFLEDATATYPE.INL
	DESC : 
	INIT BUILT DATE : 2009. 09. 12
	LAST BUILT DATE : 2010. 07. 21

	P.S.>
		- Review usage documentation before using this memory-shuffle class

		- Template specialization is provided to prevent unsupported operation compiler errors

			SW_MSDT_NOTINCLUDE_COMPILESAFETY

		- If using compiler supporting C++ export, separate .h and .inl into .h and .cpp

		- Intentionally triggers compile error on unsupported types (pointers, references)

		- If using compiler supporting C++ export, separate .h and .inl into .h and .cpp

		- Error checking features available via preprocessor definitions

			SW_MSDT_ERRORCHECK_ORIGINVALUE
				: Maintains replica variable of TDATA type for verification
				: Verifies replica before operations

		- Define macro prior to inclusion to enable assert() on exceptions

			SW_MSDT_ASSERT

		- Debug options for verifying MSDT internal operations; disable in production

			SW_MSDT_TEST

	Copyright (c) 2002~2010 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

enum EF_MSDT_ALLOCTICKTERM						// Memory allocation interval
{
	EV_MSDT_ALTT_VERYFAST		= (1*1000),		// Maximum security
	EV_MSDT_ALTT_FAST			= (5*1000),		// High security
	EV_MSDT_ALTT_MEDIUM			= (10*1000),	// Medium security (default)
	EV_MSDT_ALTT_SLOW			= (30*1000),	// High performance
	EV_MSDT_ALTT_VERYSLOW		= (60*1000),	// Maximum performance
};

enum EF_MSDT_EXCEPTIONCODE						// Exception codes
{
	EV_MSDT_ECCD_NONE			= 0xE0000000,	// N/A
	EV_MSDT_ECCD_ALLOCFAIL		= 0xE0010000,	// Memory allocation failed
};

#if defined(PRE_MEMORY_SHUFFLE)
#define MSDT_DECL(pTYPE)			CMemoryShuffleDataType<pTYPE>	// USING MSDT
#define MSDT_SETTERM(pMSDT,pTIME)	pMSDT.SetAllocTickTerm(pTIME)	// USING MSDT
#else	// _DEBUG
#define MSDT_DECL(pTYPE)			pTYPE							// NOT-USING MSDT
#define MSDT_SETTERM(pMSDT,pTIME)									// NOT-USING MSDT
#endif	// _DEBUG

#if defined(SW_MSDT_ASSERT)
#define MSDT_ASSERT(pCOND)		if (!(pCOND)) { DebugBreak(); }
#define MSDT_RETURN(pRETV)		DebugBreak(); return(pRETV);
#define MSDT_RETURN_NONE		DebugBreak(); return;
#else	// #if defined(SW_MSDT_ASSERT)
#define MSDT_ASSERT(pCOND)		
#define MSDT_RETURN(pRETV)		return(pRETV);
#define MSDT_RETURN_NONE		return;
#endif	// #if defined(SW_MSDT_ASSERT)


///////////////////////////////////////////////////////////////////
//	FORWARD DECLARATION
///////////////////////////////////////////////////////////////////

template<typename TDATA>
class CMemoryShuffleBaseUnit;

template<typename TDATA>
class CMemoryShuffleAllocator;

template<typename TDATA>
class CMemoryShuffleDataType;


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleBaseUnit
//*---------------------------------------------------------------
// DESC : Memory shuffle base unit class
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleBaseUnit
{

public:
	CMemoryShuffleBaseUnit();
	virtual ~CMemoryShuffleBaseUnit();

	virtual TDATA GetValue() const = 0;
	virtual void SetValue(TDATA pData) = 0;

	unsigned long GetLastTick() const;
	void SetLastTick(unsigned long pLastTick);
		
private:
	mutable unsigned long m_LastTick;

};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleAllocator
//*---------------------------------------------------------------
// DESC : Memory shuffle dynamic allocator class
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleAllocator
{

private:
	mutable CMemoryShuffleBaseUnit<TDATA>* m_Unit;

public:
	friend class CMemoryShuffleDataType<TDATA>;

public:
	CMemoryShuffleAllocator();
	virtual ~CMemoryShuffleAllocator();

	bool IsOpen() const;

	bool Shuffle(CMemoryShuffleBaseUnit<TDATA>*& pUnit) const;

 	CMemoryShuffleBaseUnit<TDATA>* Lock();
 	void Unlock(const CMemoryShuffleBaseUnit<TDATA>* pUnit) const;

	unsigned long GetTickTerm() const;
	void SetTickTerm(unsigned long pTickTerm = EV_MSDT_ALTT_FAST);

#if defined(SW_MSDT_ERRORCHECK_ORIGINVALUE)
	const TDATA GetOriginalValue() const { return m_OriginalValue; }
#endif	// SW_MSDT_ERRORCHECK_ORIGINVALUE

private:
	bool Create();
	bool Create(const TDATA& pData);
	bool Create(const CMemoryShuffleDataType<TDATA>& pMsdt);

	void Release();

private:
	mutable unsigned long m_TickTerm;

public:
	volatile mutable long m_Lock;

	// Verification variable
#if defined(SW_MSDT_ERRORCHECK_ORIGINVALUE)
	TDATA m_OriginalValue;
#endif	// SW_MSDT_ERRORCHECK_ORIGINVALUE

};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleSyncAuto
//*---------------------------------------------------------------
// DESC : Memory shuffle synchronization wrapper class
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TALLOC, typename TUNIT>
class CMemoryShuffleSyncAuto
{
	// Prevent copy and assignment

public:
	CMemoryShuffleSyncAuto(TALLOC* pAlloc);
	~CMemoryShuffleSyncAuto();

	TUNIT* Lock();

private:
	// Prevent copy and assignment
	CMemoryShuffleSyncAuto(const CMemoryShuffleSyncAuto<TALLOC, TUNIT>& pSyncAuto) : m_Alloc(pSyncAuto.m_Alloc)		{ MSDT_ASSERT(0); /* "Can't be Called!" */ }
#pragma warning (disable:4100)
	CMemoryShuffleSyncAuto& operator=(const CMemoryShuffleSyncAuto<TALLOC, TUNIT>& pSyncAuto)						{ MSDT_ASSERT(0); /* "Can't be Called!" */ return(*this); }
#pragma warning (default:4100)

private:
	TALLOC* m_Alloc;
	TUNIT* m_Unit;

};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleDataType
//*---------------------------------------------------------------
// DESC : Memory shuffle data type class
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleDataType
{

public:
	CMemoryShuffleDataType();
	CMemoryShuffleDataType(const TDATA& pData);
	CMemoryShuffleDataType(const CMemoryShuffleDataType<TDATA>& pMsdt);
	virtual ~CMemoryShuffleDataType();

	operator TDATA const ();
// 	operator TDATA* const ();	// not support
// 	operator TDATA& const ();	// not support

	TDATA operator=(const TDATA& pData);
	CMemoryShuffleDataType<TDATA>& operator=(const CMemoryShuffleDataType<TDATA>& pMsdt);

	TDATA operator++();			// Prefix ++
	TDATA operator++(int);		// Postfix ++
	TDATA operator++();			// Prefix ++
	TDATA operator++(int);		// Postfix ++

	TDATA operator+=(const TDATA& pData);
	TDATA operator-=(const TDATA& pData);
	TDATA operator*=(const TDATA& pData);
	TDATA operator/=(const TDATA& pData);
	TDATA operator%=(const TDATA& pData);
	TDATA operator&=(const TDATA& pData);
	TDATA operator|=(const TDATA& pData);
	TDATA operator^=(const TDATA& pData);

	unsigned long GetAllocTickTerm() const;
	void SetAllocTickTerm(unsigned long pTickTerm);

#if defined(SW_MSDT_TEST)
	__forceinline const CMemoryShuffleBaseUnit<TDATA>* GetPtr() const { return(m_Allocator.m_Unit); }		// Debug method
#endif	// SW_MSDT_TEST

private:
	typedef	CMemoryShuffleSyncAuto<CMemoryShuffleAllocator<TDATA>, CMemoryShuffleBaseUnit<TDATA>>	TP_SYNCAUTO;

	CMemoryShuffleAllocator<TDATA>& GetAllocator();

private:
	CMemoryShuffleAllocator<TDATA> m_Allocator;

};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleDataType
//*---------------------------------------------------------------
// DESC : Memory shuffle data type class (pointers prohibited)
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleDataType<TDATA*>
{

public:
	CMemoryShuffleDataType() {
		char aCompileError[-1];		// Compile-time error trigger
	}
};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleDataType
//*---------------------------------------------------------------
// DESC : Memory shuffle data type class (pointers prohibited)
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleDataType<const TDATA*>
{

public:
	CMemoryShuffleDataType() {
		char aCompileError[-1];		// Compile-time error trigger
	}
};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleDataType
//*---------------------------------------------------------------
// DESC : Memory shuffle data type class (references prohibited)
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleDataType<TDATA&>
{

public:
	CMemoryShuffleDataType() {
		char aCompileError[-1];		// Compile-time error trigger
	}
};


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryShuffleDataType
//*---------------------------------------------------------------
// DESC : Memory shuffle data type class (references prohibited)
// PRGM : B4nFter
//*---------------------------------------------------------------
template<typename TDATA>
class CMemoryShuffleDataType<const TDATA&>
{

public:
	CMemoryShuffleDataType() {
		char aCompileError[-1];		// Compile-time error trigger
	}
};


#include "MEMORYSHUFFLEDATATYPE.INL"	// Implementation include

