// Address: 0x00471417
// Name: operator>>
// Category: MFC_CRT


/* Library Function - Single Match
    class CArchive & __stdcall operator>>(class CArchive &,class CObject * &)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CArchive * operator>>(CArchive *param_1,CObject **param_2)

{
  CObject *pCVar1;
  
  pCVar1 = FUN_0047443f(param_1,(CRuntimeClass *)0x0);
  *param_2 = pCVar1;
  return param_1;
}

