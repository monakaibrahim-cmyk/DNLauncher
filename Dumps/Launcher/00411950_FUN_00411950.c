// Address: 0x00411950
// Name: FUN_00411950
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00411950(void *param_1,short *param_2,
            CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *param_3,
            short *param_4)

{
  short sVar1;
  float fVar2;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *pCVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  code *pcVar9;
  wchar_t *pwVar10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *local_8250;
  uint local_824c;
  int local_8248;
  int local_8244;
  float local_8240;
  uint local_823c;
  CFile local_8238 [16];
  float local_8228;
  undefined4 local_8224;
  undefined4 local_8220;
  undefined4 local_821c;
  wchar_t local_8218;
  undefined1 local_8216 [518];
  undefined1 local_8010 [32768];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a421;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_8250;
  ExceptionList = &local_c;
  local_8250 = param_3;
  FUN_00418fd0(L"URLDownload Start");
  FUN_00418fd0(L"Open Internet Session");
  local_8248 = InternetOpenW(0,0,0,0,0);
  if (local_8248 == 0) {
    FUN_00418f70(L"Internet Session Open Failed!");
    goto LAB_00411e2e;
  }
  if (param_2 == (short *)0x0) {
    iVar4 = 0;
  }
  else {
    psVar5 = param_2;
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    iVar4 = (int)psVar5 - (int)(param_2 + 1) >> 1;
  }
  FUN_00403520((undefined4 *)((int)param_1 + 0x28),param_2,iVar4);
  FUN_00403f30((void *)((int)param_1 + 0x30),L"%s%s");
  local_8250 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
               ((int)param_1 + 0x2c);
  FUN_00403f30(local_8250,L"%s.tmp");
  CFile::CFile(local_8238);
  iVar4 = local_8248;
  local_4 = 0;
  iVar6 = FUN_00411e60(param_1,local_8248,param_4,(int *)&local_824c);
  if (iVar6 == 2) {
LAB_00411e18:
    local_4 = 0xffffffff;
    FUN_00453041(local_8238);
  }
  else {
    if (iVar6 != 0) {
      pcVar9 = InternetCloseHandle_exref;
      if (*(uint *)((int)param_1 + 0x18) < local_824c) {
        FUN_00418fd0(L"Open Http Connection");
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
        CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&local_8244)
        ;
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00403f30(&local_8244,L"Range:bytes=%d-\nCache-Control:no-cache\nPragma:no-cache");
        iVar4 = InternetOpenUrlW(iVar4,*(undefined4 *)((int)param_1 + 0x28),local_8244,
                                 *(undefined4 *)(local_8244 + -0xc),0x84000000,0);
        *(int *)((int)param_1 + 0x14) = iVar4;
        if (iVar4 == 0) {
          FUN_00418f70(L"Http Connection Open Failed!");
          CFile::Close(local_8238);
          InternetCloseHandle(local_8248);
LAB_00411b08:
          FUN_00410090(&local_8244);
          goto LAB_00411b11;
        }
        local_8218 = L'\0';
        _memset(local_8216,0,0x206);
        local_8224 = 0x104;
        local_8220 = 0;
        iVar4 = HttpQueryInfoW(iVar4,5,&local_8218,&local_8224,&local_8220);
        if (iVar4 != 0) {
          iVar4 = thunk_FUN_0047642d(&local_8218);
          *(int *)((int)param_1 + 0x1c) = iVar4;
          *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x18) + iVar4;
        }
        FUN_00418fd0(L"DownLoad Left File Size : %d");
        if (*(int *)((int)param_1 + 0x1c) != 0) {
          FUN_00418fd0(L"Download File Start");
          *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_1 + 0x18);
          DVar7 = GetTickCount();
          local_824c = 0;
          do {
            if (*(int *)((int)param_1 + 0x48) != 0) goto LAB_00411d32;
            iVar4 = InternetQueryDataAvailable(*(undefined4 *)((int)param_1 + 0x14),&local_821c,0,0)
            ;
            if (iVar4 == 0) {
              pwVar10 = L"InternetQueryDataAvailable : data not available!";
LAB_00411ce3:
              FUN_00418f70(pwVar10);
              local_824c = 1;
              break;
            }
            iVar4 = InternetReadFile(*(undefined4 *)((int)param_1 + 0x14),local_8010,local_821c,
                                     &local_823c);
            if (iVar4 == 0) {
              pwVar10 = L"InternetReadFile : reading file fail!";
              goto LAB_00411ce3;
            }
            if (local_823c == 0) break;
            DVar8 = GetTickCount();
            CFile::Write(local_8238,local_8010,local_823c);
            *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + local_823c;
            DAT_004cbeb8 = *(int *)((int)param_1 + 0x24);
            if (DVar7 < DVar8) {
              local_8240 = (float)(int)(DVar8 - DVar7);
              if ((int)(DVar8 - DVar7) < 0) {
                local_8240 = local_8240 + _DAT_004b4720;
              }
              local_8240 = local_8240 / (float)_DAT_004b4758;
              local_8228 = (float)DAT_004cbeb8;
              if (DAT_004cbeb8 < 0) {
                local_8228 = local_8228 + _DAT_004b4720;
              }
              *(float *)((int)param_1 + 0x38) = (local_8228 / (float)_DAT_004b4758) / local_8240;
              fVar2 = (float)*(int *)((int)param_1 + 0x20);
              if (*(int *)((int)param_1 + 0x20) < 0) {
                fVar2 = fVar2 + _DAT_004b4720;
              }
              *(float *)((int)param_1 + 0x3c) = (local_8228 / fVar2) * (float)_DAT_004b4760;
            }
            DAT_004cbebc = 0;
            DAT_004cbec0 = *(undefined4 *)((int)param_1 + 0x20);
            DAT_004cbec4 = 0;
            _DAT_004cbed0 = *(undefined4 *)((int)param_1 + 0x38);
          } while (local_823c != 0);
          if ((*(int *)((int)param_1 + 0x48) != 0) || (local_824c != 0)) {
LAB_00411d32:
            CFile::Close(local_8238);
            InternetCloseHandle(*(undefined4 *)((int)param_1 + 0x14));
            InternetCloseHandle(local_8248);
            *(undefined4 *)((int)param_1 + 0x14) = 0;
            goto LAB_00411b08;
          }
          FUN_00418fd0(L"Download File Success");
        }
        pcVar9 = InternetCloseHandle_exref;
        InternetCloseHandle(*(undefined4 *)((int)param_1 + 0x14));
        local_4 = local_4 & 0xffffff00;
        FUN_00410090(&local_8244);
        iVar4 = local_8248;
      }
      CFile::Close(local_8238);
      FUN_00418fd0(L"MD5 Check Start");
      iVar6 = FUN_00412310((int)param_1);
      if (iVar6 != 0) {
        FUN_00418fd0(L"MD5 Check Success");
        pCVar3 = local_8250;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
                  (local_8250,(int)&local_8250);
        local_4 = CONCAT31(local_4._1_3_,2);
        Rename(*(LPCWSTR *)pCVar3,(LPCWSTR)local_8250);
        (*pcVar9)(iVar4);
        FUN_00418fd0(L"URLDownload End");
        FUN_00410090((int *)&local_8250);
        goto LAB_00411e18;
      }
      FUN_00418f70(L"MD5 Check Failed!");
      *(undefined4 *)((int)param_1 + 0x40) = 6;
      if (*(HWND *)((int)param_1 + 0x44) != (HWND)0x0) {
        PostMessageW(*(HWND *)((int)param_1 + 0x44),0x8065,6,0);
      }
      FUN_00416610(*(LPCWSTR *)local_8250);
      (*pcVar9)(local_8248);
    }
LAB_00411b11:
    local_4 = 0xffffffff;
    FUN_00453041(local_8238);
  }
LAB_00411e2e:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_8250);
  return;
}

