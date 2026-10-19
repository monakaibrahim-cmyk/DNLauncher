// Address: 0x004715aa
// Name: CObArray::Serialize
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CObArray::Serialize(class CArchive &)
   
   Library: Visual Studio 2005 Release */

void __thiscall CObArray::Serialize(CObArray *this,CArchive *param_1)

{
  ulong uVar1;
  int iVar2;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    FUN_00471456(this,uVar1,-1);
    iVar2 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        operator>>(param_1,(CObject **)(*(int *)(this + 4) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 8));
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 8));
    iVar2 = 0;
    if (0 < *(int *)(this + 8)) {
      do {
        CArchive::WriteObject(param_1,*(CObject **)(*(int *)(this + 4) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 8));
    }
  }
  return;
}

