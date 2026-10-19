// Address: 0x004649a5
// Name: CWinApp::Unregister
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::Unregister(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::Unregister(CWinApp *this)

{
  CDocTemplate *pCVar1;
  CSimpleStringT<char,0> *pCVar2;
  LSTATUS LVar3;
  int iVar4;
  int local_238;
  LONG local_234;
  __POSITION *local_230;
  LPCWSTR local_22c;
  HKEY local_228;
  LPCWSTR local_224;
  void *local_220;
  undefined4 local_218;
  undefined4 local_214 [131];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_214;
  local_214[0] = 0x18;
  local_218 = 0x4649c9;
  local_228 = (HKEY)0x0;
  local_234 = 0;
  local_230 = GetFirstDocTemplatePosition(this);
  while (local_230 != (__POSITION *)0x0) {
    pCVar1 = GetNextDocTemplate(this,&local_230);
    if (pCVar1 != (CDocTemplate *)0x0) {
      (**(code **)(*(int *)pCVar1 + 0xc))(0,0xfffffffc,0,0);
    }
  }
  if (*(int *)(this + 0x54) != 0) {
    if (*(int *)(this + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    FUN_004035c0(&local_224,L"Software\\");
    local_218 = 0;
    FUN_004064c0(&local_224,*(short **)(this + 0x54));
    pCVar2 = FUN_00401ae0((CSimpleStringT<char,0> *)&local_238,(int *)&local_224,
                          (short *)&lpSubBlock_004b29d8);
    local_218._0_1_ = 1;
    FUN_00401ae0((CSimpleStringT<char,0> *)&local_22c,(int *)pCVar2,*(short **)(this + 0x68));
    local_218 = CONCAT31(local_218._1_3_,3);
    FUN_004031b0((undefined4 *)(local_238 + -0x10));
    AfxDelRegTreeHelper((HKEY__ *)0x80000001,
                        (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_22c);
    LVar3 = RegOpenKeyW((HKEY)0x80000001,local_224,&local_228);
    if (LVar3 == 0) {
      LVar3 = RegEnumKeyW(local_228,0,(LPWSTR)local_214,0x104);
      if (LVar3 == 0x103) {
        AfxDelRegTreeHelper((HKEY__ *)0x80000001,
                            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_224);
      }
      RegCloseKey(local_228);
    }
    RegQueryValueW((HKEY)0x80000001,local_22c,(LPWSTR)local_214,&local_234);
    FUN_004031b0((undefined4 *)(local_22c + -8));
    FUN_004031b0((undefined4 *)(local_224 + -8));
  }
  ExceptionList = local_220;
  iVar4 = __security_check_cookie(local_8 ^ (uint)local_214);
  return iVar4;
}

