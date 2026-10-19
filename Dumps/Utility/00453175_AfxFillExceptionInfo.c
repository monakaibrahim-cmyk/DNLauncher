// Address: 0x00453175
// Name: AfxFillExceptionInfo
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    void __stdcall _AfxFillExceptionInfo(class CFileException *,char const *)
    void __stdcall _AfxFillExceptionInfo(class CFileException *,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void AfxFillExceptionInfo(int param_1,short *param_2)

{
  DWORD DVar1;
  int iVar2;
  
  if (param_1 != 0) {
    DVar1 = GetLastError();
    *(DWORD *)(param_1 + 0xc) = DVar1;
    iVar2 = CFileException::OsErrorToException(DVar1);
    *(int *)(param_1 + 8) = iVar2;
    FUN_004034e0((void *)(param_1 + 0x10),param_2);
  }
  return;
}

