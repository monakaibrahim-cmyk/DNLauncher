// Address: 0x0045bbb3
// Name: CDC::FromHandle
// Category: Utility


/* Library Function - Single Match
    public: static class CDC * __stdcall CDC::FromHandle(struct HDC__ *)
   
   Library: Visual Studio 2005 Release */

CDC * CDC::FromHandle(HDC__ *param_1)

{
  CHandleMap *this;
  CObject *pCVar1;
  
  this = afxMapHDC(1);
  pCVar1 = CHandleMap::FromHandle(this,param_1);
  return (CDC *)pCVar1;
}

