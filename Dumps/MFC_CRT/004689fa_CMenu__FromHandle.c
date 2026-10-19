// Address: 0x004689fa
// Name: CMenu::FromHandle
// Category: MFC_CRT


/* Library Function - Single Match
    public: static class CMenu * __stdcall CMenu::FromHandle(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

CMenu * CMenu::FromHandle(HMENU__ *param_1)

{
  CHandleMap *this;
  CObject *pCVar1;
  
  this = afxMapHMENU(1);
  pCVar1 = CHandleMap::FromHandle(this,param_1);
  return (CMenu *)pCVar1;
}

