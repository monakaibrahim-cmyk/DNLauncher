// Address: 0x00452847
// Name: COleException::GetErrorMessage
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall COleException::GetErrorMessage(wchar_t *,unsigned int,unsigned
   int *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleException::GetErrorMessage(COleException *this,wchar_t *param_1,uint param_2,uint *param_3)

{
  DWORD DVar1;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  DVar1 = FormatMessageW(0x1100,(LPCVOID)0x0,*(DWORD *)(this + 8),0x800,(LPWSTR)&param_3,0,
                         (va_list *)0x0);
  if (DVar1 != 0) {
    ATL::Checked::tcsncpy_s(param_1,param_2,(wchar_t *)param_3,0xffffffff);
    LocalFree(param_3);
  }
  else {
    *param_1 = L'\0';
  }
  return (uint)(DVar1 != 0);
}

