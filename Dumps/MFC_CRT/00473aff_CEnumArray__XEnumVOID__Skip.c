// Address: 0x00473aff
// Name: CEnumArray::XEnumVOID::Skip
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CEnumArray::XEnumVOID::Skip(unsigned long)
   
   Library: Visual Studio 2005 Release */

long CEnumArray::XEnumVOID::Skip(ulong param_1)

{
  int iVar1;
  int *piVar2;
  ulong in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_20 [4];
  int local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x473b0b;
  piVar2 = (int *)(param_1 - 0x38);
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_20,*(AFX_MODULE_STATE **)(param_1 - 0x1c));
  local_8 = 1;
  for (param_1 = in_stack_00000008; param_1 != 0; param_1 = param_1 - 1) {
    iVar1 = (**(code **)(*piVar2 + 0x54))();
    if (iVar1 == 0) break;
  }
  local_8 = 0xffffffff;
  if (local_1c != 0) {
    FUN_00453641();
  }
  return (uint)(param_1 != 0);
}

