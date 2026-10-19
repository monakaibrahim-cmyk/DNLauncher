// Address: 0x0042bfa0
// Name: FUN_0042bfa0
// Category: Launcher


void FUN_0042bfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_0042c1b0(1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[4] = *unaff_ESI;
    puVar1[5] = unaff_ESI[1];
    puVar1[6] = unaff_ESI[2];
    puVar1[7] = unaff_ESI[3];
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
  }
  return;
}

