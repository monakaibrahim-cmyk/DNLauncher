// Address: 0x0047291b
// Name: CMemFile::GetBufferPtr
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned int __thiscall CMemFile::GetBufferPtr(unsigned int,unsigned int,void *
   *,void * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

uint __thiscall
CMemFile::GetBufferPtr(CMemFile *this,uint param_1,uint param_2,void **param_3,void **param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 3) {
    uVar2 = (uint)(*(int *)(this + 0x10) != 0);
  }
  else if (param_1 == 2) {
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
    if (*(uint *)(this + 0x1c) < *(uint *)(this + 0x14)) {
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x14);
    }
    uVar2 = 0;
  }
  else if ((param_3 == (void **)0x0) || (param_4 == (void **)0x0)) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 1) {
      uVar2 = *(uint *)(this + 0x14) + param_2;
      if ((uVar2 < *(uint *)(this + 0x14)) || (uVar2 < param_2)) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      if (*(uint *)(this + 0x18) < uVar2) {
        (**(code **)(*(int *)this + 100))(uVar2);
      }
    }
    *param_3 = (void *)(*(int *)(this + 0x14) + *(int *)(this + 0x20));
    if (param_1 == 1) {
      uVar2 = *(int *)(this + 0x14) + param_2;
      if (*(uint *)(this + 0x18) < *(int *)(this + 0x14) + param_2) {
        uVar2 = *(uint *)(this + 0x18);
      }
      *param_4 = (void *)(*(int *)(this + 0x20) + uVar2);
    }
    else {
      if (param_2 == 0xffffffff) {
        param_2 = *(int *)(this + 0x18) - *(int *)(this + 0x14);
      }
      uVar2 = *(int *)(this + 0x14) + param_2;
      if (*(uint *)(this + 0x1c) < *(int *)(this + 0x14) + param_2) {
        uVar2 = *(uint *)(this + 0x1c);
      }
      iVar1 = *(int *)(this + 0x20);
      *param_4 = (void *)(uVar2 + iVar1);
      *(int *)(this + 0x14) = (int)(uVar2 + iVar1) + (*(int *)(this + 0x14) - (int)*param_3);
    }
    uVar2 = (int)*param_4 - (int)*param_3;
  }
  return uVar2;
}

