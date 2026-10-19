// Address: 0x0046d689
// Name: ATL::CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>::CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CComQIPtr<struct IChapteredRowset,&struct __s_GUID const
   _GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>::CComQIPtr<struct IChapteredRowset,&struct __s_GUID
   const _GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>(struct IUnknown *)
   
   Library: Visual Studio 2005 Release */

CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d> *
__thiscall
ATL::CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>::
CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
          (CComQIPtr<IChapteredRowset,&struct___s_GUID_const__GUID_0c733a93_2a1c_11ce_ade5_00aa0044773d>
           *this,IUnknown *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (IUnknown *)0x0) {
    (*param_1->lpVtbl->QueryInterface)(param_1,(IID *)&DAT_004a40e4,(void **)this);
  }
  return this;
}

