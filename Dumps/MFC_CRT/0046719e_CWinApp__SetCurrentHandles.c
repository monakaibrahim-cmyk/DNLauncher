// Address: 0x0046719e
// Name: CWinApp::SetCurrentHandles
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWinApp::SetCurrentHandles(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::SetCurrentHandles(CWinApp *this)

{
  AFX_MODULE_STATE *pAVar1;
  DWORD DVar2;
  LPWSTR pWVar3;
  uint uVar4;
  wchar_t *pwVar5;
  errno_t eVar6;
  wchar_t local_618 [62];
  undefined1 local_59c [388];
  wchar_t local_418 [260];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_59c;
  pAVar1 = AfxGetModuleState();
  *(undefined4 *)(pAVar1 + 8) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(pAVar1 + 0xc) = *(undefined4 *)(this + 0x44);
  DVar2 = GetModuleFileNameW(*(HMODULE *)(this + 0x44),local_210,0x104);
  if ((DVar2 == 0) || (DVar2 == 0x104)) {
    FUN_0045b5d9();
  }
  pWVar3 = PathFindExtensionW(local_210);
  if (pWVar3 == (LPWSTR)0x0) {
    FUN_0045b5d9();
  }
  *pWVar3 = L'\0';
  uVar4 = AfxGetFileName(local_210,local_418,0x104);
  if (uVar4 != 0) {
    FUN_0045b5d9();
  }
  if (*(int *)(this + 0x60) == 0) {
    pwVar5 = __wcsdup(local_418);
    *(wchar_t **)(this + 0x60) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) goto LAB_0046724b;
  }
  pwVar5 = *(wchar_t **)(this + 0x50);
  if (pwVar5 == (wchar_t *)0x0) {
    uVar4 = FUN_00452af1(0xe000,local_618,0x100);
    if (uVar4 == 0) {
      pwVar5 = *(wchar_t **)(this + 0x60);
    }
    else {
      pwVar5 = local_618;
    }
    pwVar5 = __wcsdup(pwVar5);
    *(wchar_t **)(this + 0x50) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) goto LAB_0046724b;
  }
  *(wchar_t **)(pAVar1 + 0x10) = pwVar5;
  if (*(int *)(this + 100) == 0) {
    if (*(int *)(this + 0x6c) == 1) {
      pwVar5 = L".CHM";
    }
    else {
      pwVar5 = L".HLP";
    }
    ATL::Checked::tcscpy_s(pWVar3,0x104 - ((int)pWVar3 - (int)local_210 >> 1),pwVar5);
    pwVar5 = __wcsdup(local_210);
    *(wchar_t **)(this + 100) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) goto LAB_0046724b;
    *pWVar3 = L'\0';
  }
  if (*(int *)(this + 0x68) == 0) {
    eVar6 = _wcscat_s(local_418,0x104,L".INI");
    FUN_00403120(eVar6);
    pwVar5 = __wcsdup(local_418);
    *(wchar_t **)(this + 0x68) = pwVar5;
    if (pwVar5 == (wchar_t *)0x0) {
LAB_0046724b:
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_59c);
  return;
}

