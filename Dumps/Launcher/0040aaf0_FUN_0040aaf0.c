// Address: 0x0040aaf0
// Name: FUN_0040aaf0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall FUN_0040aaf0(int param_1)

{
  wchar_t wVar1;
  char cVar2;
  short sVar3;
  UINT UVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  LPWSTR pWVar8;
  int *piVar9;
  wchar_t *pwVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  rsize_t rVar16;
  undefined1 *puVar17;
  uint local_4ec4;
  int local_2eb4 [2];
  undefined1 *local_2eac;
  undefined1 *local_2ea8;
  undefined1 *local_2ea4;
  undefined1 *local_2ea0;
  undefined1 *local_2e9c;
  int local_2e98 [5];
  undefined1 *local_2e84;
  uint local_2e80;
  int local_2e7c;
  uint local_2e78;
  uint local_2e74;
  int local_2e70;
  uint local_2e6c;
  int local_2e68;
  short local_2e64;
  int local_2e60 [9];
  undefined1 local_2e3c [4];
  int *local_2e38;
  int *local_2e34;
  int local_2e30;
  wchar_t local_2e2c;
  undefined1 local_2e2a [2046];
  wchar_t local_262c;
  undefined1 local_262a [2046];
  wchar_t local_1e2c;
  undefined1 local_1e2a [2046];
  wchar_t local_162c;
  undefined1 local_162a [2046];
  wchar_t local_e2c;
  undefined1 local_e2a [2046];
  wchar_t local_62c;
  undefined1 local_62a [518];
  wchar_t local_424;
  undefined1 local_422 [518];
  wchar_t local_21c;
  undefined1 local_21a [518];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00499c17;
  local_10 = ExceptionList;
  local_4ec4 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2e70 = param_1;
  local_14 = local_4ec4;
  FUN_00418fd0(L"Parsing PatchConfigList");
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_0042c2c0(local_2e60);
    local_8 = 0;
    UVar4 = (*(code *)Target_004c4f5c)();
    iVar5 = lstrlenW(L"PatchConfigList.xml");
    if (iVar5 + 1 < 0x40000000) {
      FUN_00410400((LPSTR)&local_4ec4,L"PatchConfigList.xml",(iVar5 + 1) * 2,UVar4);
    }
    pcVar6 = (char *)FUN_0040edd0(".\\%s");
    cVar2 = FUN_0042c490(pcVar6);
    if (cVar2 == '\0') {
      FUN_00418f70(L"%s Files - Parsing Failed.");
      DAT_004cbcd0 = 6;
      local_8 = 0xffffffff;
      FUN_0042c320(local_2e60);
    }
    else {
      local_424 = L'\0';
      _memset(local_422,0,0x206);
      local_62c = L'\0';
      _memset(local_62a,0,0x206);
      local_21c = L'\0';
      _memset(local_21a,0,0x206);
      local_162c = L'\0';
      _memset(local_162a,0,0x7fe);
      local_262c = L'\0';
      _memset(local_262a,0,0x7fe);
      local_1e2c = L'\0';
      _memset(local_1e2a,0,0x7fe);
      local_2e2c = L'\0';
      _memset(local_2e2a,0,0x7fe);
      local_e2c = L'\0';
      _memset(local_e2a,0,0x7fe);
      local_2e74 = 0;
      local_2e6c = 0;
      local_2e78 = 0;
      local_2e38 = (int *)0x0;
      local_2e34 = (int *)0x0;
      local_2e30 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_2e7c = 0;
      uVar7 = FUN_0042c710((int)local_2e60,'\x01');
      if ((char)uVar7 != '\0') {
        uVar7 = FUN_0042c710((int)local_2e60,'\x01');
        cVar2 = (char)uVar7;
        while (cVar2 != '\0') {
          rVar16 = 0x104;
          pWVar8 = FUN_0042c8d0();
          _wcsncpy_s(&local_424,0x104,pWVar8,rVar16);
          FUN_0040b310(local_2e98);
          pwVar10 = &local_424;
          local_8 = CONCAT31(local_8._1_3_,2);
          do {
            wVar1 = *pwVar10;
            pwVar10 = pwVar10 + 1;
          } while (wVar1 != L'\0');
          FUN_00403520(local_2e98,&local_424,(int)pwVar10 - (int)local_422 >> 1);
          uVar7 = FUN_0042c710((int)local_2e60,'\x01');
          cVar2 = (char)uVar7;
          while (cVar2 != '\0') {
            rVar16 = 0x104;
            pWVar8 = FUN_0042c8d0();
            _wcsncpy_s(&local_62c,0x104,pWVar8,rVar16);
            (*(code *)Target_004c4f5c)();
            pWVar8 = FUN_0042c8d0();
            if (pWVar8 != (LPWSTR)0x0) {
              pWVar8 = FUN_0042c8d0();
              local_2e74 = thunk_FUN_0047642d(pWVar8);
              local_2e74 = local_2e74 & 0xffff;
            }
            pWVar8 = FUN_0042c8d0();
            if (pWVar8 != (LPWSTR)0x0) {
              pWVar8 = FUN_0042c8d0();
              local_2e6c = thunk_FUN_0047642d(pWVar8);
              local_2e6c = local_2e6c & 0xffff;
            }
            pWVar8 = FUN_0042c8d0();
            if (pWVar8 != (LPWSTR)0x0) {
              pWVar8 = FUN_0042c8d0();
              local_2e78 = thunk_FUN_0047642d(pWVar8);
              local_2e78 = local_2e78 & 0xffff;
            }
            uVar7 = FUN_0042c710((int)local_2e60,'\0');
            if ((char)uVar7 != '\0') {
              rVar16 = 0x400;
              pWVar8 = FUN_0042c8d0();
              _wcsncpy_s(&local_162c,0x400,pWVar8,rVar16);
            }
            uVar7 = FUN_0042c710((int)local_2e60,'\0');
            if ((char)uVar7 != '\0') {
              rVar16 = 0x400;
              pWVar8 = FUN_0042c8d0();
              _wcsncpy_s(&local_262c,0x400,pWVar8,rVar16);
            }
            uVar7 = FUN_0042c710((int)local_2e60,'\0');
            if ((char)uVar7 != '\0') {
              rVar16 = 0x400;
              pWVar8 = FUN_0042c8d0();
              _wcsncpy_s(&local_2e2c,0x400,pWVar8,rVar16);
            }
            uVar7 = FUN_0042c710((int)local_2e60,'\0');
            if ((char)uVar7 != '\0') {
              rVar16 = 0x400;
              pWVar8 = FUN_0042c8d0();
              _wcsncpy_s(&local_1e2c,0x400,pWVar8,rVar16);
            }
            uVar7 = FUN_0042c710((int)local_2e60,'\0');
            if ((char)uVar7 != '\0') {
              rVar16 = 0x400;
              pWVar8 = FUN_0042c8d0();
              _wcsncpy_s(&local_e2c,0x400,pWVar8,rVar16);
            }
            uVar7 = FUN_0042c710((int)local_2e60,'\0');
            cVar2 = (char)uVar7;
            iVar5 = extraout_ECX;
            while (cVar2 != '\0') {
              rVar16 = 0x104;
              pWVar8 = FUN_0042c8d0();
              _wcsncpy_s(&local_21c,0x104,pWVar8,rVar16);
              pWVar8 = FUN_0042c8d0();
              sVar3 = thunk_FUN_0047642d(pWVar8);
              if ((local_21c != L'\0') && (sVar3 != 0)) {
                piVar9 = (int *)FUN_00453ed1();
                if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00403200((undefined4 *)0x80004005);
                }
                local_2e68 = (**(code **)(*piVar9 + 0xc))();
                local_2e68 = local_2e68 + 0x10;
                pwVar10 = &local_21c;
                local_8 = CONCAT31(local_8._1_3_,3);
                do {
                  wVar1 = *pwVar10;
                  pwVar10 = pwVar10 + 1;
                } while (wVar1 != L'\0');
                FUN_00403520(&local_2e68,&local_21c,(int)pwVar10 - (int)local_21a >> 1);
                piVar9 = local_2e34;
                local_2e64 = sVar3;
                if ((local_2e38 == (int *)0x0) ||
                   ((uint)(local_2e30 - (int)local_2e38 >> 3) <=
                    (uint)((int)local_2e34 - (int)local_2e38 >> 3))) {
                  if (local_2e34 < local_2e38) {
                    FUN_00475b26();
                  }
                  FUN_0040db70(local_2eb4,&local_2e68,(int)local_2e3c,piVar9);
                }
                else {
                  local_2e80 = local_2e80 & 0xffffff00;
                  FUN_0040f020(&local_2e68,1,local_2e34);
                  local_2e34 = piVar9 + 2;
                }
                local_8 = CONCAT31(local_8._1_3_,2);
                piVar9 = (int *)(local_2e68 + -4);
                LOCK();
                iVar5 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar5 == 1 || iVar5 + -1 < 0) {
                  (**(code **)(**(int **)(local_2e68 + -0x10) + 4))();
                }
              }
              uVar7 = FUN_0042c800((int)local_2e60,(uchar *)"login");
              iVar5 = extraout_ECX_00;
              cVar2 = (char)uVar7;
            }
            puVar17 = local_2e3c;
            local_2ea4 = &stack0xffffb134;
            FUN_004035c0(&stack0xffffb134,&local_e2c);
            local_2e84 = &stack0xffffb130;
            local_8._0_1_ = 4;
            iVar15 = extraout_ECX_01;
            FUN_004035c0(&stack0xffffb130,&local_1e2c);
            local_2e9c = &stack0xffffb12c;
            local_8._0_1_ = 5;
            iVar14 = extraout_ECX_02;
            FUN_004035c0(&stack0xffffb12c,&local_2e2c);
            local_2eac = &stack0xffffb128;
            local_8._0_1_ = 6;
            iVar13 = extraout_ECX_03;
            FUN_004035c0(&stack0xffffb128,&local_62c);
            local_2ea8 = &stack0xffffb124;
            local_8._0_1_ = 7;
            iVar12 = extraout_ECX_04;
            FUN_004035c0(&stack0xffffb124,&local_262c);
            local_2ea0 = &stack0xffffb120;
            local_8._0_1_ = 8;
            iVar11 = extraout_ECX_05;
            FUN_004035c0(&stack0xffffb120,&local_162c);
            local_8 = CONCAT31(local_8._1_3_,2);
            FUN_0040c890(local_2e98,(short)local_2e74,(short)local_2e6c,(short)local_2e78,iVar11,
                         iVar12,iVar13,iVar14,iVar15,iVar5,(int)puVar17);
            local_2e7c = local_2e7c + 1;
            FUN_00410440();
            uVar7 = FUN_0042c800((int)local_2e60,(uchar *)"Local");
            cVar2 = (char)uVar7;
          }
          FUN_0040d990(local_2e98);
          FUN_0042c7a0();
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_00410380(local_2e98);
          uVar7 = FUN_0042c800((int)local_2e60,(uchar *)"ChannelList");
          cVar2 = (char)uVar7;
        }
        FUN_0042c7a0();
      }
      if (local_2e38 != (int *)0x0) {
        FUN_0040ff60();
                    /* WARNING: Subroutine does not return */
        _free(local_2e38);
      }
      local_2e38 = (int *)0x0;
      local_2e34 = (int *)0x0;
      local_2e30 = 0;
      local_8 = 0xffffffff;
      FUN_0042c320(local_2e60);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

