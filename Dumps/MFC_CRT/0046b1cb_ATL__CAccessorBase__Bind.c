// Address: 0x0046b1cb
// Name: ATL::CAccessorBase::Bind
// Category: MFC_CRT


/* Library Function - Single Match
    public: static void __cdecl ATL::CAccessorBase::Bind(struct tagDBBINDING *,unsigned
   long,unsigned short,unsigned long,unsigned char,unsigned char,unsigned long,unsigned
   long,unsigned long,unsigned long,struct tagDBOBJECT *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
ATL::CAccessorBase::Bind
          (tagDBBINDING *param_1,ulong param_2,ushort param_3,ulong param_4,uchar param_5,
          uchar param_6,ulong param_7,ulong param_8,ulong param_9,ulong param_10,
          tagDBOBJECT *param_11)

{
  if (param_1 == (tagDBBINDING *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  *(ushort *)(param_1 + 0x30) = param_3;
  param_1[0x32] = (tagDBBINDING)param_5;
  *(uint *)(param_1 + 0x20) = param_3 >> 0xe & 1;
  param_1[0x33] = (tagDBBINDING)param_6;
  *(tagDBOBJECT **)(param_1 + 0x14) = param_11;
  *(ulong *)(param_1 + 4) = param_8;
  *(ulong *)(param_1 + 0x24) = param_7;
  *(ulong *)(param_1 + 0x28) = param_4;
  *(ulong *)param_1 = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  if (param_9 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 3;
    *(ulong *)(param_1 + 8) = param_9;
  }
  if (param_10 != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
    *(ulong *)(param_1 + 0xc) = param_10;
  }
  return;
}

