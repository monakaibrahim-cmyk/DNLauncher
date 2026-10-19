// Address: 0x0046a46d
// Name: COleControlSite::GetControlInfo
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall COleControlSite::GetControlInfo(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlSite::GetControlInfo(COleControlSite *this)

{
  COleControlSite *_Dst;
  undefined4 *puVar1;
  int iVar2;
  COleControlSite *local_8;
  
  _Dst = this + 0x78;
  local_8 = this;
  _memset(_Dst,0,0x10);
  puVar1 = *(undefined4 **)(this + 0x50);
  local_8 = (COleControlSite *)0x0;
  *(undefined4 *)_Dst = 0x10;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_004ab80c,&local_8);
  if (-1 < iVar2) {
    (**(code **)(*(int *)local_8 + 0xc))(local_8,_Dst);
    (**(code **)(*(int *)local_8 + 8))(local_8);
  }
  return;
}

