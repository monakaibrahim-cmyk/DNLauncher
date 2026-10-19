// Address: 0x0047554c
// Name: _AFX_OLE_STATE::`scalar_deleting_destructor'
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_OLE_STATE::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall _AFX_OLE_STATE::_scalar_deleting_destructor_(_AFX_OLE_STATE *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    CNoTrackObject::operator_delete(this);
  }
  return this;
}

