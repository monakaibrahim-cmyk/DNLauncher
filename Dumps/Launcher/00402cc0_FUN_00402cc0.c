// Address: 0x00402cc0
// Name: FUN_00402cc0
// Category: Launcher


int __thiscall FUN_00402cc0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}

