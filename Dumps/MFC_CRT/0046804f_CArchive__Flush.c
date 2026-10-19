// Address: 0x0046804f
// Name: CArchive::Flush
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::Flush(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::Flush(CArchive *this)

{
  CArchive *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x28);
  if (((byte)this[0x18] & 1) == 0) {
    pCVar1 = this + 0x30;
    iVar2 = *(int *)pCVar1;
    if (*(int *)(this + 8) == 0) {
      if (iVar3 != iVar2) {
        (**(code **)(**(int **)(this + 0x24) + 0x38))(iVar2,iVar3 - iVar2);
      }
    }
    else {
      if (iVar3 != iVar2) {
        (**(code **)(**(int **)(this + 0x24) + 0x50))(2,iVar3 - iVar2,0,0);
      }
      (**(code **)(**(int **)(this + 0x24) + 0x50))
                (1,*(undefined4 *)(this + 0x20),pCVar1,this + 0x2c);
    }
    iVar3 = *(int *)pCVar1;
  }
  else {
    if (*(int *)(this + 0x2c) != iVar3) {
      iVar3 = iVar3 - *(int *)(this + 0x2c);
      (**(code **)(**(int **)(this + 0x24) + 0x28))(iVar3,iVar3 >> 0x1f,1);
    }
    iVar3 = *(int *)(this + 0x2c);
  }
  *(int *)(this + 0x28) = iVar3;
  return;
}

