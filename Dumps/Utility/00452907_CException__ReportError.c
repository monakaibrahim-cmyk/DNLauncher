// Address: 0x00452907
// Name: CException::ReportError
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CException::ReportError(unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CException::ReportError(CException *this,uint param_1,uint param_2)

{
  int iVar1;
  uint local_40c;
  wchar_t local_408 [512];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0xc))(local_408,0x200,&local_40c);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      param_2 = 0xf020;
    }
    AfxMessageBox(param_2,param_1,local_40c);
  }
  else {
    AfxMessageBox(local_408,param_1,local_40c);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

