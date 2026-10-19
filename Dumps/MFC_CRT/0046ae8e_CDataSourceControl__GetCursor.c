// Address: 0x0046ae8e
// Name: CDataSourceControl::GetCursor
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual struct IUnknown * __thiscall CDataSourceControl::GetCursor(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

IUnknown * __thiscall CDataSourceControl::GetCursor(CDataSourceControl *this)

{
  int iVar1;
  CDataSourceControl *local_c;
  CDataSourceControl *local_8;
  
  if (*(uint *)(this + 0x48) != 0) {
    return (IUnknown *)(-(uint)(*(int *)(this + 0x50) != 0) & *(uint *)(this + 0x48));
  }
  local_c = this;
  local_8 = this;
  if (*(int *)(this + 8) == 0) {
    iVar1 = (**(code **)**(undefined4 **)(*(int *)(this + 4) + 0x50))
                      (*(undefined4 **)(*(int *)(this + 4) + 0x50),&DAT_004a3f70,&local_c);
    if (iVar1 < 0) {
      return (IUnknown *)0x0;
    }
    (**(code **)(*(int *)local_c + 0x14))(local_c,&local_8);
    (**(code **)(*(int *)local_c + 8))(local_c);
  }
  else {
    iVar1 = (**(code **)**(undefined4 **)(this + 8))
                      (*(undefined4 **)(this + 8),&DAT_004ab60c,&local_8);
    if (iVar1 < 0) {
      return (IUnknown *)0x0;
    }
  }
  return (IUnknown *)local_8;
}

