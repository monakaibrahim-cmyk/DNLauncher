// Address: 0x0042ef30
// Name: FUN_0042ef30
// Category: Launcher


byte * __cdecl FUN_0042ef30(int param_1)

{
  byte *in_EAX;
  int iVar1;
  byte bVar2;
  
  if ((in_EAX == (byte *)0x0) || (bVar2 = *in_EAX, bVar2 == 0)) {
    return (byte *)0x0;
  }
  if (param_1 == 1) {
    do {
      if (bVar2 == 0xef) {
        if ((in_EAX[1] == 0xbb) && (in_EAX[2] == 0xbf)) {
          in_EAX = in_EAX + 3;
        }
        else {
          if (in_EAX[1] != 0xbf) goto LAB_0042ef84;
          if (in_EAX[2] == 0xbe) {
            in_EAX = in_EAX + 3;
          }
          else {
            if (in_EAX[2] != 0xbf) goto LAB_0042ef84;
            in_EAX = in_EAX + 3;
          }
        }
      }
      else {
LAB_0042ef84:
        iVar1 = _isspace((uint)bVar2);
        if ((((iVar1 == 0) && (bVar2 != 10)) && (bVar2 != 0xd)) &&
           ((*in_EAX != 10 && (*in_EAX != 0xd)))) {
          return in_EAX;
        }
        in_EAX = in_EAX + 1;
      }
      bVar2 = *in_EAX;
    } while (bVar2 != 0);
  }
  else {
    for (; ((bVar2 = *in_EAX, bVar2 != 0 &&
            (((iVar1 = _isspace((uint)bVar2), iVar1 != 0 || (bVar2 == 10)) || (bVar2 == 0xd)))) ||
           ((*in_EAX == 10 || (*in_EAX == 0xd)))); in_EAX = in_EAX + 1) {
    }
  }
  return in_EAX;
}

