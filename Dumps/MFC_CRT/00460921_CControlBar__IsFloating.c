// Address: 0x00460921
// Name: CControlBar::IsFloating
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CControlBar::IsFloating(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CControlBar::IsFloating(CControlBar *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x15c))();
  if (iVar1 != 0) {
    return *(int *)(this + 0x94);
  }
  if ((*(int *)(this + 0x8c) != 0) && (*(int *)(*(int *)(this + 0x8c) + 0x94) != 0)) {
    return 1;
  }
  return 0;
}

