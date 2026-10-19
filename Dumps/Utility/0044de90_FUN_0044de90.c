// Address: 0x0044de90
// Name: FUN_0044de90
// Category: Utility


void __cdecl FUN_0044de90(int *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (((((((0x40 < bVar1) && (bVar1 < 0x7b)) && ((bVar1 < 0x5b || (0x60 < bVar1)))) &&
        ((bVar1 = param_2[1], 0x40 < bVar1 && (bVar1 < 0x7b)))) &&
       ((bVar1 < 0x5b || (0x60 < bVar1)))) &&
      ((((bVar1 = param_2[2], 0x40 < bVar1 && (bVar1 < 0x7b)) && ((bVar1 < 0x5b || (0x60 < bVar1))))
       && ((bVar1 = param_2[3], 0x40 < bVar1 && (bVar1 < 0x7b)))))) &&
     ((bVar1 < 0x5b || (0x60 < bVar1)))) {
    return;
  }
  FUN_00445230(param_1,"invalid chunk type");
  return;
}

