// Address: 0x00474ffb
// Name: COleObjectFactory::Revoke
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleObjectFactory::Revoke(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall COleObjectFactory::Revoke(COleObjectFactory *this)

{
  if (this[0x4a] != (COleObjectFactory)0x0) {
    if (*(DWORD *)(this + 0x24) != 0) {
      CoRevokeClassObject(*(DWORD *)(this + 0x24));
      *(undefined4 *)(this + 0x24) = 0;
    }
    this[0x4a] = (COleObjectFactory)0x0;
  }
  return;
}

