// Address: 0x00452716
// Name: AfxSetNewHandler
// Category: Utility


/* Library Function - Single Match
    int (__cdecl*__stdcall AfxSetNewHandler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2005 Release */

_func_int_uint * AfxSetNewHandler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  p_Var1 = (_func_int_uint *)PTR_thunk_FUN_004529b4_004c2068;
  PTR_thunk_FUN_004529b4_004c2068 = param_1;
  return p_Var1;
}

