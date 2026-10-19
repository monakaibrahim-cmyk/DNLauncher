// Address: 0x0049599c
// Name: ATL::CComCriticalSection::Init
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: long __thiscall ATL::CComCriticalSection::Init(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall ATL::CComCriticalSection::Init(CComCriticalSection *this)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  return 0;
}

