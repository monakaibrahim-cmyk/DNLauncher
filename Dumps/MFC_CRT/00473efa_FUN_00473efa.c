// Address: 0x00473efa
// Name: FUN_00473efa
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_00473efa(void *this,undefined4 *param_1)

{
  CMapPtrToPtr *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *this_00;
  void *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x473f06;
  pCVar1 = *(CMapPtrToPtr **)((int)this + 0x3c);
  this_00 = (void *)0x0;
  local_14[0] = (void *)0x0;
  if (pCVar1 == (CMapPtrToPtr *)0x0) {
    pCVar1 = FUN_00452728(0x1c);
    local_8 = 0;
    if (pCVar1 == (CMapPtrToPtr *)0x0) {
      pCVar1 = (CMapPtrToPtr *)0x0;
    }
    else {
      pCVar1 = (CMapPtrToPtr *)CMapPtrToPtr::CMapPtrToPtr(pCVar1,10);
    }
    local_8 = 0xffffffff;
  }
  iVar2 = CMapPtrToPtr::Lookup(pCVar1,&DAT_00000001,local_14);
  if (iVar2 == 0) {
    puVar3 = FUN_00452728(0x14);
    if (puVar3 != (undefined4 *)0x0) {
      this_00 = (void *)FUN_00473cdb(puVar3);
    }
    FUN_00473cf2(this_00,1,*(int *)((int)this + 0x40));
    ppvVar4 = CMapPtrToPtr::operator[](pCVar1,&DAT_00000001);
    *ppvVar4 = this_00;
    local_14[0] = this_00;
  }
  *(CMapPtrToPtr **)((int)this + 0x3c) = pCVar1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_14[0];
  }
  return;
}

