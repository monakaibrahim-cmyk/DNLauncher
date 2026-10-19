// Address: 0x004549d1
// Name: CWnd::PreTranslateMessage
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::PreTranslateMessage(CWnd *this,tagMSG *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  if (*(code **)(pAVar1 + 0x38) != (code *)0x0) {
    (**(code **)(pAVar1 + 0x38))(param_1,this);
  }
  return 0;
}

