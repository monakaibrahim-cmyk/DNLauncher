// Address: 0x0045cf4b
// Name: AfxImageList_Destroy
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxImageList_Destroy(struct _IMAGELIST *)
   
   Library: Visual Studio 2005 Release */

int AfxImageList_Destroy(_IMAGELIST *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  iVar2 = CComCtlWrapper::_ImageList_Destroy
                    ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78),param_1);
  return iVar2;
}

