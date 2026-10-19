// Address: 0x00470e91
// Name: COleControlContainer::COleControlContainer
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall COleControlContainer::COleControlContainer(class CWnd *)
   
   Library: Visual Studio 2005 Release */

COleControlContainer * __thiscall
COleControlContainer::COleControlContainer(COleControlContainer *this,CWnd *param_1)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(CWnd **)(this + 0x20) = param_1;
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x24),10);
  CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::CTypedPtrList<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *)(this + 0x40),10);
  *(undefined4 *)(this + 0x5c) = 0xffffffff;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined ***)(this + 0x78) = XOleIPFrame::vftable;
  *(undefined ***)(this + 0x7c) = XOleContainer::vftable;
  return this;
}

