// Address: 0x00457079
// Name: CWnd::OnCtlColor
// Category: Utility


/* Library Function - Single Match
    protected: struct HBRUSH__ * __thiscall CWnd::OnCtlColor(class CDC *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2005 Release */

HBRUSH__ * __thiscall CWnd::OnCtlColor(CWnd *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = SendChildNotifyLastMsg(param_2,(long *)&param_2);
  if (iVar1 == 0) {
    param_2 = (CWnd *)Default(this);
  }
  return (HBRUSH__ *)param_2;
}

