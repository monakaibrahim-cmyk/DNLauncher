// Address: 0x0045e9bb
// Name: CScrollView::GetWheelScrollDistance
// Category: Utility


/* Library Function - Single Match
    public: virtual class CSize __thiscall CScrollView::GetWheelScrollDistance(class CSize,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int * __thiscall
CScrollView::GetWheelScrollDistance
          (undefined4 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (param_5 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = param_3 / 10;
  }
  if (param_6 == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = param_4 / 10;
  }
  return param_2;
}

