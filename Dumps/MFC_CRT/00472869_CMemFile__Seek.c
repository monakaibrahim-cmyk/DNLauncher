// Address: 0x00472869
// Name: CMemFile::Seek
// Category: MFC_CRT


/* WARNING: Removing unreachable block (ram,0x004728a3) */
/* WARNING: Removing unreachable block (ram,0x004728c3) */
/* Library Function - Single Match
    public: virtual unsigned __int64 __thiscall CMemFile::Seek(__int64,unsigned int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

__uint64 __thiscall CMemFile::Seek(CMemFile *this,__int64 param_1,uint param_2)

{
  longlong lVar1;
  short *psVar2;
  short *extraout_ECX;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x14);
  psVar2 = (short *)0x0;
  lVar1 = param_1;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        if (param_1 < 1) goto LAB_004728b2;
        goto LAB_004728a8;
      }
      goto LAB_004728d7;
    }
    lVar1 = param_1 + (ulonglong)uVar3;
  }
  while (uVar3 = (uint)lVar1, lVar1 < CONCAT44(psVar2,psVar2)) {
LAB_004728a8:
    FUN_00465ef2(9,0xffffffff,psVar2);
    psVar2 = extraout_ECX;
LAB_004728b2:
    lVar1 = param_1 + (ulonglong)*(uint *)(this + 0x1c);
  }
  if (*(uint *)(this + 0x1c) < uVar3) {
    (**(code **)(*(int *)this + 100))(uVar3);
  }
  *(uint *)(this + 0x14) = uVar3;
LAB_004728d7:
  return (__uint64)uVar3;
}

