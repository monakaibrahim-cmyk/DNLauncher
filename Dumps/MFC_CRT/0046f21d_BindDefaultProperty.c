// Address: 0x0046f21d
// Name: BindDefaultProperty
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall COleControlSite::BindDefaultProperty(long,unsigned short,char
   const *,class CWnd *)
    public: virtual void __thiscall COleControlSite::BindDefaultProperty(long,unsigned short,wchar_t
   const *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
BindDefaultProperty(void *this,undefined4 param_1,ushort param_2,short *param_3,int param_4)

{
  if (*(int *)((int)this + 0x98) != 0) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x98) + 0x90) + 8))(this,0);
    (**(code **)(**(int **)(*(int *)((int)this + 0x98) + 0x90) + 0xc))();
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  if (param_4 != 0) {
    (**(code **)(**(int **)(param_4 + 0x50) + 0xb4))();
    *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_4 + 0x50);
    *(undefined4 *)((int)this + 0x9c) = param_1;
    *(uint *)((int)this + 0xa0) = (uint)param_2;
    FUN_004034e0((void *)((int)this + 0xa4),param_3);
    (**(code **)(**(int **)(*(int *)((int)this + 0x98) + 0x90) + 8))(this,1);
    if (*(int *)((int)this + 0x98) != 0) {
      (**(code **)(**(int **)(*(int *)((int)this + 0x98) + 0x90) + 0xc))();
    }
  }
  return;
}

