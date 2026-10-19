// Address: 0x0047280a
// Name: CMemFile::Write
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CMemFile::Write(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMemFile::Write(CMemFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  if ((param_1 != (void *)0x0) &&
     (uVar1 = *(uint *)(this + 0x14) + param_2, *(uint *)(this + 0x14) <= uVar1)) {
    if (*(uint *)(this + 0x18) < uVar1) {
      (**(code **)(*(int *)this + 100))(uVar1);
    }
    if (*(int *)(this + 0x14) + param_2 <= *(uint *)(this + 0x18)) {
      (**(code **)(*(int *)this + 0x5c))
                (*(int *)(this + 0x20) + *(int *)(this + 0x14),param_1,param_2);
      *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
      if (*(uint *)(this + 0x14) <= *(uint *)(this + 0x1c)) {
        return;
      }
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x14);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

