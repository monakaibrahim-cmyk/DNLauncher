// Address: 0x00426290
// Name: FUN_00426290
// Category: Launcher


void __fastcall FUN_00426290(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004262b0((undefined4 *)param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}

