// Address: 0x0045bbc1
// Name: CDC::Attach
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CDC::Attach(struct HDC__ *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDC::Attach(CDC *this,HDC__ *param_1)

{
  CHandleMap *pCVar1;
  void **ppvVar2;
  
  if (param_1 != (HDC__ *)0x0) {
    *(HDC__ **)(this + 4) = param_1;
    pCVar1 = afxMapHDC(1);
    ppvVar2 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(pCVar1 + 0x1c),*(void **)(this + 4));
    *ppvVar2 = this;
    (**(code **)(*(int *)this + 0xc))(*(undefined4 *)(this + 4));
  }
  return (uint)(param_1 != (HDC__ *)0x0);
}

