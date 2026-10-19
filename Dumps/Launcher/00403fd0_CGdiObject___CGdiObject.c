// Address: 0x00403fd0
// Name: CGdiObject::~CGdiObject
// Category: Launcher


/* Library Function - Single Match
    public: virtual __thiscall CGdiObject::~CGdiObject(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CGdiObject::~CGdiObject(CGdiObject *this)

{
  void *local_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  undefined1 local_408 [1024];
  uint local_8;
  
  puStack_410 = &LAB_004987a8;
  local_414 = ExceptionList;
  local_8 = DAT_004c3750 ^ (uint)local_408;
  ExceptionList = &local_414;
  *(undefined ***)this = vftable;
  local_40c = 0;
  DeleteObject(this);
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}

