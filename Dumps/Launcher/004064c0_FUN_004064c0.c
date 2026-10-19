// Address: 0x004064c0
// Name: FUN_004064c0
// Category: Launcher


void __thiscall FUN_004064c0(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  if (param_1 == (short *)0x0) {
    FUN_00403380(this,(void *)0x0,0);
    return;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_00403380(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return;
}

