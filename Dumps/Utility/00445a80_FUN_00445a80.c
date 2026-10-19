// Address: 0x00445a80
// Name: FUN_00445a80
// Category: Utility


void __cdecl
FUN_00445a80(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined *param_6,undefined *param_7)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)FUN_0044d740(1,param_6,param_5);
  iVar5 = 0;
  if (piVar1 == (int *)0x0) {
LAB_00445b18:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  piVar1[0x99] = 1000000;
  piVar1[0x9a] = 1000000;
  iVar2 = __setjmp3(piVar1,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    FUN_0044d9b0((int)piVar1,(void *)piVar1[0x2b]);
    piVar1[0x2b] = 0;
    FUN_0044d7f0(piVar1,param_7,param_5);
    goto LAB_00445b18;
  }
  FUN_0044d8f0((int)piVar1,param_5,param_6,param_7);
  FUN_004450f0((int)piVar1,param_2,param_3,param_4);
  do {
    pcVar3 = FUN_00445940();
    if (param_1[iVar5] != pcVar3[iVar5]) {
      piVar1[0x1b] = piVar1[0x1b] | 0x20000;
    }
    pcVar3 = FUN_00445940();
    pcVar3 = pcVar3 + iVar5;
    iVar5 = iVar5 + 1;
  } while (*pcVar3 != '\0');
  if ((piVar1[0x1b] & 0x20000U) != 0) {
    if (param_1 != (char *)0x0) {
      pcVar3 = FUN_00445940();
      if (((*param_1 == *pcVar3) &&
          ((*param_1 != '1' || (pcVar3 = FUN_00445940(), param_1[2] == pcVar3[2])))) &&
         ((*param_1 != '0' || ('8' < param_1[2])))) goto LAB_00445c1e;
      if (param_1 != (char *)0x0) {
        __snprintf(local_58,0x50,"Application was compiled with png.h from libpng-%.20s",param_1);
        FUN_004451d0((int)piVar1,local_58);
      }
    }
    uVar7 = 0;
    pcVar3 = FUN_00445940();
    __snprintf(local_58,0x50,"Application  is  running with png.c from libpng-%.20s",pcVar3,uVar7);
    FUN_004451d0((int)piVar1,local_58);
    piVar1[0x1b] = 0;
    FUN_00445110(piVar1,"Incompatible libpng version in application and library");
  }
LAB_00445c1e:
  piVar1[0x2c] = 0x2000;
  pvVar4 = FUN_0044d960(piVar1,0x2000);
  piVar1[0x2b] = (int)pvVar4;
  piVar1[0x25] = (int)FUN_00445400;
  piVar1[0x26] = (int)thunk_FUN_0044d9b0;
  piVar1[0x27] = (int)piVar1;
  uVar7 = FUN_00426990(piVar1 + 0x1d,"1.2.3",0x38);
  switch(uVar7) {
  case 0:
    goto switchD_00445c6e_caseD_0;
  case 0xfffffffa:
    pcVar3 = "zlib version error";
    break;
  default:
    pcVar3 = "Unknown zlib error";
    break;
  case 0xfffffffc:
  case 0xfffffffe:
    pcVar3 = "zlib memory error";
  }
  FUN_00445110(piVar1,pcVar3);
switchD_00445c6e_caseD_0:
  piVar1[0x20] = piVar1[0x2b];
  uVar7 = 0;
  piVar1[0x21] = piVar1[0x2c];
  piVar6 = piVar1;
  FUN_0044d6e0((int)piVar1,0,0);
  iVar5 = __setjmp3(piVar1,0,piVar6,uVar7);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

