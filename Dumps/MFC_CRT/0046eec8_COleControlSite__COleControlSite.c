// Address: 0x0046eec8
// Name: COleControlSite::COleControlSite
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall COleControlSite::COleControlSite(class COleControlContainer *)
   
   Library: Visual Studio 2005 Release */

COleControlSite * __thiscall
COleControlSite::COleControlSite(COleControlSite *this,COleControlContainer *param_1)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined ***)this = vftable;
  *(COleControlContainer **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(this + 0xa4));
  *(undefined4 *)(this + 0xa8) = 0;
  COleDispatchDriver::COleDispatchDriver((COleDispatchDriver *)(this + 0xbc));
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined ***)(this + 200) = XOleClientSite::vftable;
  *(undefined ***)(this + 0xcc) = XOleIPSite::vftable;
  *(undefined ***)(this + 0xd0) = XOleControlSite::vftable;
  *(undefined ***)(this + 0xd4) = XAmbientProps::vftable;
  *(undefined ***)(this + 0xd8) = XPropertyNotifySink::vftable;
  *(undefined ***)(this + 0xdc) = XEventSink::vftable;
  *(undefined ***)(this + 0xe0) = XBoundObjectSite::vftable;
  *(undefined ***)(this + 0xe4) = XNotifyDBEvents::vftable;
  *(undefined ***)(this + 0xe8) = XRowsetNotify::vftable;
  _memset(this + 0xac,0,0x10);
  *(undefined2 *)(this + 0xac) = 0;
  return this;
}

