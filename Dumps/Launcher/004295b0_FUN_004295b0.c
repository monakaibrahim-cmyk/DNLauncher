// Address: 0x004295b0
// Name: FUN_004295b0
// Category: Launcher


uint __thiscall FUN_004295b0(void *this,LPCSTR param_1,DWORD param_2)

{
  int in_EAX;
  HANDLE hFile;
  uint uVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  DWORD dwDesiredAccess;
  
  FUN_00429370(this,in_EAX);
  *(char *)(in_EAX + 4) = (char)param_2;
  if ((char)param_2 == '\0') {
    dwDesiredAccess = 0xc0000000;
  }
  else {
    dwDesiredAccess = 0x80000000;
  }
  hFile = CreateFileA(param_1,dwDesiredAccess,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)(in_EAX + 8) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    uVar1 = GetLastError();
  }
  else {
    param_2 = 0;
    ReadFile(hFile,(LPVOID)(in_EAX + 0xc),0x110,&param_2,(LPOVERLAPPED)0x0);
    uVar1 = *(uint *)(in_EAX + 0x10c);
    if ((9 < (int)uVar1) && ((int)uVar1 < 0xc)) {
      if ((int)uVar1 < 0xb) {
        iVar4 = *(int *)(in_EAX + 0x110) * -0x13c;
        if (*(HANDLE *)(in_EAX + 8) == (HANDLE)0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar6 = FUN_004290f0(iVar4,2,*(HANDLE *)(in_EAX + 8),iVar4,
                               -(uint)(*(int *)(in_EAX + 0x110) * 0x13c != 0));
          uVar3 = (undefined4)uVar6;
        }
        *(undefined4 *)(in_EAX + 0x114) = uVar3;
      }
      else {
        if (*(char *)(in_EAX + 0x118) == '\x01') goto LAB_00429601;
        if (*(HANDLE *)(in_EAX + 8) != (HANDLE)0xffffffff) {
          FUN_004290f0(extraout_ECX,0,*(HANDLE *)(in_EAX + 8),*(LONG *)(in_EAX + 0x114),0);
        }
      }
      if (*(uint *)(in_EAX + 0x110) == 0) {
LAB_0042978e:
        FUN_0042a210();
        FUN_0042aec0(in_EAX);
        uVar3 = FUN_004246c0();
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      FUN_0042afd0((void *)(in_EAX + 0x2a0),*(uint *)(in_EAX + 0x110));
      param_2 = *(int *)(in_EAX + 0x110) * 0x13c;
      pvVar2 = (LPVOID)FUN_00415420();
      if (*(HANDLE *)(in_EAX + 8) != (HANDLE)0xffffffff) {
        FUN_00429140(pvVar2,*(HANDLE *)(in_EAX + 8));
      }
      uVar5 = 0;
      param_2 = 0;
      while( true ) {
        iVar4 = 0;
        if (*(int *)(in_EAX + 0x2a4) != 0) {
          iVar4 = (*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c;
        }
        if (iVar4 <= (int)uVar5) goto LAB_0042978e;
        if ((*(int *)(in_EAX + 0x2a4) == 0) ||
           ((uint)((*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c) <= uVar5)) {
          FUN_00475b26();
        }
        iVar4 = *(int *)(in_EAX + 0x2a4) + param_2;
        if ((*(int *)(in_EAX + 0x2a4) == 0) ||
           ((uint)((*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c) <= uVar5)) {
          FUN_00475b26();
        }
        uVar1 = *(uint *)(in_EAX + 0x2a4);
        if (*(uint *)(param_2 + 0x108 + uVar1) < *(uint *)(iVar4 + 0x100)) break;
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 0x13c;
      }
    }
  }
LAB_00429601:
  return uVar1 & 0xffffff00;
}

