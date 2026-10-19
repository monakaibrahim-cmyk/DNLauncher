// Address: 0x00407280
// Name: FUN_00407280
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x00407481) */

void __fastcall FUN_00407280(int param_1,HWND param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  errno_t eVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  undefined1 auStack_42c [4];
  FILE *local_428;
  wchar_t *local_424;
  wchar_t local_420;
  undefined1 local_41e [518];
  WCHAR local_218;
  undefined1 local_216 [522];
  uint local_c;
  
  local_c = DAT_004c3750 ^ (uint)auStack_42c;
  local_428 = (FILE *)0x0;
  local_420 = L'\0';
  _memset(local_41e,0,0x206);
  local_218 = L'\0';
  _memset(local_216,0,0x206);
  SHGetSpecialFolderPathW(param_2,&local_218,5,0);
  FUN_004081d0(extraout_ECX,&local_420,L"%s\\DragonNest");
  FUN_004770f2(&local_420);
  FUN_004081d0(extraout_ECX_00,&local_420,L"%s\\DragonNest\\Config");
  FUN_004770f2(&local_420);
  FUN_004081d0(&local_218,&local_420,L"%s\\DragonNest\\Config\\%s");
  FUN_004035c0(&local_424,&local_420);
  eVar4 = __wfopen_s(&local_428,local_424,L"w+");
  if (eVar4 == 0) {
    _fseek(local_428,0,0);
    FUN_00477353(local_428,(byte *)" Width %d\n ");
    FUN_00477353(local_428,(byte *)"Height %d\n ");
    FUN_00477353(local_428,(byte *)"GraphicQuality %d\n ");
    FUN_00477353(local_428,(byte *)"TextureQuality %d\n ");
    FUN_00477353(local_428,(byte *)"WindowMode %d\n ");
    FUN_00477353(local_428,(byte *)"VSync %d\n ");
    FUN_00477353(local_428,(byte *)"LanguageID %d\n ");
    FUN_00477353(local_428,(byte *)"UseDX11 %d\n ");
    uVar5 = *(uint *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x30) < uVar5) {
      FUN_00475b26();
    }
    while( true ) {
      uVar3 = *(uint *)(param_1 + 0x30);
      if (uVar3 < *(uint *)(param_1 + 0x2c)) {
        FUN_00475b26();
      }
      if (uVar5 == uVar3) break;
      if (*(uint *)(param_1 + 0x30) <= uVar5) {
        FUN_00475b26();
      }
      if (*(uint *)(param_1 + 0x30) <= uVar5) {
        FUN_00475b26();
      }
      FUN_00477353(local_428,(byte *)"%s %s\n ");
      if (*(uint *)(param_1 + 0x30) <= uVar5) {
        FUN_00475b26();
      }
      uVar5 = uVar5 + 0x38;
    }
    _fclose(local_428);
    pwVar1 = local_424 + -2;
    LOCK();
    iVar2 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_424 + -8) + 4))(local_424 + -8);
    }
    __security_check_cookie(local_c ^ (uint)auStack_42c);
    return;
  }
  pwVar1 = local_424 + -2;
  LOCK();
  iVar2 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_424 + -8) + 4))(local_424 + -8);
  }
  __security_check_cookie(local_c ^ (uint)auStack_42c);
  return;
}

