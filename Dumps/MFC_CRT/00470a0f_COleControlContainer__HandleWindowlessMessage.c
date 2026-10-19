// Address: 0x00470a0f
// Name: COleControlContainer::HandleWindowlessMessage
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::HandleWindowlessMessage(unsigned
   int,unsigned int,long,long *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
COleControlContainer::HandleWindowlessMessage
          (COleControlContainer *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  void *pvVar1;
  POINT pt;
  uint uVar2;
  void **ppvVar3;
  BOOL BVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = param_1;
  *param_4 = 0;
  if (param_1 < 0x110) {
    if (((param_1 < 0x10d) && (param_1 != 0x1f)) && (param_1 != 0x53)) {
      if (param_1 < 0x100) {
        return 0;
      }
      if ((0x105 < param_1) && (param_1 != 0x107)) {
        return 0;
      }
    }
  }
  else {
    if (param_1 < 0x200) {
      return 0;
    }
    if (param_1 < 0x20a) {
      iVar6 = *(int *)(this + 0x6c);
      if (iVar6 == 0) {
        param_1 = *(uint *)(this + 0x44);
        if (param_1 == 0) {
          return 0;
        }
        do {
          ppvVar3 = CPtrList::GetNext((CPtrList *)(this + 0x40),(__POSITION **)&param_1);
          pvVar1 = *ppvVar3;
          iVar6 = *(int *)((int)pvVar1 + 4);
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0x74) != 0)) {
            pt.y = (int)(short)((uint)param_3 >> 0x10);
            pt.x = (int)(short)param_3;
            BVar4 = PtInRect((RECT *)(iVar6 + 0x30),pt);
            if (BVar4 != 0) {
              iVar6 = *(int *)((int)pvVar1 + 4);
              if (iVar6 == 0) {
                return 0;
              }
              break;
            }
          }
          if (param_1 == 0) {
            return 0;
          }
        } while( true );
      }
      piVar5 = *(int **)(iVar6 + 0x5c);
      goto LAB_00470b03;
    }
    if (param_1 < 0x281) {
      return 0;
    }
    if (0x286 < param_1) {
      if (param_1 < 0x290) {
        return 0;
      }
      if (0x291 < param_1) {
        return 0;
      }
    }
  }
  iVar6 = *(int *)(this + 0x70);
  if ((iVar6 == 0) || (*(int *)(iVar6 + 0x5c) == 0)) {
    return 0;
  }
  piVar5 = *(int **)(iVar6 + 0x5c);
LAB_00470b03:
  iVar6 = (**(code **)(*piVar5 + 0x24))(piVar5,uVar2,param_2,param_3,param_4);
  return (uint)(iVar6 == 0);
}

