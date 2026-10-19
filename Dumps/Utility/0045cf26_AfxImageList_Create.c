// Address: 0x0045cf26
// Name: AfxImageList_Create
// Category: Utility


/* Library Function - Single Match
    struct _IMAGELIST * __stdcall AfxImageList_Create(int,int,unsigned int,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

_IMAGELIST * AfxImageList_Create(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  AFX_MODULE_STATE *pAVar1;
  _IMAGELIST *p_Var2;
  
  pAVar1 = AfxGetModuleState();
  p_Var2 = CComCtlWrapper::_ImageList_Create
                     ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78),param_1,param_2,param_3,
                      param_4,param_5);
  return p_Var2;
}

