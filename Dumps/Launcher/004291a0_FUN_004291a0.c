// Address: 0x004291a0
// Name: FUN_004291a0
// Category: Launcher


void FUN_004291a0(uint param_1)

{
  size_t _Size;
  int in_EAX;
  void *_Dst;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(in_EAX + 0x2a4) == 0) ||
     ((uint)((*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c) <= param_1)) {
    FUN_00475b26();
  }
  iVar1 = *(int *)(in_EAX + 0x2a4);
  uVar3 = *(uint *)(iVar1 + 0x100 + param_1 * 0x13c) >> 2;
  if ((iVar1 == 0) || ((uint)((*(int *)(in_EAX + 0x2a8) - iVar1) / 0x13c) <= param_1)) {
    FUN_00475b26();
  }
  if ((*(byte *)(*(int *)(in_EAX + 0x2a4) + 0x100 + param_1 * 0x13c) & 3) != 0) {
    uVar3 = uVar3 + 1;
  }
  _Size = uVar3 * 4;
  _Dst = thunk_FUN_00452728(_Size);
  _memset(_Dst,0,_Size);
  iVar1 = (int)(_Size + ((int)_Size >> 0x1f & 3U)) >> 2;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

