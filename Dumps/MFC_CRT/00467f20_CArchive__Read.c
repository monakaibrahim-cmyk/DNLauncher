// Address: 0x00467f20
// Name: CArchive::Read
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned int __thiscall CArchive::Read(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

uint __thiscall CArchive::Read(CArchive *this,void *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  uint local_8;
  
  if ((param_2 == 0) || (param_1 == (void *)0x0)) {
    uVar1 = 0;
  }
  else {
    if (((byte)this[0x18] & 1) == 0) {
      FUN_0046864a(4,*(short **)(this + 0x14));
    }
    uVar1 = *(int *)(this + 0x2c) - (int)*(void **)(this + 0x28);
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    FUN_004527b0(param_1,param_2,*(void **)(this + 0x28),uVar1);
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar1;
    param_1 = (void *)((int)param_1 + uVar1);
    uVar1 = param_2 - uVar1;
    if (uVar1 != 0) {
      iVar4 = uVar1 - uVar1 % *(uint *)(this + 0x20);
      local_c = 0;
      local_8 = iVar4;
      do {
        iVar2 = (**(code **)(**(int **)(this + 0x24) + 0x34))(param_1,local_8);
        param_1 = (void *)((int)param_1 + iVar2);
        local_c = local_c + iVar2;
        local_8 = local_8 - iVar2;
        if (iVar2 == 0) break;
      } while (local_8 != 0);
      uVar1 = uVar1 - local_c;
      if ((uVar1 != 0) && (local_c == iVar4)) {
        uVar5 = 0;
        if (*(int *)(this + 8) == 0) {
          if ((*(int *)(this + 0xc) != 0) ||
             (local_8 = *(uint *)(this + 0x20), *(uint *)(this + 0x20) < uVar1)) {
            local_8 = uVar1;
          }
          local_c = *(int *)(this + 0x30);
          do {
            iVar4 = (**(code **)(**(int **)(this + 0x24) + 0x34))(local_c,local_8);
            local_c = local_c + iVar4;
            local_8 = local_8 - iVar4;
            uVar5 = uVar5 + iVar4;
            if ((iVar4 == 0) || (local_8 == 0)) break;
          } while (uVar5 < uVar1);
          pvVar3 = *(void **)(this + 0x30);
          *(uint *)(this + 0x2c) = (int)pvVar3 + uVar5;
        }
        else {
          (**(code **)(**(int **)(this + 0x24) + 0x50))
                    (0,*(undefined4 *)(this + 0x20),this + 0x30,this + 0x2c);
          pvVar3 = *(void **)(this + 0x30);
        }
        *(void **)(this + 0x28) = pvVar3;
        uVar5 = *(int *)(this + 0x2c) - (int)pvVar3;
        if (uVar1 < (uint)(*(int *)(this + 0x2c) - (int)pvVar3)) {
          uVar5 = uVar1;
        }
        FUN_004527b0(param_1,uVar1,pvVar3,uVar5);
        *(uint *)(this + 0x28) = *(int *)(this + 0x28) + uVar5;
        uVar1 = uVar1 - uVar5;
      }
    }
    uVar1 = param_2 - uVar1;
  }
  return uVar1;
}

