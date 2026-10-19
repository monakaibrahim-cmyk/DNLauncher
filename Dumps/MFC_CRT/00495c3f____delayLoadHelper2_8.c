// Address: 0x00495c3f
// Name: ___delayLoadHelper2@8
// Category: MFC_CRT


/* Library Function - Single Match
    ___delayLoadHelper2@8
   
   Library: Visual Studio 2005 Release */

FARPROC ___delayLoadHelper2_8(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  FARPROC pFVar4;
  HMODULE hLibModule;
  HMODULE pHVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint local_48;
  uint *local_44;
  int *local_40;
  LPCSTR local_3c;
  uint local_38;
  char *local_34;
  HMODULE local_30;
  FARPROC local_2c;
  DWORD local_28;
  int *local_1c;
  int local_10;
  uint local_8;
  
  puVar3 = param_1;
  local_1c = (int *)(param_1[2] + 0x400000);
  local_10 = param_1[5] + 0x400000;
  local_3c = (LPCSTR)(param_1[1] + 0x400000);
  puVar1 = param_1 + 4;
  local_8 = param_1[7];
  local_40 = param_2;
  local_48 = 0x24;
  local_44 = param_1;
  local_38 = 0;
  local_34 = (char *)0x0;
  local_30 = (HMODULE)0x0;
  local_2c = (FARPROC)0x0;
  local_28 = 0;
  if ((*param_1 & 1) == 0) {
    param_2 = (int *)&local_48;
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&param_2);
    pFVar4 = (FARPROC)0x0;
  }
  else {
    hLibModule = (HMODULE)*local_1c;
    param_1 = (uint *)(((int)((int)param_2 - (param_1[3] + 0x400000)) >> 2) * 4);
    uVar2 = *(uint *)(*puVar1 + 0x400000 + (int)param_1);
    local_38 = ~(uVar2 >> 0x1f) & 1;
    local_34 = IMAGE_DOS_HEADER_00400000.e_magic + uVar2 + 2;
    if (local_38 == 0) {
      local_34 = (char *)(uVar2 & 0xffff);
    }
    pFVar4 = (FARPROC)0x0;
    if ((DAT_004cbc98 == (code *)0x0) ||
       (pFVar4 = (FARPROC)(*DAT_004cbc98)(0,&local_48), pFVar4 == (FARPROC)0x0)) {
      if (hLibModule == (HMODULE)0x0) {
        if ((((DAT_004cbc98 == (code *)0x0) ||
             (hLibModule = (HMODULE)(*DAT_004cbc98)(1,&local_48), hLibModule == (HMODULE)0x0)) &&
            (hLibModule = LoadLibraryA(local_3c), hLibModule == (HMODULE)0x0)) &&
           ((local_28 = GetLastError(), DAT_004cbc94 == (code *)0x0 ||
            (hLibModule = (HMODULE)(*DAT_004cbc94)(3,&local_48), hLibModule == (HMODULE)0x0)))) {
          param_2 = (int *)&local_48;
          RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&param_2);
          return local_2c;
        }
        pHVar5 = (HMODULE)InterlockedExchange(local_1c,(LONG)hLibModule);
        if (pHVar5 == hLibModule) {
          FreeLibrary(hLibModule);
        }
        else if ((puVar3[6] != 0) && (puVar6 = LocalAlloc(0x40,8), puVar6 != (undefined4 *)0x0)) {
          puVar6[1] = puVar3;
          *puVar6 = DAT_004cbc90;
          DAT_004cbc90 = puVar6;
        }
      }
      local_30 = hLibModule;
      if (DAT_004cbc98 != (code *)0x0) {
        pFVar4 = (FARPROC)(*DAT_004cbc98)(2,&local_48);
      }
      if (((pFVar4 == (FARPROC)0x0) &&
          (((((puVar3[5] == 0 || (puVar3[7] == 0)) ||
             (piVar7 = (int *)((int)&hLibModule->unused + hLibModule[0xf].unused), *piVar7 != 0x4550
             )) || ((piVar7[2] != local_8 || (hLibModule != (HMODULE)piVar7[0xd])))) ||
           (pFVar4 = *(FARPROC *)((int)param_1 + local_10),
           *(FARPROC *)((int)param_1 + local_10) == (FARPROC)0x0)))) &&
         (pFVar4 = GetProcAddress(hLibModule,local_34), pFVar4 == (FARPROC)0x0)) {
        local_28 = GetLastError();
        if (DAT_004cbc94 != (code *)0x0) {
          pFVar4 = (FARPROC)(*DAT_004cbc94)(4,&local_48);
        }
        if (pFVar4 == (FARPROC)0x0) {
          param_1 = &local_48;
          RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&param_1);
          pFVar4 = local_2c;
        }
      }
      *param_2 = (int)pFVar4;
    }
    if (DAT_004cbc98 != (code *)0x0) {
      local_28 = 0;
      local_30 = hLibModule;
      local_2c = pFVar4;
      (*DAT_004cbc98)(5,&local_48);
    }
  }
  return pFVar4;
}

