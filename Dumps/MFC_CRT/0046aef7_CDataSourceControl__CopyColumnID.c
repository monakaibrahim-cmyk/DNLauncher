// Address: 0x0046aef7
// Name: CDataSourceControl::CopyColumnID
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CDataSourceControl::CopyColumnID(struct tagDBCOLUMNID *,struct
   tagDBCOLUMNID const *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CDataSourceControl::CopyColumnID
          (CDataSourceControl *this,tagDBCOLUMNID *param_1,tagDBCOLUMNID *param_2)

{
  int iVar1;
  wchar_t *_Dst;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      return 1;
    }
    if (iVar1 != 2) {
      return 1;
    }
  }
  iVar1 = FUN_0047b6a4(*(short **)(param_2 + 0x14));
  _Dst = ATL::AtlCoTaskMemCAlloc(2,iVar1 + 1U);
  *(wchar_t **)(param_1 + 0x14) = _Dst;
  if (_Dst != (wchar_t *)0x0) {
    _wcscpy_s(_Dst,iVar1 + 1U,*(wchar_t **)(param_2 + 0x14));
    return 1;
  }
  return 0;
}

