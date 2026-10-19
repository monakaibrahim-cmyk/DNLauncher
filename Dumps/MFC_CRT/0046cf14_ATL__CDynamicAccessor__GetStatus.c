// Address: 0x0046cf14
// Name: ATL::CDynamicAccessor::GetStatus
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall ATL::CDynamicAccessor::GetStatus(unsigned long,unsigned long *)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall
ATL::CDynamicAccessor::GetStatus(CDynamicAccessor *this,ulong param_1,ulong *param_2)

{
  ulong *puVar1;
  bool bVar2;
  int iVar3;
  
  puVar1 = param_2;
  if (param_2 != (ulong *)0x0) {
    bVar2 = TranslateColumnNo(this,&param_1);
    if (bVar2) {
      iVar3 = param_1 * 0x30 + *(int *)(this + 0x14);
      *puVar1 = *(ulong *)((*(int *)(iVar3 + 0x10) + 3 + *(int *)(iVar3 + 4) & 0xfffffffcU) + 4 +
                          *(int *)(this + 8));
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80004005);
}

