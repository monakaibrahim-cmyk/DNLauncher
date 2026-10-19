// Address: 0x004049e0
// Name: ATL::CComBSTR::Attach
// Category: Launcher


/* Library Function - Single Match
    public: void __thiscall ATL::CComBSTR::Attach(wchar_t *)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CComBSTR::Attach(CComBSTR *this,wchar_t *param_1)

{
  if (*(BSTR *)this != param_1) {
    SysFreeString(*(BSTR *)this);
    *(wchar_t **)this = param_1;
  }
  return;
}

