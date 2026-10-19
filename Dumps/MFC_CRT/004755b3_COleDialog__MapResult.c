// Address: 0x004755b3
// Name: COleDialog::MapResult
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall COleDialog::MapResult(unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleDialog::MapResult(COleDialog *this,uint param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x74) = param_1;
  iVar1 = 1;
  if (param_1 != 1) {
    iVar1 = ((param_1 != 2) - 1 & 3) - 1;
  }
  return iVar1;
}

