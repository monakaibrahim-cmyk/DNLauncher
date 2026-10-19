// Address: 0x0045db28
// Name: CHtmlView::OnUpdateEditCopy
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CHtmlView::OnUpdateEditCopy(class CCmdUI *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHtmlView::OnUpdateEditCopy(CHtmlView *this,CCmdUI *param_1)

{
  int local_8;
  
  local_8 = 0;
  QueryFormsCommand(this,0xf,(int *)0x0,&local_8,(int *)0x0);
  (*(code *)**(undefined4 **)param_1)(local_8);
  return;
}

