// Address: 0x00466b80
// Name: CProcessLocalObject::~CProcessLocalObject
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CProcessLocalObject::~CProcessLocalObject(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CProcessLocalObject::~CProcessLocalObject(CProcessLocalObject *this)

{
  if (*(int *)this != 0) {
    if (*(undefined4 **)this != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)this)(1);
    }
  }
  return;
}

