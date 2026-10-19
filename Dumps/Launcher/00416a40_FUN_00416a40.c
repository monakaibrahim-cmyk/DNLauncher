// Address: 0x00416a40
// Name: FUN_00416a40
// Category: Launcher


void FUN_00416a40(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  HBITMAP in_EAX;
  LPBITMAPINFO lpbmi;
  HDC hdc;
  void *pvVar6;
  DWORD *pDVar7;
  undefined4 *_Dst;
  int *piVar8;
  int iVar9;
  RGBQUAD *pRVar10;
  LPBITMAPINFO ptVar11;
  uint uVar12;
  size_t _Size;
  int iVar13;
  bool bVar14;
  RGBQUAD local_5c;
  int local_54;
  int local_4c;
  undefined4 local_34;
  undefined4 local_30;
  UINT local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [28];
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_34 = 0;
  GetObjectW(in_EAX,0x18,&local_34);
  lpbmi = thunk_FUN_00452728(0x34);
  _memset(lpbmi,0,0x34);
  (lpbmi->bmiHeader).biSize = 0x28;
  hdc = CreateICW(L"DISPLAY",(LPCWSTR)0x0,(LPCWSTR)0x0,(DEVMODEW *)0x0);
  GetDIBits(hdc,in_EAX,0,local_2c,(LPVOID)0x0,lpbmi,0);
  pvVar6 = thunk_FUN_00452728((lpbmi->bmiHeader).biSizeImage + 4);
  if ((lpbmi->bmiHeader).biBitCount == 8) {
    pDVar7 = thunk_FUN_00452728(0x428);
    ptVar11 = lpbmi;
    for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pDVar7 = (ptVar11->bmiHeader).biSize;
      ptVar11 = (LPBITMAPINFO)&(ptVar11->bmiHeader).biWidth;
      pDVar7 = pDVar7 + 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(lpbmi);
  }
  GetDIBits(hdc,in_EAX,0,(lpbmi->bmiHeader).biHeight,pvVar6,lpbmi,0);
  DeleteDC(hdc);
  GetObjectW(in_EAX,0x18,local_1c);
  local_5c.rgbBlue = 0xff;
  local_5c.rgbGreen = '\0';
  local_5c.rgbRed = 0xff;
  local_5c.rgbReserved = '\0';
  uVar1 = (lpbmi->bmiHeader).biBitCount;
  if (uVar1 == 0x10) {
    local_5c.rgbBlue = '\x1f';
    local_5c.rgbGreen = 0xf8;
    local_5c.rgbRed = '\0';
    local_5c.rgbReserved = '\0';
  }
  uVar12 = uVar1 >> 3 & 0xff;
  iVar3 = (lpbmi->bmiHeader).biWidth;
  local_4c = 0;
  iVar9 = (local_28 & 0xfffffffc) + (uint)((local_28 & 3) != 0) * 4;
  uVar4 = (lpbmi->bmiHeader).biHeight;
  pRVar10 = (RGBQUAD *)((uVar4 - 1) * iVar9 + (int)pvVar6);
  _Size = (uVar4 + 2) * 0x10;
  bVar5 = false;
  bVar14 = false;
  _Dst = thunk_FUN_00452728(_Size);
  _memset(_Dst,0,_Size);
  iVar13 = 0;
  *_Dst = 0x20;
  _Dst[1] = 1;
  if (0 < (lpbmi->bmiHeader).biHeight) {
    do {
      local_54 = 0;
      if (0 < (lpbmi->bmiHeader).biWidth) {
        do {
          switch((lpbmi->bmiHeader).biBitCount) {
          case 8:
            bVar14 = lpbmi->bmiColors[pRVar10->rgbBlue] == local_5c;
            break;
          default:
            goto switchD_00416c23_caseD_9;
          case 0x10:
            sVar2._0_1_ = pRVar10->rgbBlue;
            sVar2._1_1_ = pRVar10->rgbGreen;
            bVar14 = sVar2 == local_5c._0_2_;
            break;
          case 0x18:
            bVar14 = (RGBQUAD)((uint)*pRVar10 & 0xffffff) == local_5c;
            break;
          case 0x20:
            bVar14 = *pRVar10 == local_5c;
          }
          bVar14 = !bVar14;
switchD_00416c23_caseD_9:
          pRVar10 = (RGBQUAD *)(&pRVar10->rgbBlue + uVar12);
          if (bVar5) {
            if (!bVar14) {
              piVar8 = _Dst + _Dst[2] * 4 + 8;
              *piVar8 = local_4c;
              piVar8[1] = iVar13;
              piVar8[2] = local_54;
              piVar8[3] = iVar13 + 1;
              _Dst[2] = _Dst[2] + 1;
              if (uVar4 <= (uint)_Dst[2]) {
                pvVar6 = thunk_FUN_00452728((uVar4 + 2) * 0x10 + 0x280);
                _memcpy(pvVar6,_Dst,(_Dst[2] + 2) * 0x10);
                    /* WARNING: Subroutine does not return */
                _free(_Dst);
              }
              bVar5 = false;
            }
          }
          else if (bVar14) {
            bVar5 = true;
            local_4c = local_54;
          }
          local_54 = local_54 + 1;
        } while (local_54 < (lpbmi->bmiHeader).biWidth);
      }
      if ((bVar5) && (bVar14)) {
        piVar8 = _Dst + _Dst[2] * 4 + 8;
        *piVar8 = local_4c;
        piVar8[1] = iVar13;
        piVar8[2] = local_54;
        piVar8[3] = iVar13 + 1;
        _Dst[2] = _Dst[2] + 1;
        if (uVar4 <= (uint)_Dst[2]) {
          pvVar6 = thunk_FUN_00452728((uVar4 + 0x2a) * 0x10);
          _memcpy(pvVar6,_Dst,(_Dst[2] + 2) * 0x10);
                    /* WARNING: Subroutine does not return */
          _free(_Dst);
        }
        bVar5 = false;
      }
      pRVar10 = (RGBQUAD *)((int)pRVar10 - (iVar3 * uVar12 + iVar9));
      iVar13 = iVar13 + 1;
    } while (iVar13 < (lpbmi->bmiHeader).biHeight);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar6);
}

