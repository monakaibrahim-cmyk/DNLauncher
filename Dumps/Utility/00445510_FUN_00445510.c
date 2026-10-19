// Address: 0x00445510
// Name: FUN_00445510
// Category: Utility


void __cdecl FUN_00445510(int param_1,int param_2,uint param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x4000) != 0) {
      if (param_4 == -1) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 0x30)) {
          do {
            FUN_00445510(param_1,param_2,0x4000,iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 0x30));
        }
        FUN_0044d9b0(param_1,*(void **)(param_2 + 0x38));
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
      }
      else if (*(int *)(param_2 + 0x38) != 0) {
        pvVar1 = *(void **)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10);
        if (pvVar1 != (void *)0x0) {
          FUN_0044d9b0(param_1,pvVar1);
          *(undefined4 *)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10) = 0;
        }
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x2000) != 0) {
      FUN_0044d9b0(param_1,*(void **)(param_2 + 0x4c));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
      *(undefined4 *)(param_2 + 0x4c) = 0;
    }
    uVar2 = *(uint *)(param_2 + 0xb8) & param_3;
    if ((uVar2 & 0x100) != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
    }
    if ((char)uVar2 < '\0') {
      FUN_0044d9b0(param_1,*(void **)(param_2 + 0xa0));
      FUN_0044d9b0(param_1,*(void **)(param_2 + 0xac));
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0xac) = 0;
      if (*(int *)(param_2 + 0xb0) != 0) {
        iVar3 = 0;
        if (*(char *)(param_2 + 0xb5) != '\0') {
          do {
            FUN_0044d9b0(param_1,*(void **)(*(int *)(param_2 + 0xb0) + iVar3 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xb0) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)*(byte *)(param_2 + 0xb5));
        }
        FUN_0044d9b0(param_1,*(void **)(param_2 + 0xb0));
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x10) != 0) {
      FUN_0044d9b0(param_1,*(void **)(param_2 + 0xc4));
      FUN_0044d9b0(param_1,*(void **)(param_2 + 200));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
      *(undefined4 *)(param_2 + 0xc4) = 0;
      *(undefined4 *)(param_2 + 200) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x20) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xd8) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xd8)) {
            do {
              FUN_00445510(param_1,param_2,0x20,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xd8));
          }
          FUN_0044d9b0(param_1,*(void **)(param_2 + 0xd4));
          *(undefined4 *)(param_2 + 0xd4) = 0;
          *(undefined4 *)(param_2 + 0xd8) = 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      }
      else if (*(int *)(param_2 + 0xd4) != 0) {
        iVar3 = param_4 * 0x10;
        FUN_0044d9b0(param_1,*(void **)(*(int *)(param_2 + 0xd4) + iVar3));
        FUN_0044d9b0(param_1,*(void **)(*(int *)(param_2 + 0xd4) + 8 + iVar3));
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3) = 0;
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + 8 + iVar3) = 0;
      }
    }
    if (*(void **)(param_1 + 0x274) != (void *)0x0) {
      FUN_0044d9b0(param_1,*(void **)(param_1 + 0x274));
      *(undefined4 *)(param_1 + 0x274) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x200) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xc0) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xc0)) {
            do {
              FUN_00445510(param_1,param_2,0x200,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xc0));
          }
          FUN_0044d9b0(param_1,*(void **)(param_2 + 0xbc));
          *(undefined4 *)(param_2 + 0xbc) = 0;
          *(undefined4 *)(param_2 + 0xc0) = 0;
        }
      }
      else if (*(int *)(param_2 + 0xbc) != 0) {
        FUN_0044d9b0(param_1,*(void **)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14));
        *(undefined4 *)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14) = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 8) != 0) {
      FUN_0044d9b0(param_1,*(void **)(param_2 + 0x7c));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
      *(undefined4 *)(param_2 + 0x7c) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x1000) != 0) {
      thunk_FUN_0044d9b0(param_1,*(void **)(param_2 + 0x10));
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x40) != 0) {
      if (*(int *)(param_2 + 0xf8) != 0) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 4)) {
          do {
            FUN_0044d9b0(param_1,*(void **)(*(int *)(param_2 + 0xf8) + iVar3 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xf8) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 4));
        }
        FUN_0044d9b0(param_1,*(void **)(param_2 + 0xf8));
        *(undefined4 *)(param_2 + 0xf8) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
    }
    if (param_4 != -1) {
      param_3 = param_3 & 0xffffbddf;
    }
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & ~param_3;
  }
  return;
}

