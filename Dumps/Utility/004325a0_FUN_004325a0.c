// Address: 0x004325a0
// Name: FUN_004325a0
// Category: Utility


char * FUN_004325a0(void)

{
  char *pcVar1;
  uint uVar2;
  uint in_EAX;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int unaff_EDI;
  char local_12;
  char local_11;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = *(uint *)(unaff_EDI + 0x7c);
  uVar2 = *(uint *)(unaff_EDI + 0x6c);
  pcVar3 = *(char **)(unaff_EDI + 0x78);
  pcVar4 = (char *)(*(int *)(unaff_EDI + 0x38) + uVar2);
  if (*(int *)(unaff_EDI + 0x2c) - 0x106U < uVar2) {
    local_8 = (uVar2 - *(int *)(unaff_EDI + 0x2c)) + 0x106;
  }
  else {
    local_8 = 0;
  }
  local_12 = (pcVar4 + -1)[(int)pcVar3];
  local_11 = pcVar4[(int)pcVar3];
  pcVar1 = pcVar4 + 0x102;
  if (*(char **)(unaff_EDI + 0x8c) <= pcVar3) {
    local_10 = local_10 >> 2;
  }
  local_c = *(uint *)(unaff_EDI + 0x90);
  if (*(uint *)(unaff_EDI + 0x74) < *(uint *)(unaff_EDI + 0x90)) {
    local_c = *(uint *)(unaff_EDI + 0x74);
  }
  do {
    pcVar7 = (char *)(*(int *)(unaff_EDI + 0x38) + in_EAX);
    if ((((pcVar7[(int)pcVar3] == local_11) && ((pcVar7 + -1)[(int)pcVar3] == local_12)) &&
        (*pcVar7 == *pcVar4)) && (pcVar7[1] == pcVar4[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar5 = pcVar4 + 2;
      while (((((pcVar6 = pcVar5 + 1, pcVar5[1] == pcVar7[1] &&
                (pcVar6 = pcVar5 + 2, pcVar5[2] == pcVar7[2])) &&
               ((pcVar6 = pcVar5 + 3, pcVar5[3] == pcVar7[3] &&
                ((pcVar6 = pcVar5 + 4, pcVar5[4] == pcVar7[4] &&
                 (pcVar6 = pcVar5 + 5, pcVar5[5] == pcVar7[5])))))) &&
              (pcVar6 = pcVar5 + 6, pcVar5[6] == pcVar7[6])) &&
             (pcVar6 = pcVar5 + 7, pcVar5[7] == pcVar7[7]))) {
        pcVar6 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        if ((pcVar5[8] != *pcVar7) || (pcVar5 = pcVar6, pcVar1 <= pcVar6)) break;
      }
      pcVar7 = pcVar6 + (0x102 - (int)pcVar1);
      if ((int)pcVar3 < (int)pcVar7) {
        *(uint *)(unaff_EDI + 0x70) = in_EAX;
        if ((int)local_c <= (int)pcVar7) break;
        local_12 = pcVar4[(int)(pcVar6 + (0x101 - (int)pcVar1))];
        local_11 = pcVar7[(int)pcVar4];
        pcVar3 = pcVar7;
      }
    }
    pcVar7 = pcVar3;
    in_EAX = (uint)*(ushort *)
                    (*(int *)(unaff_EDI + 0x40) + (*(uint *)(unaff_EDI + 0x34) & in_EAX) * 2);
    if (in_EAX <= local_8) break;
    local_10 = local_10 - 1;
    pcVar3 = pcVar7;
  } while (local_10 != 0);
  pcVar3 = *(char **)(unaff_EDI + 0x74);
  if (pcVar7 <= *(char **)(unaff_EDI + 0x74)) {
    pcVar3 = pcVar7;
  }
  return pcVar3;
}

