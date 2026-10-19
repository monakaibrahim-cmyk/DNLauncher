// Address: 0x0046b33c
// Name: COleControlSite::SetExtent
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall COleControlSite::SetExtent(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlSite::SetExtent(COleControlSite *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CClientDC local_2c [20];
  tagSIZE local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x46b348;
  local_18[0].cx = *(int *)(this + 0x38) - *(int *)(this + 0x30);
  local_18[0].cy = *(int *)(this + 0x3c) - *(int *)(this + 0x34);
  CClientDC::CClientDC(local_2c,(CWnd *)0x0);
  local_8 = 0;
  CDC::DPtoHIMETRIC((CDC *)local_2c,local_18);
  piVar1 = *(int **)(this + 0x50);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,1,local_18);
  if (-1 < iVar2) {
    iVar3 = (**(code **)(**(int **)(this + 0x50) + 0x48))(*(int **)(this + 0x50),1,local_18);
    if (-1 < iVar3) {
      CDC::HIMETRICtoDP((CDC *)local_2c,local_18);
      *(int *)(this + 0x38) = *(int *)(this + 0x30) + local_18[0].cx;
      *(int *)(this + 0x3c) = *(int *)(this + 0x34) + local_18[0].cy;
    }
  }
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_2c);
  return (uint)(-1 < iVar2);
}

