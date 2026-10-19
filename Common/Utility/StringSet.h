/*//===============================================================

	<< STRING SET >>

	FILE : STRINGSET.H, STRINGSET.CPP
	DESC : String data class (dynamic)
	INIT BUILT DATE : 2006. 10. 17
	LAST BUILT DATE : 2007. 11. 29

	P.S.> 
		- GetA / GetW return heap-allocated strings; caller must free them with ::free() when non-NULL

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include <WINDOWS.H>


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

#define	DF_DEFAULT_NEWLINE_TOKEN_CHAR		_T('\n')
#define	DF_DEFAULT_NEWLINE_TOKEN_STRING		_T("\n")
#define	DF_MAX_FORMAT_TEMPBUFFER_SIZE		(2048)


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : STRUCT
// NAME : STRINGHEADER
//*---------------------------------------------------------------
// DESC : String data header info structure
// PRGM : B4nFter
//*---------------------------------------------------------------
typedef struct
{
	INT	m_iSize;		// In TCHAR units, not bytes
	INT m_iLinePtr;		// In TCHAR units, not bytes
} STRINGHEADER, *LPSTRINGHEADER;


//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CStringSet
//*---------------------------------------------------------------
// DESC : String data class (dynamic)
// PRGM : B4nFter
//*---------------------------------------------------------------
class CStringSet
{
private:
	LPTSTR m_lpszStringBuffer;

public:
	CStringSet();
	CStringSet(LPCTSTR pString);
	CStringSet(const CStringSet& pString);
	CStringSet(const CStringSet* pString);
	~CStringSet();

	BOOL IsNull() const;
	BOOL IsEmpty() const;
	VOID Empty();

	LPSTRINGHEADER GetHeader() const;
	INT GetLength() const;
	INT GetSize() const;

	INT GetLinePtr() const;
	VOID SetLinePtr(INT iLinePtr);

	LPCTSTR Get() const;
	LPCSTR GetA() const;
	LPCWSTR GetW() const;
	LPCTSTR Get(INT nStart) const;
	LPCSTR GetA(INT nStart) const;
	LPCWSTR GetW(INT nStart) const;
	CStringSet GetLine();

	VOID Reset();
	VOID ResetLinePtr();

	TCHAR GetAt(INT nIndex) const;
	VOID SetAt(INT nIndex, TCHAR cChar);
	TCHAR operator[](INT nIndex) const;

	CStringSet& Set(LPCTSTR pString);
	CStringSet& Set(CStringSet& pString);
	CStringSet& Set(CStringSet* pString);
	CStringSet& Append(LPCTSTR pString);
	CStringSet& Append(CStringSet& pString);
	CStringSet& Append(CStringSet* pString);
	operator LPCTSTR() const;

	// Assignment operators
	CStringSet& operator=(LPCTSTR pString);
	CStringSet& operator=(CStringSet& pString);
	CStringSet& operator=(CStringSet* pString);
	CStringSet& operator+=(LPCTSTR pString);
	CStringSet& operator+=(CStringSet& pString);
	CStringSet& operator+=(CStringSet* pString);

	// Comparison operators (implemented directly without std::rel_ops)
	bool operator==(LPCTSTR pString) const;
	bool operator==(const CStringSet& pString) const;
	bool operator==(const CStringSet* pString) const;
	bool operator!=(LPCTSTR pString) const;
	bool operator!=(const CStringSet& pString) const;
	bool operator!=(const CStringSet* pString) const;
	bool operator<(LPCTSTR pString) const;
	bool operator<(const CStringSet& pString) const;
	bool operator<(const CStringSet* pString) const;
	bool operator>(LPCTSTR pString) const;
	bool operator>(const CStringSet& pString) const;
	bool operator>(const CStringSet* pString) const;
	bool operator<=(LPCTSTR pString) const;
	bool operator<=(const CStringSet& pString) const;
	bool operator<=(const CStringSet* pString) const;
	bool operator>=(LPCTSTR pString) const;
	bool operator>=(const CStringSet& pString) const;
	bool operator>=(const CStringSet* pString) const;

	CStringSet Tokenize(LPCTSTR lpszTokens, INT& iStartPtr);
	VOID Format(LPCTSTR lpszFormat, ...);

	CStringSet& TrimLeft();
	CStringSet& TrimRight();
	CStringSet& Trim();

	CStringSet Mid(INT nFirst, INT nCount) const;
	CStringSet Mid(INT nFirst) const;
	CStringSet Left(INT nCount) const;
	CStringSet Right(INT nCount) const;

	BOOL IsAlpha() const;
	BOOL IsNumeric() const;
	BOOL IsNumeric(BOOL &bIsRealNumber) const;
	BOOL IsAlNum() const;
	BOOL IsAlNum(BOOL &bIsRealNumber) const;

	INT Compare(LPCTSTR pString) const;
	INT CompareNoCase(LPCTSTR pString) const;

	VOID MakeUpper();
	VOID MakeLower();
	VOID MakeReverse();

	INT Find(TCHAR cChar) const;
	INT Find(TCHAR cChar, INT nStart) const;
	INT Find(LPCTSTR lpszSub) const;
	INT Find(LPCTSTR lpszSub, INT nStart) const;
	INT FindOneOf(LPCTSTR lpszCharSet) const;
	INT FindOneOf(LPCTSTR lpszCharSet, INT nStart) const;
	INT ReverseFind(TCHAR cChar) const;

//private:
	LPTSTR ReAlloc(INT iNewSize, BOOL bForceTo = FALSE);

};

