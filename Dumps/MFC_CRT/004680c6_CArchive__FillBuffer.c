// Address: 0x004680c6
// Name: CArchive::FillBuffer
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::FillBuffer(unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::FillBuffer(CArchive *this,uint param_1)

{
  CArchive *pCVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  CArchive *unaff_ESI;
  int iVar6;
  undefined4 uVar7;
  CArchive *in_stack_ffffffe4;
  uint local_8;
  
  if (((byte)this[0x18] & 1) != 0) goto LAB_004680e0;
  in_stack_ffffffe4 = *(CArchive **)(this + 0x14);
  uVar7 = 4;
  do {
    FUN_0046864a(uVar7,(short *)in_stack_ffffffe4);
LAB_004680e0:
    pvVar2 = *(void **)(this + 0x28);
    pCVar1 = this + 0x2c;
    local_8 = *(int *)pCVar1 - (int)pvVar2;
    uVar3 = param_1 + local_8;
    if (*(int *)(this + 8) == 0) {
      pvVar4 = *(void **)(this + 0x30);
      if (pvVar4 < pvVar2) {
        if (0 < (int)local_8) {
          FUN_004070b0(pvVar4,*(int *)pCVar1 - (int)pvVar4,pvVar2,local_8);
          pvVar4 = *(void **)(this + 0x30);
          *(void **)(this + 0x28) = pvVar4;
          *(uint *)pCVar1 = (int)pvVar4 + local_8;
        }
        if (*(int *)(this + 0xc) == 0) {
          param_1 = *(uint *)(this + 0x20);
        }
        param_1 = param_1 - local_8;
        iVar6 = local_8 + (int)pvVar4;
        do {
          in_stack_ffffffe4 = (CArchive *)param_1;
          iVar5 = (**(code **)(**(int **)(this + 0x24) + 0x34))(iVar6);
          local_8 = local_8 + iVar5;
          param_1 = param_1 - iVar5;
          iVar6 = iVar6 + iVar5;
          if ((iVar5 == 0) || (param_1 == 0)) break;
        } while (local_8 < uVar3);
        *(int *)(this + 0x28) = *(int *)(this + 0x30);
        *(uint *)pCVar1 = *(int *)(this + 0x30) + local_8;
      }
    }
    else {
      if (local_8 != 0) {
        (**(code **)(**(int **)(this + 0x24) + 0x28))(-local_8,(int)-local_8 >> 0x1f,1);
      }
      in_stack_ffffffe4 = pCVar1;
      (**(code **)(**(int **)(this + 0x24) + 0x50))(0,*(undefined4 *)(this + 0x20),this + 0x30);
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x30);
    }
    if (uVar3 <= (uint)(*(int *)pCVar1 - *(int *)(this + 0x28))) {
      return;
    }
    uVar7 = 3;
    this = unaff_ESI;
  } while( true );
}

