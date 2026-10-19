// Address: 0x0046b447
// Name: CreateControlCommon
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual long __thiscall COleControlSite::CreateControlCommon(class CWnd *,struct
   _GUID const &,class CControlCreationInfo const &,char const *,unsigned long,struct tagPOINT const
   *,struct tagSIZE const *,unsigned int,class CFile *,int,wchar_t *)
    protected: virtual long __thiscall COleControlSite::CreateControlCommon(class CWnd *,struct
   _GUID const &,class CControlCreationInfo const &,wchar_t const *,unsigned long,struct tagPOINT
   const *,struct tagSIZE const *,unsigned int,class CFile *,int,wchar_t *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CreateControlCommon(void *this,int param_1,undefined4 param_2,CControlCreationInfo *param_3,
                   int param_4,uint param_5,tagPOINT *param_6,tagSIZE *param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  int *piVar2;
  tagSIZE tVar3;
  _AFX_THREAD_STATE *p_Var4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  CClientDC local_4c [20];
  CRect local_38 [16];
  CRect local_28 [16];
  tagSIZE local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x46b453;
  *(undefined4 *)((int)this + 0x24) = 0;
  if (param_1 != 0) {
    *(int *)((int)this + 0x28) = param_1;
    *(void **)(param_1 + 0x50) = this;
  }
  p_Var4 = AfxGetThreadState();
  if ((*(int *)(p_Var4 + 0x160) == 0) && (iVar5 = AfxOleInit(), iVar5 == 0)) {
    return -0x7fffbffb;
  }
  iVar5 = CControlCreationInfo::IsManaged(param_3);
  if (iVar5 == 0) {
    puVar6 = (undefined1 *)(**(code **)(*(int *)this + 200))(param_2,param_9,param_10,param_11);
  }
  else {
    puVar6 = (undefined1 *)(**(code **)(*(int *)this + 0xcc))(param_3);
  }
  if ((int)puVar6 < 0) {
    return (int)puVar6;
  }
  if ((*(int *)((int)this + 0x50) == 0) ||
     (*(undefined4 *)((int)this + 0x2c) = param_8, param_6 == (tagPOINT *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (param_7 == (tagSIZE *)0x0) {
    CClientDC::CClientDC(local_4c,(CWnd *)0x0);
    local_8 = 0;
    (**(code **)(**(int **)((int)this + 0x50) + 0x48))(*(int **)((int)this + 0x50),1,local_18);
    CDC::HIMETRICtoDP((CDC *)local_4c,local_18);
    tVar3.cy = local_18[0].cy;
    tVar3.cx = local_18[0].cx;
    puVar7 = (undefined4 *)CRect::CRect(local_28,*param_6,tVar3);
    local_8 = 0xffffffff;
    *(undefined4 *)((int)this + 0x30) = *puVar7;
    *(undefined4 *)((int)this + 0x34) = puVar7[1];
    *(undefined4 *)((int)this + 0x38) = puVar7[2];
    *(undefined4 *)((int)this + 0x3c) = puVar7[3];
    CClientDC::~CClientDC(local_4c);
  }
  else {
    puVar7 = (undefined4 *)CRect::CRect(local_38,*param_6,*param_7);
    *(undefined4 *)((int)this + 0x30) = *puVar7;
    *(undefined4 *)((int)this + 0x34) = puVar7[1];
    *(undefined4 *)((int)this + 0x38) = puVar7[2];
    *(undefined4 *)((int)this + 0x3c) = puVar7[3];
  }
  *(undefined4 *)((int)this + 0x68) = 0x30000;
  if ((*(uint *)((int)this + 0x70) & 0x1000) != 0) {
    *(undefined4 *)((int)this + 0x68) = 0x30001;
  }
  if ((*(uint *)((int)this + 0x70) & 0x400) != 0) {
    param_5 = param_5 & 0xefffffff;
  }
  *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x68) & param_5;
  if (puVar6 != &DAT_00000001) {
    uVar8 = COleControlSite::ConnectSink
                      (this,(_GUID *)((int)this + 0x40),(IUnknown *)((int)this + 0xdc));
    *(ulong *)((int)this + 0x60) = uVar8;
    uVar8 = COleControlSite::ConnectSink(this,(_GUID *)&DAT_004ab7ec,(IUnknown *)((int)this + 0xd8))
    ;
    *(ulong *)((int)this + 100) = uVar8;
  }
  uVar8 = COleControlSite::ConnectSink(this,(_GUID *)&DAT_004ab5dc,(IUnknown *)((int)this + 0xe4));
  *(ulong *)((int)this + 0x8c) = uVar8;
  COleControlSite::SetExtent(this);
  piVar1 = (int *)((int)this + 0x54);
  param_3 = (CControlCreationInfo *)
            (**(code **)**(undefined4 **)((int)this + 0x50))
                      (*(undefined4 **)((int)this + 0x50),&DAT_004ab64c,piVar1);
  if (-1 < (int)param_3) {
    if ((param_5 & 0x10000000) == 0) {
      OffsetRect((LPRECT)((int)this + 0x30),-32000,-32000);
      param_3 = (CControlCreationInfo *)(**(code **)(*(int *)this + 0x5c))(0xfffffffb,0);
      if (((int)param_3 < 0) ||
         (param_3 = (CControlCreationInfo *)(**(code **)(*(int *)this + 0x5c))(0xfffffffd,0),
         (int)param_3 < 0)) goto LAB_0046b673;
      OffsetRect((LPRECT)((int)this + 0x30),32000,32000);
      param_3 = (CControlCreationInfo *)
                (**(code **)(*(int *)*piVar1 + 0x1c))
                          ((int *)*piVar1,(int)this + 0x30,(int)this + 0x30);
    }
    else {
      param_3 = (CControlCreationInfo *)(**(code **)(*(int *)this + 0x5c))(0xfffffffb,0);
    }
    if (-1 < (int)param_3) {
      *(void **)(*(int *)((int)this + 0x20) + 0x70) = this;
      COleControlSite::GetControlInfo(this);
      goto LAB_0046b6cd;
    }
  }
LAB_0046b673:
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  COleControlSite::DisconnectSink(this,(_GUID *)((int)this + 0x40),*(ulong *)((int)this + 0x60));
  COleControlSite::DisconnectSink(this,(_GUID *)&DAT_004ab7ec,*(ulong *)((int)this + 100));
  COleControlSite::DisconnectSink(this,(_GUID *)&DAT_004ab5dc,*(ulong *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  (**(code **)(**(int **)((int)this + 0x50) + 8))(*(int **)((int)this + 0x50));
  *(undefined4 *)((int)this + 0x50) = 0;
  if ((int)param_3 < 0) {
    return (int)param_3;
  }
LAB_0046b6cd:
  COleControlSite::AttachWindow(this);
  if (param_4 != 0) {
    (**(code **)(*(int *)this + 0x88))(param_4);
  }
  (**(code **)(*(int *)this + 0x80))(0,param_5 & 0x8800000 | *(uint *)((int)this + 0x6c),0);
  return (int)param_3;
}

