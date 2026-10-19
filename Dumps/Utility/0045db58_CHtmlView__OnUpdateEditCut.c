// Address: 0x0045db58
// Name: CHtmlView::OnUpdateEditCut
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CHtmlView::OnUpdateEditCut(class CCmdUI *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHtmlView::OnUpdateEditCut(CHtmlView *this,CCmdUI *param_1)

{
  int local_8;
  
  local_8 = 0;
  QueryFormsCommand(this,0x10,(int *)0x0,&local_8,(int *)0x0);
  (*(code *)**(undefined4 **)param_1)(local_8);
  return;
}

