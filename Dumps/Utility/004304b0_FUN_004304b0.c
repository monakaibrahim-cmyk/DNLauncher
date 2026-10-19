// Address: 0x004304b0
// Name: FUN_004304b0
// Category: Utility


byte * FUN_004304b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte *this;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *this_00;
  int unaff_EBX;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049937b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0042d8f0();
  this = FUN_0042ef30(param_3);
  do {
    if (this == (byte *)0x0) {
      if (iVar1 != 0) {
        FUN_0042fa80((void *)0x0,(byte *)0x0,param_3);
      }
      ExceptionList = local_c;
      return (byte *)0x0;
    }
    if (*this == 0) {
      ExceptionList = local_c;
      return this;
    }
    if (*this == 0x3c) {
      uVar3 = FUN_0042f4d0(this,'\0',param_3);
      if ((char)uVar3 != '\0') {
        ExceptionList = local_c;
        return this;
      }
      piVar4 = FUN_0042faf0(unaff_EBX,this,param_3);
      if (piVar4 == (int *)0x0) {
        ExceptionList = local_c;
        return (byte *)0x0;
      }
      (**(code **)(*piVar4 + 8))(this,param_2,param_3);
LAB_00430596:
      FUN_0042d770(unaff_EBX);
    }
    else {
      puVar2 = FUN_00452728(0x48);
      piVar4 = (int *)0x0;
      local_4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar4 = FUN_0042d1a0(this_00,puVar2);
      }
      local_4 = 0xffffffff;
      if (piVar4 == (int *)0x0) {
        if (iVar1 != 0) {
          FUN_0042fa80((void *)0x0,(byte *)0x0,param_3);
        }
        ExceptionList = local_c;
        return (byte *)0x0;
      }
      (**(code **)(*piVar4 + 8))(this,param_2,param_3);
      uVar3 = FUN_00431360();
      if ((char)uVar3 == '\0') goto LAB_00430596;
      (**(code **)*piVar4)(1);
    }
    this = FUN_0042ef30(param_3);
  } while( true );
}

