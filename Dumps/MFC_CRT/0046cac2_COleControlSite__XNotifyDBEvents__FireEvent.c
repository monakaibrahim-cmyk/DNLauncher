// Address: 0x0046cac2
// Name: COleControlSite::XNotifyDBEvents::FireEvent
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall COleControlSite::XNotifyDBEvents::FireEvent(unsigned long,unsigned
   long,struct tagDBNOTIFYREASON * const,enum DSCSTATE)
   
   Library: Visual Studio 2005 Release */

long __thiscall
COleControlSite::XNotifyDBEvents::FireEvent
          (XNotifyDBEvents *this,ulong param_1,ulong param_2,tagDBNOTIFYREASON *param_3,
          DSCSTATE param_4)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_10;
  DSCSTATE local_c;
  undefined4 local_8;
  
  if (((param_1 & 3) == 0) || (uVar1 = 0, param_2 == 0)) {
    return 0;
  }
LAB_0046cae6:
  switch(*(undefined4 *)param_3) {
  case 1:
    local_8 = 3;
    break;
  case 2:
  case 0x14:
    local_8 = 5;
    break;
  case 3:
  case 9:
  case 10:
  case 0x17:
    local_8 = 6;
    break;
  default:
    goto switchD_0046caf5_caseD_4;
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x15:
    local_8 = 7;
    break;
  case 0x18:
    local_8 = 2;
    break;
  case 0x19:
    local_8 = 1;
    break;
  case 0x1f:
    local_8 = 4;
  }
  local_24 = 0xffffffff;
  local_28 = 3;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = param_4;
  OnEvent((COleControlSite *)(this + -0xe4),(AFX_EVENT *)&local_28);
  return local_10;
switchD_0046caf5_caseD_4:
  uVar1 = uVar1 + 1;
  param_3 = param_3 + 0x24;
  if (param_2 <= uVar1) {
    return 0;
  }
  goto LAB_0046cae6;
}

