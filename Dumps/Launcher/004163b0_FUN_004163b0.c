// Address: 0x004163b0
// Name: FUN_004163b0
// Category: Launcher


undefined4 __cdecl FUN_004163b0(wchar_t *param_1)

{
  uint _Count;
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  wchar_t *unaff_EDI;
  
  if (0x7fffffff < in_EAX) {
    return 0x80070057;
  }
  uVar2 = 0;
  if (in_EAX == 0) {
    return 0x80070057;
  }
  _Count = in_EAX - 1;
  uVar1 = __vsnwprintf(unaff_EDI,_Count,param_1,&stack0x00000008);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    unaff_EDI[_Count] = L'\0';
    uVar2 = 0x8007007a;
  }
  else if (uVar1 == _Count) {
    unaff_EDI[_Count] = L'\0';
    return 0;
  }
  return uVar2;
}

