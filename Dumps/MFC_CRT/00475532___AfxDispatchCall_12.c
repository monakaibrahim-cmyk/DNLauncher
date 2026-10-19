// Address: 0x00475532
// Name: __AfxDispatchCall@12
// Category: MFC_CRT


/* Library Function - Single Match
    __AfxDispatchCall@12
   
   Library: Visual Studio 2005 Release */

void __cdecl __AfxDispatchCall_12(undefined *param_1,int param_2,int param_3)

{
  undefined4 unaff_retaddr;
  
  *(undefined4 *)(param_2 + param_3) = unaff_retaddr;
  *(undefined4 *)((param_2 + param_3) - param_3) = 0x475542;
  (*(code *)param_1)();
  return;
}

