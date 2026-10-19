// Address: 0x00431760
// Name: FUN_00431760
// Category: Utility


void FUN_00431760(void)

{
  int *piVar1;
  void *this;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  void **ppvVar6;
  wchar_t *pwVar7;
  void *local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049a708;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004037b0();
  iVar3 = FUN_00401920();
  ppvVar6 = local_1c;
  FUN_004037b0();
  FUN_00401860((int *)ppvVar6);
  local_c = 0;
  if ((int)(*(uint *)((int)local_1c[0] + -8) | 1U - *(int *)((int)local_1c[0] + -4)) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT<char,0> *)local_1c,0);
  }
  this = local_1c[0];
  puVar4 = FUN_004037b0();
  cVar2 = FUN_004010f0(this,(uint)puVar4,(ushort)iVar3);
  if (cVar2 == '\0') {
    pwVar7 = L"ControlData ResourceXML파일 불러오기 실패!!";
  }
  else {
    uVar5 = FUN_004015d0(extraout_ECX,(LPRECT)&DAT_004cbef0,(int)puVar4,0x22);
    if ((char)uVar5 != '\0') goto LAB_00431810;
    pwVar7 = L"ControlData Position Set Failed";
  }
  FUN_00418fd0(pwVar7);
LAB_00431810:
  local_c = 0xffffffff;
  piVar1 = (int *)((int)local_1c[0] + -4);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)((int)local_1c[0] + -0x10) + 4))
              ((undefined4 *)((int)local_1c[0] + -0x10));
  }
  ExceptionList = local_14;
  return;
}

