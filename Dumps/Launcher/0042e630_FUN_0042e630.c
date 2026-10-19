// Address: 0x0042e630
// Name: FUN_0042e630
// Category: Launcher


void __thiscall FUN_0042e630(void *this,FILE *param_1,undefined4 param_2,int param_3)

{
  if (param_1 != (FILE *)0x0) {
    FUN_00477353(param_1,(byte *)"<?xml ");
  }
  if (param_3 != 0) {
    FUN_004262b0((undefined4 *)"<?xml ",6);
  }
  if (*(int *)((int)this + 0x58) != 0) {
    if (param_1 != (FILE *)0x0) {
      FUN_00477353(param_1,(byte *)"version=\"%s\" ");
    }
    if (param_3 != 0) {
      FUN_004262b0((undefined4 *)"version=\"",9);
      FUN_004263a0((int)this + 0x44,0);
      FUN_004262b0((undefined4 *)&DAT_004b41f8,2);
    }
  }
  if (*(int *)((int)this + 0x74) != 0) {
    if (param_1 != (FILE *)0x0) {
      FUN_00477353(param_1,(byte *)"encoding=\"%s\" ");
    }
    if (param_3 != 0) {
      FUN_004262b0((undefined4 *)"encoding=\"",10);
      FUN_004263a0((int)this + 0x60,0);
      FUN_004262b0((undefined4 *)&DAT_004b41f8,2);
    }
  }
  if (*(int *)((int)this + 0x90) != 0) {
    if (param_1 != (FILE *)0x0) {
      FUN_00477353(param_1,(byte *)"standalone=\"%s\" ");
    }
    if (param_3 != 0) {
      FUN_004262b0((undefined4 *)"standalone=\"",0xc);
      FUN_004263a0((int)this + 0x7c,0);
      FUN_004262b0((undefined4 *)&DAT_004b41f8,2);
    }
  }
  if (param_1 != (FILE *)0x0) {
    FUN_00477353(param_1,&DAT_004b423c);
  }
  if (param_3 != 0) {
    FUN_004262b0((undefined4 *)&DAT_004b423c,2);
  }
  return;
}

