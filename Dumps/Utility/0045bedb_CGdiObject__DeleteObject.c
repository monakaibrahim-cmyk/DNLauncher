// Address: 0x0045bedb
// Name: CGdiObject::DeleteObject
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CGdiObject::DeleteObject(void)
   
   Library: Visual Studio 2008 Release */

int __thiscall CGdiObject::DeleteObject(CGdiObject *this)

{
  HGDIOBJ ho;
  BOOL BVar1;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  ho = (HGDIOBJ)Detach((int)this);
  BVar1 = ::DeleteObject(ho);
  return BVar1;
}

