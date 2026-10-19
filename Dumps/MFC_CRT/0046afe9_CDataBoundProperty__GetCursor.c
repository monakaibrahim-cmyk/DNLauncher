// Address: 0x0046afe9
// Name: CDataBoundProperty::GetCursor
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CDataBoundProperty::GetCursor(void)
   
   Library: Visual Studio 2005 Release */

IUnknown * __thiscall CDataBoundProperty::GetCursor(CDataBoundProperty *this)

{
  IUnknown *pIVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    return (IUnknown *)0x0;
  }
  (**(code **)(**(int **)(this + 0xc) + 0xb4))();
  (**(code **)(**(int **)(*(int *)(this + 0xc) + 0x90) + 4))(this,1);
                    /* WARNING: Could not recover jumptable at 0x0046b01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IUnknown *)(**(code **)**(undefined4 **)(*(int *)(this + 0xc) + 0x90))();
  return pIVar1;
}

