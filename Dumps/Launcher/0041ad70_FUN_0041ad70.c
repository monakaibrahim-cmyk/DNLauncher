// Address: 0x0041ad70
// Name: FUN_0041ad70
// Category: Launcher


int FUN_0041ad70(CWnd *param_1,CClientDC *param_2,int param_3,int param_4)

{
  CWnd *pCVar1;
  CClientDC *pCVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  int c;
  CClientDC *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *unaff_EDI;
  uint uStack_44;
  tagSIZE tStack_40;
  tagSIZE tStack_38;
  tagSIZE tStack_30;
  tagSIZE tStack_28;
  CClientDC local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498408;
  local_c = ExceptionList;
  uVar6 = DAT_004c3750 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  if (unaff_EDI != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)0x0) {
    this = param_2;
    if (param_2 == (CClientDC *)0x0) {
      CClientDC::CClientDC(local_20,param_1);
      this = local_20;
      CClientDC::~CClientDC(this);
    }
    c = *(int *)(*(int *)unaff_EDI + -0xc);
    FUN_0041c0b0(unaff_EDI,(CSimpleStringT<wchar_t,0> *)&param_1,3);
    local_4 = 0;
    bVar5 = FUN_0041c130("...");
    param_2 = (CClientDC *)CONCAT31(param_2._1_3_,bVar5);
    local_4 = 0xffffffff;
    pCVar1 = param_1 + -4;
    LOCK();
    iVar4 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(param_1 + -0x10) + 4))(param_1 + -0x10,uVar6);
    }
    if ((char)param_2 != '\0') {
      c = c + -3;
      puVar7 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
                         (unaff_EDI,(int)&param_2);
      local_4 = 1;
      FID_conflict_operator_(unaff_EDI,puVar7);
      local_4 = 0xffffffff;
      pCVar2 = param_2 + -4;
      LOCK();
      iVar4 = *(int *)pCVar2;
      *(int *)pCVar2 = *(int *)pCVar2 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(param_2 + -0x10) + 4))(param_2 + -0x10);
      }
    }
    if (c != 0) {
      GetTextExtentPoint32W(*(HDC *)(this + 8),*(LPCWSTR *)unaff_EDI,c,&tStack_38);
      if (param_3 < tStack_38.cx + param_4) {
        if (*(int *)(*(ushort **)unaff_EDI + -6) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00403200((undefined4 *)0x80070057);
        }
        uStack_44 = (uint)**(ushort **)unaff_EDI;
        GetTextExtentPoint32W(*(HDC *)(this + 8),(LPCWSTR)&lpString_004b0250,8,&tStack_30);
        GetTextExtentPoint32W(*(HDC *)(this + 8),*(LPCWSTR *)unaff_EDI,c,&tStack_40);
        tStack_38.cx = tStack_40.cx;
        tStack_38.cy = tStack_40.cy;
        GetTextExtentPoint32W(*(HDC *)(this + 8),(LPCWSTR)&uStack_44,2,&tStack_28);
        if (tStack_38.cx <= tStack_28.cx + tStack_30.cx) {
          ExceptionList = local_c;
          return -c;
        }
        param_2 = (CClientDC *)0x0;
        if (1 < c) {
          param_4 = (tStack_30.cx >> 1) + param_4;
          do {
            GetTextExtentPoint32W(*(HDC *)(this + 8),*(LPCWSTR *)unaff_EDI,c,&tStack_28);
            if (param_4 + tStack_28.cx <= param_3) break;
            puVar7 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
                               (unaff_EDI,(int)&tStack_40);
            local_4 = 2;
            FID_conflict_operator_(unaff_EDI,puVar7);
            local_4 = 0xffffffff;
            piVar3 = (int *)(tStack_40.cx + -4);
            LOCK();
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1 || iVar4 + -1 < 0) {
              (**(code **)(**(int **)(tStack_40.cx + -0x10) + 4))
                        ((undefined4 *)(tStack_40.cx + -0x10));
            }
            FUN_0041bf90();
            c = *(int *)(*(int *)unaff_EDI + -0xc);
            param_2 = param_2 + 1;
          } while (1 < c);
        }
        FID_conflict_operator_(unaff_EDI,(short *)&lpString_004b0250);
        ExceptionList = local_c;
        return (int)param_2;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

