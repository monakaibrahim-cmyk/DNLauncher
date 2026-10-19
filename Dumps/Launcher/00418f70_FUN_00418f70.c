// Address: 0x00418f70
// Name: FUN_00418f70
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00418f70(wchar_t *param_1)

{
  int unaff_ESI;
  
  if ((-1 < unaff_ESI) && (DAT_004cbcec != 0)) {
    _memset(&DAT_004c6b08,0,0x1000);
    __vsnwprintf_s((wchar_t *)&DAT_004c6b08,0x800,0x7ff,param_1,&stack0x00000008);
    _DAT_004c7b06 = 0;
    FUN_00418af0(unaff_ESI);
  }
  return;
}

