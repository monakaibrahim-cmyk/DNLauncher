// Address: 0x004653b5
// Name: CControlSiteFactoryMgr::`scalar_deleting_destructor'
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void * __thiscall CControlSiteFactoryMgr::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall
CControlSiteFactoryMgr::_scalar_deleting_destructor_(CControlSiteFactoryMgr *this,uint param_1)

{
  ~CControlSiteFactoryMgr(this);
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

