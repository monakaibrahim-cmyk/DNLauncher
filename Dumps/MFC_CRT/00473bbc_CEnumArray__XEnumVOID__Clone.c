// Address: 0x00473bbc
// Name: CEnumArray::XEnumVOID::Clone
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CEnumArray::XEnumVOID::Clone(struct IEnumVOID * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CEnumArray::XEnumVOID::Clone(IEnumVOID **param_1)

{
  int iVar1;
  int *in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_20 [4];
  int local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x473bc8;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_20,(AFX_MODULE_STATE *)param_1[-7]);
  *in_stack_00000008 = 0;
  local_8 = 1;
  iVar1 = (**(code **)(param_1[-0xe] + 0x5c))();
  if (param_1[-5] == (IEnumVOID *)0x0) {
    *(IEnumVOID ***)(iVar1 + 0x24) = param_1 + -0xe;
  }
  else {
    *(IEnumVOID **)(iVar1 + 0x24) = param_1[-5];
  }
  InterlockedIncrement((LONG *)(*(int *)(iVar1 + 0x24) + 4));
  *in_stack_00000008 = iVar1 + 0x38;
  local_8 = 0xffffffff;
  if (local_1c != 0) {
    FUN_00453641();
  }
  return 0;
}

