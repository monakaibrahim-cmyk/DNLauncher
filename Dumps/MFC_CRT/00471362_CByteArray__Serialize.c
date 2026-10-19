// Address: 0x00471362
// Name: CByteArray::Serialize
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CByteArray::Serialize(class CArchive &)
   
   Library: Visual Studio 2005 Release */

void __thiscall CByteArray::Serialize(CByteArray *this,CArchive *param_1)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    FUN_00471252(this,uVar1,-1);
    pvVar3 = *(void **)(this + 4);
    for (uVar4 = *(uint *)(this + 8); uVar4 != 0; uVar4 = uVar4 - uVar2) {
      uVar2 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        uVar2 = uVar4;
      }
      CArchive::EnsureRead(param_1,pvVar3,uVar2);
      pvVar3 = (void *)((int)pvVar3 + uVar2);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 8));
    pvVar3 = *(void **)(this + 4);
    for (uVar4 = *(uint *)(this + 8); uVar4 != 0; uVar4 = uVar4 - uVar2) {
      uVar2 = 0x7fffffff;
      if (uVar4 < 0x7fffffff) {
        uVar2 = uVar4;
      }
      CArchive::Write(param_1,pvVar3,uVar2);
      pvVar3 = (void *)((int)pvVar3 + uVar2);
    }
  }
  return;
}

