// Address: 0x00473f94
// Name: FUN_00473f94
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_00473f94(void *this,void *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  CMapPtrToPtr *local_1c;
  void *local_18;
  void *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x473fa0;
  if ((~(byte)*(undefined4 *)((int)this + 0x18) & 1) == 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      local_1c = FUN_00452728(0x14);
      local_8 = 1;
      if (local_1c == (CMapPtrToPtr *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = (void *)FUN_0047459f((undefined4 *)local_1c);
      }
      local_8 = 0xffffffff;
      *(void **)((int)this + 0x38) = pvVar1;
      FUN_00471456(pvVar1,1,*(int *)((int)this + 0x40));
      if (*(int *)(*(int *)((int)this + 0x38) + 8) < 1) goto LAB_00474056;
      **(undefined4 **)(*(int *)((int)this + 0x38) + 4) = 0;
      *(undefined4 *)((int)this + 0x34) = 1;
      local_14[0] = (void *)0x0;
      FUN_00473efa(this,local_14);
      local_1c = (CMapPtrToPtr *)0x0;
      FUN_00473e2b(local_14[0],0,&local_1c,1);
    }
    if (param_1 == (void *)0x0) {
      return;
    }
    CArchive::CheckCount(this);
    FUN_004745c6(*(void **)((int)this + 0x38),*(int *)((int)this + 0x34),param_1,1);
    local_18 = (void *)0x0;
    CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)((int)this + 0x3c),&DAT_00000001,&local_18);
    if (local_18 == (void *)0x0) {
LAB_00474056:
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    param_1 = (void *)0x2;
    FUN_00473e2b(local_18,*(int *)((int)this + 0x34),&param_1,1);
  }
  else {
    if (*(int *)((int)this + 0x38) == 0) {
      local_1c = FUN_00452728(0x1c);
      local_8 = 0;
      if (local_1c == (CMapPtrToPtr *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        pvVar1 = (void *)CMapPtrToPtr::CMapPtrToPtr(local_1c,*(int *)((int)this + 0x40));
      }
      local_8 = 0xffffffff;
      *(void **)((int)this + 0x38) = pvVar1;
      FUN_00472a93(pvVar1,*(uint *)((int)this + 0x44),1);
      ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)((int)this + 0x38),(void *)0x0);
      *ppvVar2 = (void *)0x0;
      *(undefined4 *)((int)this + 0x34) = 1;
    }
    if (param_1 == (void *)0x0) {
      return;
    }
    CArchive::CheckCount(this);
    ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)((int)this + 0x38),param_1);
    *ppvVar2 = *(void **)((int)this + 0x34);
  }
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  return;
}

