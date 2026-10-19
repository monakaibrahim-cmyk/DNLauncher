// Address: 0x0045b9c7
// Name: CDC::LPtoDP
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CDC::LPtoDP(struct tagSIZE *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CDC::LPtoDP(CDC *this,tagSIZE *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long local_14;
  long local_10;
  long local_c;
  long local_8;
  
  FID_conflict_GetWindowExt(this,&local_c);
  FID_conflict_GetWindowExt(this,&local_14);
  lVar1 = _labs(local_c);
  lVar2 = _labs(local_14);
  iVar3 = MulDiv(param_1->cx,lVar2,lVar1);
  param_1->cx = iVar3;
  lVar1 = _labs(local_8);
  lVar2 = _labs(local_10);
  iVar3 = MulDiv(param_1->cy,lVar2,lVar1);
  param_1->cy = iVar3;
  return;
}

