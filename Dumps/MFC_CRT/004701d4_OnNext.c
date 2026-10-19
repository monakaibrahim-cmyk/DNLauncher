// Address: 0x004701d4
// Name: OnNext
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CEnumConnPoints::OnNext(void *)
    protected: virtual int __thiscall CEnumConnections::OnNext(void *)
    protected: virtual int __thiscall CEnumUnknown::OnNext(void *)
   
   Library: Visual Studio 2005 Release */

bool __thiscall OnNext(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = CEnumArray::OnNext(this,param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1);
  }
  return iVar1 != 0;
}

