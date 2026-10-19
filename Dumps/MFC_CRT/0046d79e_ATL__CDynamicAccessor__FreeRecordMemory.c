// Address: 0x0046d79e
// Name: ATL::CDynamicAccessor::FreeRecordMemory
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall ATL::CDynamicAccessor::FreeRecordMemory(struct IRowset *)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CDynamicAccessor::FreeRecordMemory(CDynamicAccessor *this,IRowset *param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  uint local_8;
  
  iVar5 = 0;
  local_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    do {
      if ((*(int *)(this + 0x10) == 0) || (*(char *)(*(int *)(this + 0x10) + local_8) != '\x01')) {
        sVar2 = *(short *)(iVar5 + 0x14 + *(int *)(this + 0x14));
        if ((sVar2 == 0xd) || (sVar2 == 9)) {
          if (*(int *)((*(int *)(*(int *)(this + 0x14) + iVar5 + 0x10) + 3 +
                        *(int *)(*(int *)(this + 0x14) + iVar5 + 4) & 0xfffffffcU) + 4 +
                      *(int *)(this + 8)) != 0) goto LAB_0046d86b;
          iVar3 = *(int *)(this + 0x14) + iVar5;
          puVar4 = (uchar *)(*(int *)(iVar3 + 4) + *(int *)(this + 8));
        }
        else {
          iVar3 = *(int *)(this + 0x14) + iVar5;
          puVar4 = (uchar *)(*(int *)(iVar3 + 4) + *(int *)(this + 8));
        }
        CAccessorBase::FreeType(*(ushort *)(iVar3 + 0x14),puVar4,param_1);
      }
      else if (((*(int *)((*(int *)(*(int *)(this + 0x14) + iVar5 + 0x10) + 3 +
                           *(int *)(*(int *)(this + 0x14) + iVar5 + 4) & 0xfffffffcU) + 4 +
                         *(int *)(this + 8)) != 3) &&
               (piVar1 = (int *)(*(int *)(iVar5 + 4 + *(int *)(this + 0x14)) + *(int *)(this + 8)),
               piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
        CoTaskMemFree((LPVOID)*piVar1);
        *piVar1 = 0;
      }
LAB_0046d86b:
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x30;
    } while (local_8 < *(uint *)(this + 0xc));
  }
  return;
}

