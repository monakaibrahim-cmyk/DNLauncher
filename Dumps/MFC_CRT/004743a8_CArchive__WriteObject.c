// Address: 0x004743a8
// Name: CArchive::WriteObject
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::WriteObject(class CObject const *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::WriteObject(CArchive *this,CObject *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  CRuntimeClass *pCVar3;
  CArchive *extraout_ECX;
  CArchive *this_00;
  
  this_00 = this;
  if ((~*(uint *)(this + 0x18) & 1) == 0) {
    FUN_0046864a(2,*(short **)(this + 0x14));
    this_00 = extraout_ECX;
  }
  FUN_00473f94(this_00,(void *)0x0);
  if (param_1 == (CObject *)0x0) {
    operator<<(this,0);
  }
  else {
    ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
    pvVar1 = *ppvVar2;
    if (pvVar1 == (void *)0x0) {
      pCVar3 = (CRuntimeClass *)(*(code *)**(undefined4 **)param_1)();
      WriteClass(this,pCVar3);
      CheckCount(this);
      ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
      *ppvVar2 = *(void **)(this + 0x34);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      (**(code **)(*(int *)param_1 + 8))(this);
    }
    else if (pvVar1 < (void *)0x7fff) {
      operator<<(this,(ushort)pvVar1);
    }
    else {
      operator<<(this,0x7fff);
      operator<<(this,(ulong)pvVar1);
    }
  }
  return;
}

