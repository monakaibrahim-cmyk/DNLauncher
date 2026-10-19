// Address: 0x0047df47
// Name: __wwincmdln
// Category: MFC_CRT


/* Library Function - Single Match
    __wwincmdln
   
   Library: Visual Studio 2005 Release */

void __wwincmdln(void)

{
  ushort uVar1;
  bool bVar2;
  undefined **ppuVar3;
  
  bVar2 = false;
  ppuVar3 = DAT_004cd398;
  if (DAT_004cd398 == (undefined **)0x0) {
    ppuVar3 = &PTR_004b1080;
  }
  do {
    uVar1 = *(ushort *)ppuVar3;
    if (uVar1 < 0x21) {
      if (uVar1 == 0) {
        return;
      }
      if (!bVar2) {
        for (; (*(ushort *)ppuVar3 != 0 && (*(ushort *)ppuVar3 < 0x21));
            ppuVar3 = (undefined **)((int)ppuVar3 + 2)) {
        }
        return;
      }
    }
    if (uVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    ppuVar3 = (undefined **)((int)ppuVar3 + 2);
  } while( true );
}

