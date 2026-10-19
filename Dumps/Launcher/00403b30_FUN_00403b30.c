// Address: 0x00403b30
// Name: FUN_00403b30
// Category: Launcher


undefined4 FUN_00403b30(LPRECT param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  puVar2 = FUN_004037b0();
  cVar1 = FUN_004010f0(L"FirstPatchControlData.xml",(uint)puVar2,17000);
  if (cVar1 == '\0') {
    FUN_00418fd0(L"ControlData ResourceXML파일 불러오기 실패!!");
    return 0x80004005;
  }
  uVar3 = FUN_004015d0(extraout_ECX,param_1,(int)puVar2,param_2);
  if ((char)uVar3 == '\0') {
    FUN_00418fd0(L"ControlData Position Set Failed");
    return 0x80004005;
  }
  return 0;
}

