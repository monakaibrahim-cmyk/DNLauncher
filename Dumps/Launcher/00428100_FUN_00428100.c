// Address: 0x00428100
// Name: FUN_00428100
// Category: Launcher


uint __fastcall FUN_00428100(uint param_1,byte *param_2)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  uVar19 = param_1 >> 0x10;
  uVar2 = param_1 & 0xffff;
  if (in_EAX == 1) {
    uVar2 = uVar2 + *param_2;
    if (0xfff0 < uVar2) {
      uVar2 = uVar2 - 0xfff1;
    }
    uVar19 = uVar19 + uVar2;
    if (0xfff0 < uVar19) {
      return (uVar19 - 0xfff1) * 0x10000 | uVar2;
    }
  }
  else {
    if (param_2 == (byte *)0x0) {
      return 1;
    }
    if (in_EAX < 0x10) {
      for (; in_EAX != 0; in_EAX = in_EAX - 1) {
        uVar2 = uVar2 + *param_2;
        param_2 = param_2 + 1;
        uVar19 = uVar19 + uVar2;
      }
      if (0xfff0 < uVar2) {
        uVar2 = uVar2 - 0xfff1;
      }
      return ((uVar19 / 0xfff1) * 0xf + uVar19) * 0x10000 | uVar2;
    }
    if (0x15af < in_EAX) {
      uVar18 = in_EAX / 0x15b0;
      do {
        in_EAX = in_EAX - 0x15b0;
        iVar1 = 0x15b;
        do {
          iVar3 = uVar2 + *param_2;
          iVar4 = iVar3 + (uint)param_2[1];
          iVar5 = iVar4 + (uint)param_2[2];
          iVar6 = iVar5 + (uint)param_2[3];
          iVar7 = iVar6 + (uint)param_2[4];
          iVar8 = iVar7 + (uint)param_2[5];
          iVar9 = iVar8 + (uint)param_2[6];
          iVar10 = iVar9 + (uint)param_2[7];
          iVar11 = iVar10 + (uint)param_2[8];
          iVar12 = iVar11 + (uint)param_2[9];
          iVar13 = iVar12 + (uint)param_2[10];
          iVar14 = iVar13 + (uint)param_2[0xb];
          iVar15 = iVar14 + (uint)param_2[0xc];
          iVar16 = iVar15 + (uint)param_2[0xd];
          iVar17 = iVar16 + (uint)param_2[0xe];
          uVar2 = iVar17 + (uint)param_2[0xf];
          uVar19 = uVar19 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11
                   + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
          param_2 = param_2 + 0x10;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar2 = uVar2 % 0xfff1;
        uVar19 = uVar19 % 0xfff1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if (in_EAX != 0) {
      if (0xf < in_EAX) {
        uVar18 = in_EAX >> 4;
        do {
          iVar1 = uVar2 + *param_2;
          iVar3 = iVar1 + (uint)param_2[1];
          iVar4 = iVar3 + (uint)param_2[2];
          iVar5 = iVar4 + (uint)param_2[3];
          iVar6 = iVar5 + (uint)param_2[4];
          iVar7 = iVar6 + (uint)param_2[5];
          iVar8 = iVar7 + (uint)param_2[6];
          iVar9 = iVar8 + (uint)param_2[7];
          iVar10 = iVar9 + (uint)param_2[8];
          iVar11 = iVar10 + (uint)param_2[9];
          iVar12 = iVar11 + (uint)param_2[10];
          iVar13 = iVar12 + (uint)param_2[0xb];
          iVar14 = iVar13 + (uint)param_2[0xc];
          iVar15 = iVar14 + (uint)param_2[0xd];
          iVar16 = iVar15 + (uint)param_2[0xe];
          uVar2 = iVar16 + (uint)param_2[0xf];
          in_EAX = in_EAX - 0x10;
          uVar19 = uVar19 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                   iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + uVar2;
          param_2 = param_2 + 0x10;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      for (; in_EAX != 0; in_EAX = in_EAX - 1) {
        uVar2 = uVar2 + *param_2;
        param_2 = param_2 + 1;
        uVar19 = uVar19 + uVar2;
      }
      uVar2 = uVar2 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
    }
  }
  return uVar19 << 0x10 | uVar2;
}

