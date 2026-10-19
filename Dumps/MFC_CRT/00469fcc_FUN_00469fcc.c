// Address: 0x00469fcc
// Name: FUN_00469fcc
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __thiscall FUN_00469fcc(void *this,undefined4 param_1,void *param_2,size_t param_3)

{
  *(void **)((int)this + 8) = param_2;
  *(size_t *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  _memset(param_2,0,param_3);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0xc));
}

