// Address: 0x0045d660
// Name: CComQIPtr<>
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall ATL::CComQIPtr<struct IHTMLDocument2,&struct __s_GUID const
   _GUID_332c4425_26cb_11d0_b483_00c04fd90119>::CComQIPtr<struct IHTMLDocument2,&struct __s_GUID
   const _GUID_332c4425_26cb_11d0_b483_00c04fd90119>(struct IUnknown *)
    public: __thiscall ATL::CComQIPtr<struct IOleCommandTarget,&struct __s_GUID const
   _GUID_b722bccb_4e68_101b_a2bc_00aa00404770>::CComQIPtr<struct IOleCommandTarget,&struct __s_GUID
   const _GUID_b722bccb_4e68_101b_a2bc_00aa00404770>(struct IUnknown *)
   
   Library: Visual Studio 2005 Release */

undefined4 * __thiscall CComQIPtr<>(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_004a1d04,this);
  }
  return this;
}

