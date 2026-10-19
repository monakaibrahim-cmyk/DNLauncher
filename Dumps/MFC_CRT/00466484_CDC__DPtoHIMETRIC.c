// Address: 0x00466484
// Name: CDC::DPtoHIMETRIC
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDC::DPtoHIMETRIC(struct tagSIZE *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CDC::DPtoHIMETRIC(CDC *this,tagSIZE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_004cab44;
  iVar2 = DAT_004cab40;
  if (this != (CDC *)0x0) {
    iVar1 = GetMapMode(*(HDC *)(this + 8));
    if ((iVar1 < 7) && (iVar1 != 1)) {
      (**(code **)(*(int *)this + 0x34))(3);
      DPtoLP(this,param_1);
      (**(code **)(*(int *)this + 0x34))(iVar1);
      return;
    }
    iVar2 = GetDeviceCaps(*(HDC *)(this + 8),0x58);
    iVar1 = GetDeviceCaps(*(HDC *)(this + 8),0x5a);
  }
  iVar2 = MulDiv(param_1->cx,0x9ec,iVar2);
  param_1->cx = iVar2;
  iVar1 = MulDiv(param_1->cy,0x9ec,iVar1);
  param_1->cy = iVar1;
  return;
}

