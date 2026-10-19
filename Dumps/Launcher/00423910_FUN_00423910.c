// Address: 0x00423910
// Name: FUN_00423910
// Category: Launcher


void FUN_00423910(void)

{
  code *pcVar1;
  undefined *puVar2;
  int *unaff_ESI;
  int extraout_var;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (unaff_ESI[0x1690] != 0) {
    FUN_004035c0(&stack0xffffffe4,(short *)&DAT_004b097c);
    local_4 = 0;
    iVar3 = extraout_var;
    puVar2 = FUN_0040a2b0();
    local_4 = 0xffffffff;
    FUN_0040a4b0((int)puVar2,iVar3);
    puVar2 = FUN_00407210();
    *(undefined4 *)(puVar2 + 0x20) = 9;
    puVar2 = FUN_0040a2b0();
    FUN_0040a6e0((int)puVar2);
    pcVar1 = *(code **)(*unaff_ESI + 0x170);
    unaff_ESI[0x1690] = 0;
    (*pcVar1)();
    puVar2 = FUN_00407210();
    FUN_00407280((int)puVar2,(HWND)unaff_ESI[8]);
    FUN_00431760();
    FUN_00431850(unaff_ESI[0x23]);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x1052),*(int *)(iVar3 + 0x80),*(int *)(iVar3 + 0x84),
                     *(int *)(iVar3 + 0x88) - *(int *)(iVar3 + 0x80),
                     *(int *)(iVar3 + 0x8c) - *(int *)(iVar3 + 0x84),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x106b),*(int *)(iVar3 + 0xa0),*(int *)(iVar3 + 0xa4),
                     *(int *)(iVar3 + 0xa8) - *(int *)(iVar3 + 0xa0),
                     *(int *)(iVar3 + 0xac) - *(int *)(iVar3 + 0xa4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x1084),*(int *)(iVar3 + 0xc0),*(int *)(iVar3 + 0xc4),
                     *(int *)(iVar3 + 200) - *(int *)(iVar3 + 0xc0),
                     *(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 0xc4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x109d),*(int *)(iVar3 + 0xb0),*(int *)(iVar3 + 0xb4),
                     *(int *)(iVar3 + 0xb8) - *(int *)(iVar3 + 0xb0),
                     *(int *)(iVar3 + 0xbc) - *(int *)(iVar3 + 0xb4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x10b6),*(int *)(iVar3 + 0x90),*(int *)(iVar3 + 0x94),
                     *(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x90),
                     *(int *)(iVar3 + 0x9c) - *(int *)(iVar3 + 0x94),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x10cf),*(int *)(iVar3 + 0xd0),*(int *)(iVar3 + 0xd4),
                     *(int *)(iVar3 + 0xd8) - *(int *)(iVar3 + 0xd0),
                     *(int *)(iVar3 + 0xdc) - *(int *)(iVar3 + 0xd4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x10e8),*(int *)(iVar3 + 0xe0),*(int *)(iVar3 + 0xe4),
                     *(int *)(iVar3 + 0xe8) - *(int *)(iVar3 + 0xe0),
                     *(int *)(iVar3 + 0xec) - *(int *)(iVar3 + 0xe4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x1101),*(int *)(iVar3 + 0xf0),*(int *)(iVar3 + 0xf4),
                     *(int *)(iVar3 + 0xf8) - *(int *)(iVar3 + 0xf0),
                     *(int *)(iVar3 + 0xfc) - *(int *)(iVar3 + 0xf4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x11a0),*(int *)(iVar3 + 0x1c0),*(int *)(iVar3 + 0x1c4),
                     *(int *)(iVar3 + 0x1c8) - *(int *)(iVar3 + 0x1c0),
                     *(int *)(iVar3 + 0x1cc) - *(int *)(iVar3 + 0x1c4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x113c),*(int *)(iVar3 + 0x180),*(int *)(iVar3 + 0x184),
                     *(int *)(iVar3 + 0x188) - *(int *)(iVar3 + 0x180),
                     *(int *)(iVar3 + 0x18c) - *(int *)(iVar3 + 0x184),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x1155),*(int *)(iVar3 + 400),*(int *)(iVar3 + 0x194),
                     *(int *)(iVar3 + 0x198) - *(int *)(iVar3 + 400),
                     *(int *)(iVar3 + 0x19c) - *(int *)(iVar3 + 0x194),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x116e),*(int *)(iVar3 + 0x1a0),*(int *)(iVar3 + 0x1a4),
                     *(int *)(iVar3 + 0x1a8) - *(int *)(iVar3 + 0x1a0),
                     *(int *)(iVar3 + 0x1ac) - *(int *)(iVar3 + 0x1a4),1);
    iVar3 = unaff_ESI[0x22];
    CWnd::MoveWindow((CWnd *)(unaff_ESI + 0x1187),*(int *)(iVar3 + 0x1b0),*(int *)(iVar3 + 0x1b4),
                     *(int *)(iVar3 + 0x1b8) - *(int *)(iVar3 + 0x1b0),
                     *(int *)(iVar3 + 0x1bc) - *(int *)(iVar3 + 0x1b4),1);
  }
  ExceptionList = local_c;
  return;
}

