// Address: 0x00425d40
// Name: FUN_00425d40
// Category: Launcher


void __fastcall FUN_00425d40(int param_1)

{
  if (*(FILE **)(param_1 + 4) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

