// Address: 0x0046a1cc
// Name: COleControlSite::SetDefaultButton
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleControlSite::SetDefaultButton(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::SetDefaultButton(COleControlSite *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(ushort *)(this + 0x70) & 0x1000) != 0) {
    if ((*(uint *)(this + 0x6c) & 1) != (uint)(param_1 != 0)) {
      param_1 = 0;
      *(uint *)(this + 0x6c) = *(uint *)(this + 0x6c) ^ 1;
      puVar1 = *(undefined4 **)(this + 0x50);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      iVar2 = (**(code **)*puVar1)(puVar1,&DAT_004ab80c,&param_1);
      if (-1 < iVar2) {
        (**(code **)(*(int *)param_1 + 0x14))(param_1,0xfffffd37);
        (**(code **)(*(int *)param_1 + 8))(param_1);
      }
    }
  }
  return;
}

