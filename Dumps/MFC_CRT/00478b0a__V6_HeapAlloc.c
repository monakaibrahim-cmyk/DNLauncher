// Address: 0x00478b0a
// Name: _V6_HeapAlloc
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_004cc238) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_00478b50();
  }
  return local_20;
}

