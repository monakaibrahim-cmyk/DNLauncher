// Address: 0x0047436b
// Name: Serialize
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CArray<int,int const &>::Serialize(class CArchive &)
    public: virtual void __thiscall CArray<struct HWND__ *,struct HWND__ *>::Serialize(class
   CArchive &)
   
   Library: Visual Studio 2005 Release */

void __thiscall Serialize(void *this,CArchive *param_1)

{
  ulong uVar1;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    FUN_00473cf2(this,uVar1,-1);
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 8));
  }
  SerializeElements<HWND__*>(param_1,*(HWND__ ***)((int)this + 4),*(int *)((int)this + 8));
  return;
}

