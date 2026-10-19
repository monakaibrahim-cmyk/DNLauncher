// Address: 0x00473a2d
// Name: CEnumArray::OnNext
// Category: MFC_CRT


/* Library Function - Single Match
    protected: virtual int __thiscall CEnumArray::OnNext(void *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CEnumArray::OnNext(CEnumArray *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  rsize_t rVar3;
  
  uVar2 = *(uint *)(this + 0x2c);
  uVar1 = *(uint *)(this + 0x30);
  if (uVar2 < uVar1) {
    rVar3 = *(rsize_t *)(this + 0x20);
    FUN_004527b0(param_1,rVar3,(void *)(rVar3 * uVar2 + *(int *)(this + 0x28)),rVar3);
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  return (uint)(uVar2 < uVar1);
}

