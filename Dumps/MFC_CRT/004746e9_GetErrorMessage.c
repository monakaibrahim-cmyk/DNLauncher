// Address: 0x004746e9
// Name: GetErrorMessage
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall COleDispatchException::GetErrorMessage(char *,unsigned
   int,unsigned int *)const 
    public: virtual int __thiscall COleDispatchException::GetErrorMessage(wchar_t *,unsigned
   int,unsigned int *)const 
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall GetErrorMessage(void *this,wchar_t *param_1,uint param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  ATL::Checked::tcsncpy_s(param_1,param_2,*(wchar_t **)((int)this + 0xc),0xffffffff);
  return 1;
}

