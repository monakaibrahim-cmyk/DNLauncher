// Address: 0x00465071
// Name: CompareElements<IControlSiteFactory*,IControlSiteFactory*>
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall CompareElements<class IControlSiteFactory *,class IControlSiteFactory *>(class
   IControlSiteFactory * const *,class IControlSiteFactory * const *)
   
   Library: Visual Studio 2005 Release */

int CompareElements<IControlSiteFactory*,IControlSiteFactory*>
              (IControlSiteFactory **param_1,IControlSiteFactory **param_2)

{
  if ((param_1 != (IControlSiteFactory **)0x0) && (param_2 != (IControlSiteFactory **)0x0)) {
    return (uint)(*param_1 == *param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

