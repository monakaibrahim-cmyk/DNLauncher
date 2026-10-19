// Address: 0x004740d3
// Name: CArchive::WriteClass
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::WriteClass(struct CRuntimeClass const *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::WriteClass(CArchive *this,CRuntimeClass *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  CArchive *extraout_ECX;
  CArchive *this_00;
  undefined4 uVar3;
  short *psVar4;
  
  this_00 = this;
  if (param_1 != (CRuntimeClass *)0x0) goto LAB_004740e9;
  psVar4 = *(short **)(this + 0x14);
  uVar3 = 6;
  while( true ) {
    FUN_0046864a(uVar3,psVar4);
    this_00 = extraout_ECX;
LAB_004740e9:
    if ((~*(uint *)(this + 0x18) & 1) != 0) break;
    psVar4 = *(short **)(this + 0x14);
    uVar3 = 1;
  }
  if (*(int *)(param_1 + 8) == 0xffff) {
                    /* WARNING: Subroutine does not return */
    FUN_004529ce();
  }
  FUN_00473f94(this_00,(void *)0x0);
  ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
  pvVar1 = *ppvVar2;
  if (pvVar1 == (void *)0x0) {
    operator<<(this,0xffff);
    CRuntimeClass::Store(param_1,this);
    CheckCount(this);
    ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
    *ppvVar2 = *(void **)(this + 0x34);
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
  }
  else if (pvVar1 < (void *)0x7fff) {
    operator<<(this,(ushort)pvVar1 | 0x8000);
  }
  else {
    operator<<(this,0x7fff);
    operator<<(this,(uint)pvVar1 | 0x80000000);
  }
  return;
}

