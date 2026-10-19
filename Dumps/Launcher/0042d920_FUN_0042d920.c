// Address: 0x0042d920
// Name: FUN_0042d920
// Category: Launcher


undefined4 * __thiscall FUN_0042d920(void *this,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004981b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042d610(this,1);
  local_4 = 0;
  *param_1 = TiXmlElement::vftable;
  FUN_0042e920();
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[7] = 0;
  param_1[6] = 0;
  pcVar2 = unaff_EDI;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(param_1 + 8,(undefined4 *)unaff_EDI,(int)pcVar2 - (int)(unaff_EDI + 1));
  ExceptionList = local_c;
  return param_1;
}

