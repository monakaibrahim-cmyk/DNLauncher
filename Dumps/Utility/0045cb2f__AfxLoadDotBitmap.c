// Address: 0x0045cb2f
// Name: _AfxLoadDotBitmap
// Category: Utility


/* Library Function - Single Match
    void __stdcall _AfxLoadDotBitmap(void)
   
   Library: Visual Studio 2005 Release */

void _AfxLoadDotBitmap(void)

{
  byte bVar1;
  LONG LVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int nWidth;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int local_94;
  int local_8c;
  undefined1 local_88 [12];
  undefined1 local_7c [116];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_7c;
  LVar2 = GetMenuCheckMarkDimensions();
  nWidth = (int)(short)LVar2;
  local_94 = (int)(short)((uint)LVar2 >> 0x10);
  if ((4 < nWidth) && (5 < local_94)) {
    if (0x20 < nWidth) {
      nWidth = 0x20;
    }
    iVar6 = nWidth + 0xf >> 4;
    iVar7 = ((nWidth + -4) / 2 + iVar6 * 0x10) - nWidth;
    if (0xc < iVar7) {
      iVar7 = 0xc;
    }
    if (0x20 < local_94) {
      local_94 = 0x20;
    }
    _memset(local_88,0xff,0x80);
    puVar3 = local_88 + (local_94 + -6 >> 1) * iVar6 * 2;
    pbVar4 = &DAT_004a15f8;
    local_8c = 5;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar5 = ~((ushort)bVar1 << ((byte)iVar7 & 0x1f));
      *puVar3 = (char)(uVar5 >> 8);
      puVar3[1] = (char)uVar5;
      puVar3 = puVar3 + iVar6 * 2;
      local_8c = local_8c + -1;
    } while (local_8c != 0);
    hBitmapChecked_004cab78 = CreateBitmap(nWidth,local_94,1,1,local_88);
    if (hBitmapChecked_004cab78 == (HBITMAP)0x0) {
      hBitmapChecked_004cab78 = LoadBitmapW((HINSTANCE)0x0,(LPCWSTR)0x7fe3);
    }
    __security_check_cookie(local_8 ^ (uint)local_7c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

