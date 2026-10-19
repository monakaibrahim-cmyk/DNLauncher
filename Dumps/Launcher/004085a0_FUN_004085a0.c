// Address: 0x004085a0
// Name: FUN_004085a0
// Category: Launcher


void __thiscall FUN_004085a0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}

