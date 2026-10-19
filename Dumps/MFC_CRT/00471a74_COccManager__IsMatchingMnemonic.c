// Address: 0x00471a74
// Name: COccManager::IsMatchingMnemonic
// Category: MFC_CRT


/* Library Function - Single Match
    public: static int __cdecl COccManager::IsMatchingMnemonic(struct COleControlSiteOrWnd *,struct
   tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __cdecl COccManager::IsMatchingMnemonic(COleControlSiteOrWnd *param_1,tagMSG *param_2)

{
  int iVar1;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    iVar1 = FUN_0046a4c4(*(void **)(param_1 + 4),(int)param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

