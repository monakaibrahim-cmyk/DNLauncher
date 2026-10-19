// Address: 0x004727b9
// Name: CMemFile::Read
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned int __thiscall CMemFile::Read(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint __thiscall CMemFile::Read(CMemFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    uVar1 = *(uint *)(this + 0x14);
    uVar2 = *(uint *)(this + 0x1c);
    if (uVar1 <= uVar2) {
      if ((uVar2 < uVar1 + param_2) || (uVar1 + param_2 < uVar1)) {
        param_2 = uVar2 - uVar1;
      }
      (**(code **)(*(int *)this + 0x5c))(param_1,*(int *)(this + 0x20) + uVar1,param_2);
      *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
      return param_2;
    }
  }
  return 0;
}

