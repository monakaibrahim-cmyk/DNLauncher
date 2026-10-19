// Address: 0x004010f0
// Name: FUN_004010f0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004010f0(void *this,uint param_1,ushort param_2)

{
  LPCWSTR pWVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  HMODULE hModule;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar7;
  AFX_MODULE_STATE *pAVar8;
  DWORD DVar9;
  UINT UVar10;
  undefined4 uVar11;
  LPWSTR pWVar12;
  uint uVar13;
  uint uVar14;
  rsize_t rVar15;
  undefined1 auStack_1a2c [4];
  LPCWSTR local_1a28;
  uint local_1a24 [2];
  LPCWSTR local_1a1c;
  CFile local_1a18 [16];
  int aiStack_1a08 [9];
  tagRECT tStack_19e4;
  undefined1 auStack_19d4 [8];
  undefined4 uStack_19cc;
  undefined4 uStack_19c8;
  LONG LStack_19c4;
  LONG LStack_19c0;
  LONG LStack_19bc;
  LONG LStack_19b8;
  uint auStack_19b4 [2];
  char *local_19ac;
  char local_19a8 [128];
  char local_1928;
  undefined1 local_1927 [263];
  wchar_t wStack_1820;
  undefined1 auStack_181e [2046];
  wchar_t wStack_1020;
  undefined1 auStack_101e [2046];
  wchar_t wStack_820;
  undefined1 auStack_81e [2050];
  uint local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049a6c3;
  local_14 = ExceptionList;
  local_1c = DAT_004c3750 ^ (uint)auStack_1a2c;
  ExceptionList = &local_14;
  local_1a24[0] = param_1;
  local_1a1c = this;
  pvStack_18 = this;
  hModule = GetModuleHandleW((LPCWSTR)0x0);
  hResInfo = FindResourceW(hModule,(LPCWSTR)(uint)param_2,(LPCWSTR)&lpType_004abf78);
  hResData = LoadResource(hModule,hResInfo);
  pvVar7 = LockResource(hResData);
  CFile(local_1a18,this,0x9001);
  local_c = 0;
  pAVar8 = AfxGetModuleState();
  DVar9 = SizeofResource(*(HMODULE *)(pAVar8 + 8),hResInfo);
  CFile::Write(local_1a18,pvVar7,DVar9);
  CFile::Close(local_1a18);
  FUN_004035c0(&local_1a28,this);
  local_c = CONCAT31(local_c._1_3_,1);
  local_1928 = '\0';
  _memset(local_1927,0,0x103);
  pWVar1 = local_1a28;
  local_19ac = local_19a8;
  UVar10 = (*(code *)Target_004c4f5c)();
  FUN_00402000(pWVar1,UVar10);
  _strncpy(&local_1928,local_19ac,0x104);
  uVar5 = local_1a24[0];
  if (local_19ac != local_19a8) {
                    /* WARNING: Subroutine does not return */
    _free(local_19ac);
  }
  puVar3 = *(undefined4 **)(local_1a24[0] + 0xc);
  uVar14 = local_1a24[0] + 4;
  if (puVar3 < *(undefined4 **)(local_1a24[0] + 8)) {
    FUN_00475b26();
  }
  puVar4 = *(undefined4 **)(uVar5 + 8);
  if (*(undefined4 **)(uVar5 + 0xc) < puVar4) {
    FUN_00475b26();
  }
  FUN_00401f80(uVar14,(int *)local_1a24,uVar14,puVar4,uVar14,puVar3);
  FUN_0042c2c0(aiStack_1a08);
  local_c._0_1_ = 2;
  (*(code *)Target_004c4f5c)();
  wStack_1020 = L'\0';
  _memset(auStack_101e,0,0x7fe);
  wStack_1820 = L'\0';
  _memset(auStack_181e,0,0x7fe);
  wStack_820 = L'\0';
  _memset(auStack_81e,0,0x7fe);
  cVar6 = FUN_0042c490(&local_1928);
  if (cVar6 == '\0') {
    FUN_00416610(local_1a1c);
    local_c._0_1_ = 1;
    FUN_0042c320(aiStack_1a08);
    pWVar1 = local_1a28 + -2;
    LOCK();
    iVar2 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
  }
  else {
    uVar11 = FUN_0042c710((int)aiStack_1a08,'\x01');
    cVar6 = (char)uVar11;
    while (cVar6 != '\0') {
      uVar11 = FUN_0042c710((int)aiStack_1a08,'\0');
      cVar6 = (char)uVar11;
      while (cVar6 != '\0') {
        rVar15 = 0x400;
        pWVar12 = FUN_0042c8d0();
        _wcsncpy_s(&wStack_1020,0x400,pWVar12,rVar15);
        rVar15 = 0x400;
        pWVar12 = FUN_0042c8d0();
        _wcsncpy_s(&wStack_1820,0x400,pWVar12,rVar15);
        rVar15 = 0x400;
        pWVar12 = FUN_0042c8d0();
        _wcsncpy_s(&wStack_820,0x400,pWVar12,rVar15);
        FUN_00401640(&wStack_1020,&tStack_19e4);
        uStack_19cc = thunk_FUN_0047642d(&wStack_1820);
        uStack_19c8 = thunk_FUN_0047642d(&wStack_820);
        LStack_19bc = tStack_19e4.right;
        puVar3 = *(undefined4 **)(uVar5 + 8);
        LStack_19c4 = tStack_19e4.left;
        LStack_19c0 = tStack_19e4.top;
        LStack_19b8 = tStack_19e4.bottom;
        if ((puVar3 == (undefined4 *)0x0) ||
           (uVar13 = *(int *)(uVar5 + 0x10) - (int)puVar3 >> 5,
           uVar13 <= (uint)(*(int *)(uVar5 + 0xc) - (int)puVar3 >> 5))) {
          puVar4 = *(undefined4 **)(uVar5 + 0xc);
          if (puVar4 < puVar3) {
            FUN_00475b26();
          }
          FUN_00401ef0(auStack_19d4,auStack_19b4,(undefined4 *)auStack_19d4,uVar14,puVar4);
        }
        else {
          iVar2 = *(int *)(uVar5 + 0xc);
          local_1a24[0] = local_1a24[0] & 0xffffff00;
          FUN_00402780(uVar13,1);
          *(int *)(uVar5 + 0xc) = iVar2 + 0x20;
        }
        uVar11 = FUN_0042c800((int)aiStack_1a08,(uchar *)"ContrlListData");
        cVar6 = (char)uVar11;
      }
      uVar11 = FUN_0042c800((int)aiStack_1a08,(uchar *)"document");
      cVar6 = (char)uVar11;
    }
    FUN_00416610(local_1a1c);
    if ((*(int *)(uVar5 + 8) != 0) && (*(int *)(uVar5 + 0xc) - *(int *)(uVar5 + 8) >> 5 != 0)) {
      local_c._0_1_ = 1;
      FUN_0042c320(aiStack_1a08);
      local_c = (uint)local_c._1_3_ << 8;
      pWVar1 = local_1a28 + -2;
      LOCK();
      iVar2 = *(int *)pWVar1;
      *(int *)pWVar1 = *(int *)pWVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(local_1a28 + -8) + 4))(local_1a28 + -8);
      }
      local_c = 0xffffffff;
      FUN_00453041(local_1a18);
      goto LAB_004015a5;
    }
    local_c._0_1_ = 1;
    FUN_0042c320(aiStack_1a08);
    pWVar1 = local_1a28 + -2;
    LOCK();
    iVar2 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
  }
  local_c = (uint)local_c._1_3_ << 8;
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(local_1a28 + -8) + 4))(local_1a28 + -8);
  }
  local_c = 0xffffffff;
  FUN_00453041(local_1a18);
LAB_004015a5:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_1a2c);
  return;
}

