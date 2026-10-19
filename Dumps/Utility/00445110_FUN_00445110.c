// Address: 0x00445110
// Name: FUN_00445110
// Category: Utility


void __cdecl FUN_00445110(int *param_1,char *param_2)

{
  size_t _Size;
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_14;
  if (param_1 == (int *)0x0) goto LAB_004451b5;
  uVar1 = param_1[0x1b];
  if ((uVar1 & 0xc0000) != 0) {
    if (*param_2 == '#') {
      iVar2 = 1;
      do {
        if (param_2[iVar2] == ' ') break;
        if (param_2[iVar2 + 1] == ' ') {
          iVar2 = iVar2 + 1;
          break;
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0xf);
      if ((uVar1 & 0x80000) == 0) {
        param_2 = param_2 + iVar2;
      }
      else {
        _Size = iVar2 - 1;
        sVar3 = 0;
        if (0 < (int)_Size) {
          _memcpy(local_14,param_2 + 1,_Size);
          sVar3 = _Size;
        }
        local_14[sVar3] = '\0';
LAB_004451a3:
        param_2 = local_14;
      }
    }
    else if ((uVar1 & 0x80000) != 0) {
      local_14[0] = '0';
      local_14[1] = 0;
      goto LAB_004451a3;
    }
  }
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
LAB_004451b5:
  FUN_00444e60(param_1,param_2);
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

