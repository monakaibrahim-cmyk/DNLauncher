// Address: 0x0042d0c0
// Name: FUN_0042d0c0
// Category: Launcher


void __fastcall FUN_0042d0c0(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00((void *)(param_3 + 0x30),(undefined4 *)param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}

