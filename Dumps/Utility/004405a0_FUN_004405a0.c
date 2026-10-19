// Address: 0x004405a0
// Name: FUN_004405a0
// Category: Utility


void __cdecl FUN_004405a0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint _Size;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *_Dst;
  void *pvVar7;
  int local_4;
  
  iVar2 = *param_4;
  iVar4 = param_2[1] + *(int *)(param_1 + 0x1a0);
  _Size = (uint)*(byte *)(iVar4 + 0x8c);
  uVar5 = (uint)*(byte *)(iVar4 + 0x96);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    param_2 = param_3;
    do {
      puVar6 = (undefined1 *)*param_2;
      _Dst = *(void **)(iVar2 + iVar4 * 4);
      pvVar7 = (void *)(*(int *)(param_1 + 0x5c) + (int)_Dst);
      while (_Dst < pvVar7) {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        uVar3 = (uint)local_4 >> 8;
        local_4 = CONCAT31((int3)uVar3,uVar1);
        if (_Size != 0) {
          _memset(_Dst,local_4,_Size);
          _Dst = (void *)((int)_Dst + _Size);
        }
      }
      if (1 < uVar5) {
        FUN_0043bc30(iVar2,iVar4,iVar2,iVar4 + 1,uVar5 - 1,*(size_t *)(param_1 + 0x5c));
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + uVar5;
    } while (iVar4 < *(int *)(param_1 + 0x114));
  }
  return;
}

