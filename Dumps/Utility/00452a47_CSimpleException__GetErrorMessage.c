// Address: 0x00452a47
// Name: CSimpleException::GetErrorMessage
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CSimpleException::GetErrorMessage(wchar_t *,unsigned int,unsigned
   int *)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
CSimpleException::GetErrorMessage
          (CSimpleException *this,wchar_t *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  
  if ((param_1 == (wchar_t *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    if (*(int *)(this + 0xc) == 0) {
      InitString(this);
    }
    if (*(int *)(this + 0x10) == 0) {
      *param_1 = L'\0';
    }
    else {
      ATL::Checked::tcsncpy_s(param_1,param_2,(wchar_t *)(this + 0x14),0xffffffff);
    }
    iVar1 = *(int *)(this + 0x10);
  }
  return iVar1;
}

