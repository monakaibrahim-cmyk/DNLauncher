// Address: 0x0048e9e1
// Name: ____lc_codepage_func
// Category: MFC_CRT


/* Library Function - Single Match
    ____lc_codepage_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_004c44f8) && ((p_Var1->_ownlocale & DAT_004c4414) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}

