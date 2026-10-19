// Address: 0x0046015a
// Name: CArchive::EnsureRead
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::EnsureRead(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::EnsureRead(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = Read(this,param_1,param_2);
  if (uVar1 != param_2) {
    FUN_0046864a(3,(short *)0x0);
  }
  return;
}

