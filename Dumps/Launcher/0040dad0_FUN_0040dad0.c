// Address: 0x0040dad0
// Name: FUN_0040dad0
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x0040db30) */
/* WARNING: Removing unreachable block (ram,0x0040db3d) */

int * __thiscall FUN_0040dad0(void *this,int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    iVar1 = (**(code **)(*(int *)this + 0xc))(DAT_004c3750 ^ (uint)&stack0xffffffec);
    *param_1 = iVar1 + 0x10;
    uStack_4 = 0;
    FUN_0040fff0(param_1,L"PatchConfig.cfg");
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80004005);
}

