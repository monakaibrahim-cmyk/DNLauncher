// Address: 0x0045db88
// Name: CHtmlView::OnUpdateEditPaste
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CHtmlView::OnUpdateEditPaste(class CCmdUI *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHtmlView::OnUpdateEditPaste(CHtmlView *this,CCmdUI *param_1)

{
  int local_8;
  
  local_8 = 0;
  QueryFormsCommand(this,0x1a,(int *)0x0,&local_8,(int *)0x0);
  (*(code *)**(undefined4 **)param_1)(local_8);
  return;
}

