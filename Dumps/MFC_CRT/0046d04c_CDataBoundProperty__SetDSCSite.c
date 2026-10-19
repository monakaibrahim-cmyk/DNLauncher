// Address: 0x0046d04c
// Name: CDataBoundProperty::SetDSCSite
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDataBoundProperty::SetDSCSite(class COleControlSite *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDataBoundProperty::SetDSCSite(CDataBoundProperty *this,COleControlSite *param_1)

{
  if (*(COleControlSite **)(this + 0xc) != param_1) {
    *(COleControlSite **)(this + 0xc) = param_1;
    Notify(this);
  }
  return;
}

