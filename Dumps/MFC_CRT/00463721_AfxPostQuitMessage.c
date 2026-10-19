// Address: 0x00463721
// Name: AfxPostQuitMessage
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxPostQuitMessage(int)
   
   Library: Visual Studio 2005 Release */

void AfxPostQuitMessage(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046419a();
  if ((iVar1 != 0) && (*(code **)(iVar1 + 0x3c) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x3c))(1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00463737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage();
  return;
}

