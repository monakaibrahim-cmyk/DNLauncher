// Address: 0x00452c17
// Name: Rename
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: static void __stdcall CFile::Rename(char const *,char const *)
    public: static void __stdcall CFile::Rename(wchar_t const *,wchar_t const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void Rename(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileW(param_1,param_2);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    ThrowOsError(DVar2,param_1);
  }
  return;
}

