// Address: 0x004958bb
// Name: ATL::_AtlGetThreadACPFake
// Category: MFC_CRT


/* Library Function - Single Match
    unsigned int __stdcall ATL::_AtlGetThreadACPFake(void)
   
   Library: Visual Studio 2005 Release */

uint ATL::_AtlGetThreadACPFake(void)

{
  LCID Locale;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char local_10;
  char local_f [7];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  Locale = GetThreadLocale();
  iVar1 = GetLocaleInfoA(Locale,0x1004,&local_10,7);
  if (iVar1 != 0) {
    pcVar2 = &local_10;
    if (local_10 != '\0') {
      do {
        pcVar2 = pcVar2 + 1;
        iVar4 = iVar4 * 10 + -0x30 + (int)local_10;
        local_10 = *pcVar2;
      } while (local_10 != '\0');
      if (iVar4 != 0) goto LAB_00495911;
    }
  }
  GetACP();
LAB_00495911:
  uVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar3;
}

