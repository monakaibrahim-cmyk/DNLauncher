// Address: 0x00491601
// Name: __except1
// Category: MFC_CRT


/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2005 Release */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  int iVar3;
  
  local_14 = DAT_004c3750 ^ (uint)local_90;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  cVar2 = __errcode((byte)param_1);
  iVar3 = CONCAT31(extraout_var_00,cVar2);
  if ((DAT_004c4970 == 0) && (iVar3 != 0)) {
    __umatherr(iVar3,param_2);
  }
  else {
    __set_errno_from_matherr(iVar3);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)local_90);
  return;
}

