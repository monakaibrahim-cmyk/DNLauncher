// Address: 0x00475c12
// Name: FUN_00475c12
// Category: MFC_CRT


char * __fastcall FUN_00475c12(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}

