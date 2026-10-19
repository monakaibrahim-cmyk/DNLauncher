// Address: 0x0047443f
// Name: FUN_0047443f
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

CObject * __thiscall FUN_0047443f(void *this,CRuntimeClass *param_1)

{
  uint uVar1;
  CRuntimeClass *this_00;
  int iVar2;
  int *piVar3;
  CObject *pCVar4;
  CArchive *extraout_ECX;
  CArchive *pCVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 local_20;
  uint local_1c;
  CObject *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x47444b;
  pCVar5 = this;
  if ((*(byte *)((int)this + 0x18) & 1) != 0) goto LAB_0047445d;
  psVar7 = *(short **)((int)this + 0x14);
  uVar6 = 4;
LAB_00474458:
  do {
    FUN_0046864a(uVar6,psVar7);
    pCVar5 = extraout_ECX;
LAB_0047445d:
    FUN_0047417c(pCVar5,param_1,&local_20,&local_1c);
    uVar1 = local_1c;
    local_18[0] = (CObject *)0x0;
    if (this_00 != (CRuntimeClass *)0x0) {
      local_8 = 0;
      pCVar4 = CRuntimeClass::CreateObject(this_00);
      local_18[0] = pCVar4;
      if (pCVar4 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529b4();
      }
      CArchive::CheckCount(this);
      FUN_004745c6(*(void **)((int)this + 0x38),*(int *)((int)this + 0x34),pCVar4,1);
      param_1 = (CRuntimeClass *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)((int)this + 0x3c),&DAT_00000001,&param_1);
      if (param_1 != (CRuntimeClass *)0x0) {
        local_1c = 2;
        FUN_00473e2b(param_1,*(int *)((int)this + 0x34),&local_1c,1);
        uVar6 = *(undefined4 *)((int)this + 0x10);
        *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
        *(undefined4 *)((int)this + 0x10) = local_20;
        (**(code **)(*(int *)pCVar4 + 8))(this);
        *(undefined4 *)((int)this + 0x10) = uVar6;
        return pCVar4;
      }
LAB_004744ab:
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    if (*(int *)(*(int *)((int)this + 0x38) + 8) - 1U < local_1c) {
LAB_00474488:
      psVar7 = *(short **)((int)this + 0x14);
      uVar6 = 5;
      goto LAB_00474458;
    }
    local_18[0] = (CObject *)0x0;
    iVar2 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)((int)this + 0x3c),&DAT_00000001,local_18);
    if (iVar2 != 0) {
      if (local_18[0] == (CObject *)0x0) goto LAB_004744ab;
      if ((uVar1 <= *(int *)(local_18[0] + 8) - 1U) &&
         (piVar3 = (int *)FUN_004609cc(local_18[0],uVar1), *piVar3 == 1)) goto LAB_00474488;
    }
    pCVar4 = (CObject *)FUN_0047166e(*(void **)((int)this + 0x38),uVar1);
    if (pCVar4 == (CObject *)0x0) {
      return (CObject *)0x0;
    }
    if (param_1 == (CRuntimeClass *)0x0) {
      return pCVar4;
    }
    iVar2 = CObject::IsKindOf(pCVar4,param_1);
    if (iVar2 != 0) {
      return pCVar4;
    }
    psVar7 = *(short **)((int)this + 0x14);
    uVar6 = 6;
  } while( true );
}

