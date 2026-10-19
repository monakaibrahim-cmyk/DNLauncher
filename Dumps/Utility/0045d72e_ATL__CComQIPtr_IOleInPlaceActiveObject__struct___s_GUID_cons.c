// Address: 0x0045d72e
// Name: ATL::CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>::CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
// Category: Utility


/* Library Function - Single Match
    public: __thiscall ATL::CComQIPtr<struct IOleInPlaceActiveObject,&struct __s_GUID const
   _GUID_00000117_0000_0000_c000_000000000046>::CComQIPtr<struct IOleInPlaceActiveObject,&struct
   __s_GUID const _GUID_00000117_0000_0000_c000_000000000046>(struct IUnknown *)
   
   Library: Visual Studio 2005 Release */

CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
* __thiscall
ATL::
CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
::
CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
          (CComQIPtr<IOleInPlaceActiveObject,&struct___s_GUID_const__GUID_00000117_0000_0000_c000_000000000046>
           *this,IUnknown *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (IUnknown *)0x0) {
    (*param_1->lpVtbl->QueryInterface)(param_1,(IID *)&DAT_004a1f9c,(void **)this);
  }
  return this;
}

