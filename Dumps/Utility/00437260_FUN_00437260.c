// Address: 0x00437260
// Name: FUN_00437260
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00437260(void *this,int *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar8;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  size_t sVar9;
  int iVar10;
  void *this_00;
  ulonglong uVar11;
  undefined2 uVar12;
  undefined1 local_2f8 [20];
  undefined1 local_2e4 [32];
  void *local_2c4;
  int *local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  int local_2a8;
  void *local_2a4;
  uint local_2a0;
  size_t local_29c;
  void *local_298;
  char local_291;
  int *local_290;
  void *local_28c;
  undefined1 *puStack_288;
  undefined4 local_284;
  undefined1 *local_280 [33];
  int local_1fc [16];
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined1 *local_1a0;
  int local_194;
  int local_18c;
  uint local_184;
  undefined1 local_170;
  char local_16e;
  undefined4 local_16c;
  undefined1 local_168;
  uint local_164;
  int local_15c;
  uint local_158;
  int local_150;
  uint local_148;
  int *local_144;
  uint local_140;
  char local_b5;
  ushort local_b4;
  ushort local_b2;
  uint local_8;
  
  local_284 = 0xffffffff;
  puStack_288 = &LAB_00495fd8;
  local_28c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)local_280;
  ExceptionList = &local_28c;
  local_2bc = param_1;
  local_298 = this;
  local_8 = uVar3;
  local_291 = FUN_004370b0(this,param_1);
  uVar12 = (undefined2)uVar3;
  local_2a4 = this;
  if (this != (void *)0x0) {
    local_2a8 = FUN_00434b20(this,0);
  }
  local_1bc = (int)this + 0x44;
  local_2b4 = 0;
  local_2b8 = 0;
  local_2ac = 0;
  local_2b0 = 0;
  local_1b8 = FUN_0043bb00(local_280);
  local_280[0] = &LAB_00437040;
  iVar4 = __setjmp3(local_1fc,3,&LAB_00479a74,local_284);
  if (iVar4 != 0) {
    thunk_FUN_0043bb90((int)&local_1b8);
    ExceptionList = local_28c;
    __security_check_cookie(local_8 ^ (uint)local_280);
    return;
  }
  FUN_0043ab30(&local_1b8,0x3e,0x1b0);
  FUN_00437180(local_2f8,local_2bc);
  local_1a0 = local_2e4;
  local_284 = 0;
  FUN_0043afb0(&local_1b8,'\x01');
  this_00 = local_298;
  uVar5 = FUN_00434ff0(3);
  if ((char)uVar5 < '\0') {
    local_18c = 1;
  }
  uVar3 = FUN_00434ff0(3);
  if ((uVar3 & 0x100) != 0) {
    local_16e = '\x01';
    uVar2 = FUN_00434f80((int)this_00);
    local_164 = (uint)(byte)uVar2;
  }
  uVar3 = FUN_00434ff0(3);
  if ((uVar3 & 0x200) != 0) {
    local_16c = *(undefined4 *)((int)this_00 + 0x688);
  }
  uVar3 = FUN_00434ff0(3);
  if ((uVar3 & 0x400) != 0) {
    local_168 = 0;
  }
  uVar3 = FUN_00434ff0(3);
  if ((uVar3 & 0x800) != 0) {
    local_170 = 0;
  }
  bVar1 = FUN_00434fc0((int)this_00);
  local_184 = (uint)bVar1;
  if (*(int *)((int)this_00 + 0x148) == -1) {
    FUN_0043b300(&local_1b8);
    *(int *)((int)this_00 + 0xc) = local_15c;
    *(uint *)((int)this_00 + 0x10) = local_158;
    *(undefined4 *)((int)this_00 + 0x40) = 3;
    thunk_FUN_0043bb90((int)&local_1b8);
    local_284 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_2c4);
  }
  FUN_0043b1a0(&local_1b8);
  FUN_00434c60(this_00,local_15c,local_158,local_150 * 8,3);
  if (*(int *)((int)this_00 + 4) != 0) {
    if (local_291 == '\0') {
      if (local_b5 == '\0') {
        if ((local_b2 != 0) && (local_b4 != 0)) {
          FUN_00434e50((int)this_00);
          local_290 = (int *)(uint)local_b4;
          uVar11 = FUN_00478f90(extraout_ECX_03,(uint)local_b2);
          FUN_00434ec0(this_00,(int)uVar11);
        }
      }
      else if (local_b5 == '\x02') {
        local_290 = (int *)(uint)local_b4;
        FUN_00479040((double)(int)local_290 * _DAT_0049ca30 + _DAT_004b4728,uVar12);
        uVar11 = FUN_00478f90(extraout_ECX_01,extraout_EDX_01);
        FUN_00434e60(this_00,(int)uVar11);
        local_290 = (int *)(uint)local_b2;
        FUN_00479040((double)(int)local_290 * _DAT_0049ca30 + _DAT_004b4728,uVar12);
        uVar11 = FUN_00478f90(extraout_ECX_02,extraout_EDX_02);
        FUN_00434ec0(this_00,(int)uVar11);
      }
      else {
        FUN_00434e60(this_00,(uint)local_b4);
        FUN_00434ec0(this_00,(uint)local_b2);
      }
    }
    else {
      uVar5 = extraout_ECX;
      uVar8 = extraout_EDX;
      if ((*(float *)((int)this_00 + 0x274) != 0.0) && (*(float *)((int)this_00 + 0x27c) != 0.0)) {
        uVar11 = FUN_00478f90(extraout_ECX,extraout_EDX);
        FUN_00434e60(this_00,(int)uVar11);
        uVar5 = extraout_ECX_00;
        uVar8 = extraout_EDX_00;
      }
      if ((*(float *)((int)this_00 + 0x278) != 0.0) && (*(float *)((int)this_00 + 0x27c) != 0.0)) {
        uVar11 = FUN_00478f90(uVar5,uVar8);
        FUN_00434ec0(this_00,(int)uVar11);
      }
    }
    if (local_18c == 1) {
      FUN_004364c0((int)this_00);
      *(undefined4 *)((int)this_00 + 0x28) = 0x100;
    }
    else if (local_16e == '\0') {
      *(undefined4 *)((int)this_00 + 0x28) = 0;
    }
    else {
      FUN_004363e0(this_00,local_148,*local_144,local_144[1],local_144[2]);
      *(uint *)((int)this_00 + 0x28) = local_148;
    }
    sVar9 = local_150 * local_15c;
    local_29c = sVar9;
    piVar6 = (int *)(**(code **)(local_1b4 + 8))(&local_1b8,1,sVar9);
    local_290 = piVar6;
    FUN_004365e0(&local_2b8);
    if (local_140 < local_158) {
      do {
        if (*(int *)((int)this_00 + 0x148) != 0) goto LAB_0043748d;
        FUN_0043b100(&local_1b8,piVar6,1);
        if ((local_194 == 4) && (local_16e == '\0')) {
          iVar4 = *piVar6;
          iVar7 = 0;
          iVar10 = 0;
          piVar6 = local_290;
          sVar9 = local_29c;
          if (0 < *(int *)((int)this_00 + 0x30)) {
            do {
              if ((int)local_29c <= iVar7) break;
              local_2a0 = (uint)*(byte *)(iVar7 + 3 + iVar4);
              *(char *)(local_2a8 + iVar10) =
                   (char)((*(byte *)(iVar7 + 2 + iVar4) * local_2a0) / 0xff);
              *(char *)(local_2a8 + 1 + iVar10) =
                   (char)((*(byte *)(iVar7 + 1 + iVar4) * local_2a0) / 0xff);
              *(char *)(local_2a8 + 2 + iVar10) =
                   (char)((*(byte *)(iVar7 + iVar4) * local_2a0) / 0xff);
              iVar10 = iVar10 + 3;
              iVar7 = iVar7 + 4;
              this_00 = local_298;
            } while (iVar10 < *(int *)((int)local_298 + 0x30));
          }
        }
        else {
          FUN_00436630(&local_2b8,(void *)*piVar6,sVar9);
        }
        local_2b4 = local_2b4 + -1;
        if (-1 < local_2b4) {
          iVar4 = FUN_00434f30((int)local_2a4);
          local_2a8 = local_2a8 - iVar4;
        }
      } while (local_140 < local_158);
    }
    FUN_0043aee0(&local_1b8);
    if ((local_194 == 3) && (local_16e == '\0')) {
      iVar4 = FUN_00434b20(this_00,0);
      iVar7 = 0;
      if (0 < *(int *)((int)this_00 + 0x10)) {
        do {
          if (*(int *)((int)this_00 + 0x148) != 0) goto LAB_0043748d;
          FUN_00436380(this_00,iVar4,*(int *)((int)this_00 + 0xc) * 3);
          iVar4 = iVar4 + *(int *)((int)this_00 + 0x30);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((int)this_00 + 0x10));
      }
    }
    thunk_FUN_0043bb90((int)&local_1b8);
    local_284 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_2c4);
  }
LAB_0043748d:
                    /* WARNING: Subroutine does not return */
  FID_conflict____longjmp_internal(local_1fc,1);
}

