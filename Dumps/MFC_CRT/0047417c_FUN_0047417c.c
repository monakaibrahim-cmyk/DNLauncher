// Address: 0x0047417c
// Name: FUN_0047417c
// Category: MFC_CRT


CRuntimeClass * __thiscall
FUN_0047417c(CArchive *param_1,CRuntimeClass *param_2,undefined4 *param_3,uint *param_4)

{
  undefined1 *puVar1;
  CRuntimeClass *this;
  void **ppvVar2;
  int *piVar3;
  int iVar4;
  CArchive *extraout_ECX;
  CArchive *this_00;
  CRuntimeClass *unaff_EBX;
  uint uVar5;
  undefined4 uVar6;
  short *psVar7;
  void *local_14;
  uint local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  this_00 = param_1;
  if (((byte)param_1[0x18] & 1) != 0) goto LAB_00474197;
  psVar7 = *(short **)(param_1 + 0x14);
  uVar6 = 1;
LAB_00474192:
  do {
    while( true ) {
      FUN_0046864a(uVar6,psVar7);
      this_00 = extraout_ECX;
LAB_00474197:
      if ((param_2 != (CRuntimeClass *)0x0) && (*(int *)(param_2 + 8) == 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_004529ce();
      }
      FUN_00473f94(this_00,(void *)0x0);
      CArchive::operator>>(param_1,(ushort *)&local_8);
      if ((short)local_8 == 0x7fff) {
        CArchive::operator>>(param_1,&local_10);
      }
      else {
        local_10 = ((uint)local_8 & 0x8000) << 0x10 | (uint)local_8 & 0x7fff;
      }
      if ((local_10 & 0x80000000) != 0) break;
      if (param_4 != (uint *)0x0) {
        *param_4 = local_10;
        return unaff_EBX;
      }
LAB_004741ff:
      psVar7 = *(short **)(param_1 + 0x14);
      uVar6 = 5;
    }
    if ((short)local_8 != -1) {
      uVar5 = local_10 & 0x7fffffff;
      if ((uVar5 == 0) || (*(int *)(*(int *)(param_1 + 0x38) + 8) - 1U < uVar5)) goto LAB_004741ff;
      local_8 = (undefined1 *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(param_1 + 0x3c),&DAT_00000001,&local_8);
      if (local_8 == (undefined1 *)0x0) goto LAB_00474297;
      piVar3 = (int *)FUN_004609cc(local_8,uVar5);
      if (*piVar3 == 2) goto LAB_004741ff;
      this = (CRuntimeClass *)FUN_0047166e(*(void **)(param_1 + 0x38),uVar5);
      local_c = (undefined1 *)0x0;
      if ((*(CMapPtrToPtr **)(param_1 + 0x3c) == (CMapPtrToPtr *)0x0) ||
         (iVar4 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(param_1 + 0x3c),this,&local_8),
         local_c = local_8, iVar4 == 0)) {
        local_c = (undefined1 *)(*(uint *)(this + 8) & 0x7fffffff);
      }
LAB_0047432d:
      if ((param_2 == (CRuntimeClass *)0x0) ||
         (iVar4 = CRuntimeClass::IsDerivedFrom(this,param_2), iVar4 != 0)) {
        if (param_3 == (undefined4 *)0x0) {
          *(undefined1 **)(param_1 + 0x10) = local_c;
        }
        else {
          *param_3 = local_c;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = local_10;
        }
        return unaff_EBX;
      }
LAB_00474229:
      psVar7 = *(short **)(param_1 + 0x14);
      uVar6 = 6;
      goto LAB_00474192;
    }
    this = CRuntimeClass::Load(param_1,(uint *)&local_c);
    if (this == (CRuntimeClass *)0x0) goto LAB_00474229;
    if ((undefined1 *)(*(uint *)(this + 8) & 0x7fffffff) == local_c) {
LAB_00474268:
      CArchive::CheckCount(param_1);
      FUN_004745c6(*(void **)(param_1 + 0x38),*(int *)(param_1 + 0x34),this,1);
      local_14 = (void *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(param_1 + 0x3c),&DAT_00000001,&local_14);
      if (local_14 == (void *)0x0) {
LAB_00474297:
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      local_8 = &DAT_00000001;
      FUN_00473e2b(local_14,*(int *)(param_1 + 0x34),&local_8,1);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      goto LAB_0047432d;
    }
    if ((*(uint *)(this + 8) & 0x80000000) != 0) {
      FUN_00473efa(param_1,(undefined4 *)0x0);
      puVar1 = local_c;
      ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(param_1 + 0x3c),this);
      *ppvVar2 = puVar1;
      goto LAB_00474268;
    }
    psVar7 = *(short **)(param_1 + 0x14);
    uVar6 = 7;
  } while( true );
}

