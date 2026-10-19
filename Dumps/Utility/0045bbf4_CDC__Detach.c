// Address: 0x0045bbf4
// Name: CDC::Detach
// Category: Utility


/* Library Function - Single Match
    public: struct HDC__ * __thiscall CDC::Detach(void)
   
   Library: Visual Studio 2005 Release */

HDC__ * __thiscall CDC::Detach(CDC *this)

{
  HDC__ *pHVar1;
  CHandleMap *pCVar2;
  
  pHVar1 = *(HDC__ **)(this + 4);
  if (pHVar1 != (HDC__ *)0x0) {
    pCVar2 = afxMapHDC(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(this + 4));
    }
  }
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)(this + 4) = 0;
  return pHVar1;
}

