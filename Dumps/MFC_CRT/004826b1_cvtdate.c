// Address: 0x004826b1
// Name: cvtdate
// Category: MFC_CRT


/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2005 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      puVar5 = (&PTR_DAT_004c4800)[in_EAX];
    }
    else {
      puVar5 = *(undefined **)(&DAT_004c4834 + in_EAX * 4);
    }
    puVar6 = puVar5 + 1;
    iVar2 = (param_4 * 7 -
            (int)(puVar6 + param_3 * 0x16d + -0x63db +
                           ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                           ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_5;
    if ((int)(puVar6 + param_3 * 0x16d + -0x63db +
                       ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                       ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_5) {
      puVar6 = puVar5 + -6;
    }
    puVar6 = puVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = (&DAT_004c4804)[in_EAX];
      }
      else {
        iVar2 = *(int *)(&DAT_004c4838 + in_EAX * 4);
      }
      if (iVar2 < (int)puVar6) {
        puVar6 = puVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      puVar6 = (&PTR_DAT_004c4800)[in_EAX];
    }
    else {
      puVar6 = *(undefined **)(&DAT_004c4834 + in_EAX * 4);
    }
    puVar6 = puVar6 + param_6;
  }
  iVar4 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_004c4520 = param_3;
    DAT_004c4524 = puVar6;
    DAT_004c4528 = iVar4;
  }
  else {
    DAT_004c4530 = puVar6;
    DAT_004c4534 = iVar4;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_004c4534 = DAT_004c4534 + iVar2;
    if (DAT_004c4534 < 0) {
      DAT_004c4534 = DAT_004c4534 + 86400000;
      DAT_004c4530 = DAT_004c4530 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_004c4534) {
        DAT_004c4534 = DAT_004c4534 + -86400000;
        DAT_004c4530 = DAT_004c4530 + 1;
      }
    }
    DAT_004c452c = param_3;
  }
  return iVar2;
}

