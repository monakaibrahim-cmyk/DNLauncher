// Address: 0x004703c2
// Name: FUN_004703c2
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_004703c2(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_18[0] = 0;
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x128))(this,local_18);
  if ((iVar1 != 0) && (local_18[0] == 0)) {
    pAVar2 = AfxGetModuleState();
    if (*(int *)(pAVar2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    pAVar2 = AfxGetModuleState();
    local_18[0] = (**(code **)(**(int **)(pAVar2 + 0x3c) + 0xc))(this,param_3);
  }
  local_8 = 0xffffffff;
  FUN_00470443();
  return;
}

