// Address: 0x0045e79a
// Name: CDC::Ellipse
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CDC::Ellipse(struct tagRECT const *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDC::Ellipse(CDC *this,tagRECT *param_1)

{
  BOOL BVar1;
  
  BVar1 = ::Ellipse(*(HDC *)(this + 4),param_1->left,param_1->top,param_1->right,param_1->bottom);
  return BVar1;
}

