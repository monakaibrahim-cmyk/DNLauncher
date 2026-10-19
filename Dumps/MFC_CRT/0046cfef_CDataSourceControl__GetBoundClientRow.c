// Address: 0x0046cfef
// Name: CDataSourceControl::GetBoundClientRow
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall CDataSourceControl::GetBoundClientRow(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CDataSourceControl::GetBoundClientRow(CDataSourceControl *this)

{
  CRowset<ATL::CAccessorBase> *this_00;
  long lVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(this + 0x48) == 0) {
    if (*(int *)(this + 0x38) != 0) {
      local_14 = *(undefined4 *)(this + 0x40);
      local_10 = 0;
      local_c = 0;
      local_1c = 1;
      local_18 = 0;
      lVar1 = (**(code **)(**(int **)(this + 8) + 0x20))
                        (*(int **)(this + 8),1,&DAT_004abd6c,0,0,&local_1c);
      return lVar1;
    }
  }
  else {
    this_00 = *(CRowset<ATL::CAccessorBase> **)(this + 0x50);
    if ((this_00 != (CRowset<ATL::CAccessorBase> *)0x0) && (*(int *)(this_00 + 0xc) != 0)) {
      lVar1 = ATL::CRowset<ATL::CAccessorBase>::GetData(this_00);
      return lVar1;
    }
  }
  return 0;
}

