// Address: 0x0046841b
// Name: CArchive::CArchive
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CArchive::CArchive(class CFile *,unsigned int,int,void *)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall
CArchive::CArchive(CArchive *this,CFile *param_1,uint param_2,int param_3,void *param_4)

{
  CFile *pCVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(this + 0x14));
  pCVar1 = param_1;
  if (param_1 == (CFile *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  puVar2 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x18))(&param_1);
  FID_conflict_operator_(this + 0x14,puVar2);
  FUN_004031b0((undefined4 *)(param_1 + -0x10));
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(uint *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0x1c) = 1;
  *(CFile **)(this + 0x24) = pCVar1;
  *(uint *)(this + 0x40) = (-(uint)((~(byte)param_2 & 1) != 0) & 0xffffffd0) + 0x40;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x44) = 0x89;
  *(void **)(this + 0x30) = param_4;
  *(undefined4 *)(this + 8) = 0;
  uVar3 = (**(code **)(*(int *)pCVar1 + 0x50))(3,0,0,0);
  *(uint *)(this + 0xc) = uVar3 & 2;
  if (param_3 < 0x80) {
    *(undefined4 *)(this + 0x20) = 0x80;
    *(undefined4 *)(this + 0x30) = 0;
  }
  else {
    *(int *)(this + 0x20) = param_3;
  }
  iVar6 = *(int *)(this + 0x20);
  if (*(int *)(this + 0x30) == 0) {
    uVar3 = (**(code **)(**(int **)(this + 0x24) + 0x50))(3,0,0,0);
    *(uint *)(this + 8) = uVar3 & 1;
    if ((uVar3 & 1) == 0) {
      pvVar4 = FUN_00452728(*(size_t *)(this + 0x20));
      *(void **)(this + 0x30) = pvVar4;
      *(undefined4 *)(this + 0x1c) = 0;
    }
    else {
      iVar6 = 0;
    }
  }
  iVar6 = *(int *)(this + 0x30) + iVar6;
  *(int *)(this + 0x2c) = iVar6;
  iVar5 = *(int *)(this + 0x30);
  if (((byte)this[0x18] & 1) != 0) {
    iVar5 = iVar6;
  }
  *(int *)(this + 0x28) = iVar5;
  return this;
}

