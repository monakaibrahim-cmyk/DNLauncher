// Address: 0x004683a4
// Name: CRuntimeClass::Store
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CRuntimeClass::Store(class CArchive &)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CRuntimeClass::Store(CRuntimeClass *this,CArchive *param_1)

{
  uint uVar1;
  CArchive *this_00;
  uint uVar2;
  
  uVar1 = lstrlenA(*(LPCSTR *)this);
  uVar2 = uVar1 & 0xffff;
  this_00 = CArchive::operator<<(param_1,*(ushort *)(this + 8));
  CArchive::operator<<(this_00,(ushort)uVar2);
  CArchive::Write(param_1,*(void **)this,uVar1 & 0xffff);
  return;
}

