// Address: 0x00460068
// Name: ATL::CFixedStringMgr::Free
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall ATL::CFixedStringMgr::Free(struct ATL::CStringData *)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CFixedStringMgr::Free(CFixedStringMgr *this,CStringData *param_1)

{
  if (param_1 != *(CStringData **)(this + 8)) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 4);
    (**(code **)(**(int **)(this + 4) + 4))(param_1);
  }
  *(undefined4 *)(*(int *)(this + 8) + 0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(undefined2 *)(*(int *)(this + 8) + 0x10) = 0;
  return;
}

