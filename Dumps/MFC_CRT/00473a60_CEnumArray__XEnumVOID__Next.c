// Address: 0x00473a60
// Name: CEnumArray::XEnumVOID::Next
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CEnumArray::XEnumVOID::Next(unsigned long,void *,unsigned long *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CEnumArray::XEnumVOID::Next(ulong param_1,void *param_2,ulong *param_3)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  int *in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_20 [4];
  int local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  uStack_4 = 0x10;
  local_8 = 0x473a6c;
  piVar3 = (int *)(param_1 - 0x38);
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_20,*(AFX_MODULE_STATE **)(param_1 - 0x1c));
  if (in_stack_00000010 != (int *)0x0) {
    *in_stack_00000010 = 0;
  }
  local_8 = 1;
  for (param_1 = (ulong)param_2; param_1 != 0; param_1 = param_1 - 1) {
    iVar2 = (**(code **)(*piVar3 + 0x50))(param_3);
    if (iVar2 == 0) break;
    param_3 = (ulong *)((int)param_3 + *(int *)(uVar1 - 0x18));
  }
  if (in_stack_00000010 != (int *)0x0) {
    *in_stack_00000010 = (int)param_2 - param_1;
  }
  local_8 = 0xffffffff;
  if (local_1c != 0) {
    FUN_00453641();
  }
  return (uint)(param_1 != 0);
}

