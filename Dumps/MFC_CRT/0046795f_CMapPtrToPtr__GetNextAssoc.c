// Address: 0x0046795f
// Name: CMapPtrToPtr::GetNextAssoc
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::GetNextAssoc(struct __POSITION * &,void * &,void * &)const
   
   
   Library: Visual Studio 2005 Release */

void __thiscall
CMapPtrToPtr::GetNextAssoc(CMapPtrToPtr *this,__POSITION **param_1,void **param_2,void **param_3)

{
  int *piVar1;
  uint uVar2;
  __POSITION *p_Var3;
  uint uVar4;
  __POSITION *p_Var5;
  
  p_Var3 = *param_1;
  if (p_Var3 != (__POSITION *)0x0) {
    if (p_Var3 == (__POSITION *)0xffffffff) {
      uVar4 = 0;
      if (*(uint *)(this + 8) != 0) {
        piVar1 = *(int **)(this + 4);
        while (p_Var3 = (__POSITION *)*piVar1, p_Var3 == (__POSITION *)0x0) {
          uVar4 = uVar4 + 1;
          piVar1 = piVar1 + 1;
          if (*(uint *)(this + 8) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_004529e8();
          }
        }
      }
    }
    p_Var5 = *(__POSITION **)p_Var3;
    if (p_Var5 == (__POSITION *)0x0) {
      uVar4 = *(uint *)(this + 8);
      uVar2 = (*(uint *)(p_Var3 + 4) >> 4) % uVar4 + 1;
      if (uVar2 < uVar4) {
        piVar1 = (int *)(*(int *)(this + 4) + uVar2 * 4);
        do {
          p_Var5 = (__POSITION *)*piVar1;
          if (p_Var5 != (__POSITION *)0x0) break;
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 1;
        } while (uVar2 < uVar4);
      }
    }
    *param_1 = p_Var5;
    *param_2 = *(void **)(p_Var3 + 4);
    *param_3 = *(void **)(p_Var3 + 8);
  }
  return;
}

