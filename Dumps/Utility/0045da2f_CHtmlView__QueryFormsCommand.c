// Address: 0x0045da2f
// Name: CHtmlView::QueryFormsCommand
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: long __thiscall CHtmlView::QueryFormsCommand(unsigned long,int *,int *,int *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
CHtmlView::QueryFormsCommand(CHtmlView *this,ulong param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ulong local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  int *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x45da3b;
  piVar1 = *(int **)(this + 0xec);
  if (piVar1 != (int *)0x0) {
    iVar2 = -0x7fffbffb;
    local_1c = (int *)0x0;
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    (**(code **)(*piVar1 + 0x48))(piVar1,&local_1c);
    CComQIPtr<>(&local_18,local_1c);
    if (local_18 != (int *)0x0) {
      CComQIPtr<>(local_14,local_18);
      local_8._0_1_ = 2;
      if (local_14[0] != (int *)0x0) {
        local_24 = param_1;
        local_20 = 0;
        iVar2 = (**(code **)(*local_14[0] + 0xc))(local_14[0],&DAT_004ab70c,1,&local_24,0);
        if (-1 < iVar2) {
          if (param_2 != (int *)0x0) {
            *param_2 = local_20 & 1;
          }
          if (param_3 != (int *)0x0) {
            *param_3 = local_20 >> 1 & 1;
          }
          if (param_4 != (int *)0x0) {
            *param_4 = local_20 >> 2 & 1;
          }
        }
      }
      local_8._0_1_ = 1;
      if (local_14[0] != (int *)0x0) {
        (**(code **)(*local_14[0] + 8))(local_14[0]);
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(local_18);
    }
    local_8 = 0xffffffff;
    if (local_1c != (int *)0x0) {
      (**(code **)(*local_1c + 8))(local_1c);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

