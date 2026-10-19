// Address: 0x0046b941
// Name: COleControlSite::CreateOrLoad
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall COleControlSite::CreateOrLoad(struct _GUID const &,class
   CFile *,int,wchar_t *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
COleControlSite::CreateOrLoad
          (COleControlSite *this,_GUID *param_1,CFile *param_2,int param_3,wchar_t *param_4)

{
  COleControlSite *pCVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  CFile *pCVar6;
  _GUID *p_Var7;
  undefined8 uVar8;
  CArchive local_78 [72];
  SIZE_T local_30 [2];
  COleControlSite *local_28;
  int local_24;
  CFile *local_20;
  IStorage *local_1c;
  _GUID *local_18;
  long local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x46b94d;
  pCVar1 = this + 0x50;
  local_14 = 0;
  local_28 = this;
  if ((*(void **)pCVar1 == (void *)0x0) &&
     (local_14 = _AfxCoCreateInstanceLic
                           (param_1,(IUnknown *)0x0,3,(_GUID *)&DAT_004ab66c,(void **)pCVar1,param_4
                           ), local_14 < 0)) {
    return local_14;
  }
  param_1 = (_GUID *)0x0;
  local_18 = (_GUID *)0x0;
  param_4 = (wchar_t *)0x0;
  GetEventIID(this,(_GUID *)(this + 0x40));
  local_24 = (**(code **)(*(int *)this + 0xc0))();
  if (((local_24 != 0) ||
      ((**(code **)(**(int **)pCVar1 + 0x58))(*(int **)pCVar1,1,this + 0x70),
      (*(uint *)(this + 0x70) & 0x20000) == 0)) ||
     (local_14 = (**(code **)(**(int **)pCVar1 + 0xc))(*(int **)pCVar1,this + 200), -1 < local_14))
  {
    pCVar6 = param_2;
    if (param_2 == (CFile *)0x0) {
      if (param_3 == 0) {
LAB_0046ba42:
        iVar3 = (**(code **)**(undefined4 **)pCVar1)(*(undefined4 **)pCVar1,&DAT_004ab7cc,&param_1);
        if (iVar3 < 0) goto LAB_0046baac;
        if (pCVar6 == (CFile *)0x0) {
          local_14 = (**(code **)(param_1->Data1 + 0x20))(param_1);
          p_Var7 = param_1;
        }
        else {
          CArchive::CArchive(local_78,pCVar6,1,0x1000,(void *)0x0);
          local_8 = 0;
          CArchiveStream::CArchiveStream((CArchiveStream *)local_30,local_78);
          local_14 = (**(code **)(param_1->Data1 + 0x14))(param_1,local_30);
          local_8 = 0xffffffff;
          CArchive::~CArchive(local_78);
          p_Var7 = param_1;
        }
LAB_0046bbdf:
        (**(code **)(p_Var7->Data1 + 8))(p_Var7);
        goto LAB_0046bbe5;
      }
LAB_0046baac:
      iVar3 = (**(code **)**(undefined4 **)pCVar1)(*(undefined4 **)pCVar1,&DAT_004ab6bc,&local_18);
      if (-1 < iVar3) {
        if (pCVar6 == (CFile *)0x0) {
          param_2 = (CFile *)0x0;
          local_14 = CreateILockBytesOnHGlobal((HGLOBAL)0x0,1,(LPLOCKBYTES *)&param_2);
          p_Var7 = local_18;
          if (-1 < local_14) {
            param_3 = 0;
            local_14 = StgCreateDocfileOnILockBytes
                                 ((ILockBytes *)param_2,0x1012,0,(IStorage **)&param_3);
            pCVar6 = param_2;
            if (-1 < local_14) {
              local_14 = (**(code **)(local_18->Data1 + 0x14))(local_18,param_3);
              (**(code **)(*(int *)param_3 + 8))(param_3);
              pCVar6 = param_2;
            }
LAB_0046bbcd:
            (**(code **)(*(int *)pCVar6 + 8))(pCVar6);
            p_Var7 = local_18;
          }
        }
        else if (param_3 == 0) {
          local_14 = -0x7fff0001;
          p_Var7 = local_18;
        }
        else {
          uVar8 = (**(code **)(*(int *)pCVar6 + 0x30))();
          local_30[0] = (SIZE_T)uVar8;
          if ((((int)((ulonglong)uVar8 >> 0x20) == 0) && (local_30[0] != 0xffffffff)) &&
             ((param_3 = (int)GlobalAlloc(0,local_30[0]), (HGLOBAL)param_3 != (HGLOBAL)0x0 &&
              (pvVar5 = GlobalLock((HGLOBAL)param_3), pvVar5 != (LPVOID)0x0)))) {
            (**(code **)(*(int *)pCVar6 + 0x34))(pvVar5,local_30[0]);
            GlobalUnlock((HGLOBAL)param_3);
          }
          else {
            local_14 = -0x7ff8fff2;
            param_3 = 0;
          }
          local_20 = (CFile *)0x0;
          p_Var7 = local_18;
          if ((param_3 != 0) &&
             (local_14 = CreateILockBytesOnHGlobal((HGLOBAL)param_3,1,(LPLOCKBYTES *)&local_20),
             p_Var7 = local_18, -1 < local_14)) {
            local_1c = (IStorage *)0x0;
            local_14 = StgOpenStorageOnILockBytes
                                 ((ILockBytes *)local_20,(IStorage *)0x0,0x12,(SNB)0x0,0,&local_1c);
            pCVar6 = local_20;
            if (-1 < local_14) {
              local_14 = (**(code **)(local_18->Data1 + 0x18))(local_18,local_1c);
              (*local_1c->lpVtbl->Release)(local_1c);
              pCVar6 = local_20;
            }
            goto LAB_0046bbcd;
          }
        }
        goto LAB_0046bbdf;
      }
    }
    else {
      if (param_3 != 0) goto LAB_0046baac;
      iVar3 = (**(code **)**(undefined4 **)pCVar1)(*(undefined4 **)pCVar1,&DAT_004ab7dc,&param_4);
      if ((iVar3 < 0) || (iVar3 = (**(code **)(*(int *)pCVar6 + 0x50))(3,0,0,0), iVar3 == 0))
      goto LAB_0046ba42;
      param_3 = 0;
      uVar4 = (**(code **)(*(int *)pCVar6 + 0x50))(0,0xffffffff,&param_3,&param_2);
      local_14 = (**(code **)(*(int *)param_4 + 0x14))(param_4,param_3,uVar4);
      (**(code **)(*(int *)param_4 + 8))(param_4);
      param_4 = (wchar_t *)0x0;
LAB_0046bbe5:
      if (local_14 < 0) goto LAB_0046bc12;
      if ((local_24 == 0) && ((*(uint *)(local_28 + 0x70) & 0x20000) == 0)) {
        local_14 = (**(code **)(**(int **)pCVar1 + 0xc))(*(int **)pCVar1,local_28 + 200);
      }
    }
    if (-1 < local_14) goto LAB_0046bc2a;
  }
LAB_0046bc12:
  piVar2 = *(int **)pCVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x18))(piVar2,1);
    (**(code **)(**(int **)pCVar1 + 8))(*(int **)pCVar1);
    *(void **)pCVar1 = (void *)0x0;
  }
LAB_0046bc2a:
  if (param_4 != (wchar_t *)0x0) {
    (**(code **)(*(int *)param_4 + 8))(param_4);
  }
  if ((local_24 != 0) && (-1 < local_14)) {
    local_14 = 1;
  }
  return local_14;
}

