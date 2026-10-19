// Address: 0x00465f38
// Name: ThrowOsError
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: static void __stdcall CFileException::ThrowOsError(long,char const *)
    public: static void __stdcall CFileException::ThrowOsError(long,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

void ThrowOsError(int param_1,short *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = CFileException::OsErrorToException(param_1);
    FUN_00465ef2(iVar1,param_1,param_2);
  }
  return;
}

