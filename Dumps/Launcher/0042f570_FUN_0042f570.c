// Address: 0x0042f570
// Name: FUN_0042f570
// Category: Launcher


byte * __cdecl FUN_0042f570(void *param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *in_EAX;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_8;
  uint local_4;
  
  iVar4 = param_4;
  FUN_00402d00(param_1,&PTR_004b2d68,0);
  if ((char)param_2 == '\0') {
    if (in_EAX == (byte *)0x0) {
      return (byte *)0x0;
    }
    while ((*in_EAX != 0 && (uVar7 = FUN_0042f4d0(in_EAX,'\0',iVar4), (char)uVar7 == '\0'))) {
      param_2 = uVar7 & 0xff;
      in_EAX = FUN_0042eb80(&param_2,(int *)&local_4);
      FUN_004262b0(&param_2,local_4);
      if (in_EAX == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  }
  else {
    param_2 = param_2 & 0xffffff00;
    in_EAX = FUN_0042ef30(iVar4);
    if (in_EAX == (byte *)0x0) {
      return (byte *)0x0;
    }
    while ((*in_EAX != 0 && (uVar5 = FUN_0042f4d0(in_EAX,'\0',iVar4), (char)uVar5 == '\0'))) {
      bVar2 = *in_EAX;
      if (((bVar2 == 0xd) ||
          (((bVar2 == 10 || (iVar6 = _isspace((uint)bVar2), iVar6 != 0)) || (bVar2 == 10)))) ||
         (bVar2 == 0xd)) {
        in_EAX = in_EAX + 1;
        param_2 = CONCAT31(param_2._1_3_,1);
      }
      else {
        if ((char)param_2 != '\0') {
          FUN_00424db0();
          param_2 = param_2 & 0xffffff00;
        }
        local_8 = 0;
        in_EAX = FUN_0042eb80(&local_8,(int *)&local_4);
        if (local_4 == 1) {
          FUN_00424db0();
        }
        else {
          FUN_004262b0(&local_8,local_4);
        }
      }
      if (in_EAX == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  }
  pcVar1 = param_3 + 1;
  do {
    cVar3 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar3 != '\0');
  return in_EAX + ((int)param_3 - (int)pcVar1);
}

