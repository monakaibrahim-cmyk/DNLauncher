// Address: 0x0042f4d0
// Name: FUN_0042f4d0
// Category: Launcher


undefined4 __thiscall FUN_0042f4d0(void *this,char param_1,int param_2)

{
  char cVar1;
  char *in_EAX;
  char *_C;
  char *pcVar2;
  
  if ((this == (void *)0x0) || (*(char *)this == '\0')) {
    return (uint)in_EAX & 0xffffff00;
  }
  pcVar2 = in_EAX;
  if (param_1 == '\0') {
    do {
      cVar1 = *pcVar2;
      in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
      if (cVar1 == '\0') goto LAB_0042f53b;
      if (*(char *)this != cVar1) break;
      this = (void *)((int)this + 1);
      pcVar2 = pcVar2 + 1;
    } while (*(char *)this != '\0');
  }
  else {
    do {
      if (*pcVar2 == '\0') goto LAB_0042f53b;
      _C = (char *)(int)*(char *)this;
      if ((param_2 != 1) || ((int)_C < 0x80)) {
        _C = (char *)_tolower((int)_C);
      }
      in_EAX = (char *)(int)*pcVar2;
      if ((param_2 != 1) || ((int)in_EAX < 0x80)) {
        in_EAX = (char *)_tolower((int)in_EAX);
      }
      if (_C != in_EAX) break;
      this = (void *)((int)this + 1);
      pcVar2 = pcVar2 + 1;
    } while (*(char *)this != '\0');
  }
  if (*pcVar2 != '\0') {
    return (uint)in_EAX & 0xffffff00;
  }
LAB_0042f53b:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

