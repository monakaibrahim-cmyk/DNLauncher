// Address: 0x00468284
// Name: CArchive::Write
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::Write(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::Write(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != (void *)0x0)) {
    if ((~*(uint *)(this + 0x18) & 1) == 0) {
      FUN_0046864a(2,*(short **)(this + 0x14));
    }
    uVar1 = *(int *)(this + 0x2c) - (int)*(void **)(this + 0x28);
    uVar2 = param_2;
    if (uVar1 <= param_2) {
      uVar2 = uVar1;
    }
    FUN_004527b0(*(void **)(this + 0x28),uVar1,param_1,uVar2);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar2;
    uVar1 = param_2 - uVar2;
    if (uVar1 != 0) {
      Flush(this);
      iVar3 = uVar1 - uVar1 % *(uint *)(this + 0x20);
      (**(code **)(**(int **)(this + 0x24) + 0x38))((int)param_1 + uVar2,iVar3);
      uVar1 = uVar1 - iVar3;
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 0x24) + 0x50))
                  (1,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
        *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x30);
      }
      if ((*(uint *)(this + 0x20) <= uVar1) || (*(void **)(this + 0x28) != *(void **)(this + 0x30)))
      {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      FUN_004527b0(*(void **)(this + 0x28),uVar1,(void *)((int)param_1 + uVar2 + iVar3),uVar1);
      *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar1;
    }
  }
  return;
}

