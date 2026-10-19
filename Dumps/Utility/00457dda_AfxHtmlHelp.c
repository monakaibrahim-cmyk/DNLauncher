// Address: 0x00457dda
// Name: AfxHtmlHelp
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    struct HWND__ * __stdcall AfxHtmlHelp(struct HWND__ *,char const *,unsigned int,unsigned long)
    struct HWND__ * __stdcall AfxHtmlHelp(struct HWND__ *,wchar_t const *,unsigned int,unsigned
   long)
   
   Library: Visual Studio 2005 Release */

undefined4 AfxHtmlHelp(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CNoTrackObject *pCVar1;
  HINSTANCE__ *hModule;
  undefined4 uVar2;
  FARPROC pFVar3;
  
  AfxLockGlobals(0xc);
  pCVar1 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_004ca8b0,(_func_CNoTrackObject_ptr *)&LAB_0045711e
                     );
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(pCVar1 + 8) == 0) {
    hModule = AfxCtxLoadLibraryA("hhctrl.ocx");
    *(HINSTANCE__ **)(pCVar1 + 4) = hModule;
    if (hModule != (HINSTANCE__ *)0x0) {
      pFVar3 = GetProcAddress(hModule,"HtmlHelpW");
      *(FARPROC *)(pCVar1 + 8) = pFVar3;
      if (pFVar3 != (FARPROC)0x0) goto LAB_00457e3a;
      FreeLibrary(*(HMODULE *)(pCVar1 + 4));
      *(undefined4 *)(pCVar1 + 4) = 0;
    }
    uVar2 = 0;
  }
  else {
LAB_00457e3a:
    AfxUnlockGlobals(0xc);
    uVar2 = (**(code **)(pCVar1 + 8))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

