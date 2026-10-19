// Address: 0x0045a8e5
// Name: AfxMessageBox
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxMessageBox(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int AfxMessageBox(uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x45a8f1;
  piVar1 = (int *)FUN_00453ed1();
  FUN_004031d0(local_14,piVar1);
  local_8 = 0;
  FUN_00402f70(local_14,param_1);
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  iVar2 = AfxMessageBox(local_14[0],param_2,param_3);
  FUN_004031b0((undefined4 *)(local_14[0] + -8));
  return iVar2;
}

