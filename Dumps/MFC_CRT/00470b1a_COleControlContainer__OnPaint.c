// Address: 0x00470b1a
// Name: COleControlContainer::OnPaint
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::OnPaint(class CDC *)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleControlContainer::OnPaint(COleControlContainer *this,CDC *param_1)

{
  undefined4 *puVar1;
  CDC *pCVar2;
  void **ppvVar3;
  int iVar4;
  undefined4 uVar5;
  int local_c;
  __POSITION *local_8;
  
  pCVar2 = param_1;
  local_8 = *(__POSITION **)(this + 0x44);
  local_c = 0;
  if (local_8 != (__POSITION *)0x0) {
    do {
      ppvVar3 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_8);
      iVar4 = *(int *)((int)*ppvVar3 + 4);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x74) != 0)) {
        param_1 = (CDC *)0x0;
        puVar1 = *(undefined4 **)(*(int *)((int)*ppvVar3 + 4) + 0x50);
        (**(code **)*puVar1)(puVar1,&DAT_004ab62c,&param_1);
        if (param_1 != (CDC *)0x0) {
          if (pCVar2 == (CDC *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(pCVar2 + 4);
          }
          iVar4 = (**(code **)(*(int *)param_1 + 0xc))(param_1,1,0xffffffff,0,0,0,uVar5,0,0,0,0);
          if (-1 < iVar4) {
            local_c = 1;
          }
          (**(code **)(*(int *)param_1 + 8))(param_1);
          param_1 = (CDC *)0x0;
        }
      }
    } while (local_8 != (__POSITION *)0x0);
  }
  return local_c;
}

