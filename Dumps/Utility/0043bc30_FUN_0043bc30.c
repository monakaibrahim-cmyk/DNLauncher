// Address: 0x0043bc30
// Name: FUN_0043bc30
// Category: Utility


void __cdecl
FUN_0043bc30(int param_1,int param_2,int param_3,int param_4,int param_5,size_t param_6)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar2 = (undefined4 *)(param_3 + param_4 * 4);
  for (; 0 < param_5; param_5 = param_5 + -1) {
    _Src = (void *)*puVar1;
    _Dst = (void *)*puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    _memcpy(_Dst,_Src,param_6);
  }
  return;
}

