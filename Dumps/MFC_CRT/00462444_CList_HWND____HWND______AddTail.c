// Address: 0x00462444
// Name: CList<HWND__*,HWND__*>::AddTail
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<struct HWND__ *,struct HWND__ *>::AddTail(struct
   HWND__ *)
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall
CList<HWND__*,HWND__*>::AddTail(CList<HWND__*,HWND__*> *this,HWND__ *param_1)

{
  CNode *pCVar1;
  
  pCVar1 = CList<IControlSiteFactory*,IControlSiteFactory*>::NewNode
                     ((CList<IControlSiteFactory*,IControlSiteFactory*> *)this,*(CNode **)(this + 8)
                      ,(CNode *)0x0);
  *(HWND__ **)(pCVar1 + 8) = param_1;
  if (*(undefined4 **)(this + 8) == (undefined4 *)0x0) {
    *(CNode **)(this + 4) = pCVar1;
  }
  else {
    **(undefined4 **)(this + 8) = pCVar1;
  }
  *(CNode **)(this + 8) = pCVar1;
  return (__POSITION *)pCVar1;
}

