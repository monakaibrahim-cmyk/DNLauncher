// Address: 0x0045abdb
// Name: CWnd::GetProperty
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::GetProperty(long,unsigned short,void *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::GetProperty(CWnd *this,long param_1,ushort param_2,void *param_3)

{
  undefined2 in_stack_0000000a;
  
  if (*(int *)(this + 0x50) != 0) {
    InvokeHelper(this,(long)this,(ushort)param_1,2,_param_2,param_3,0);
  }
  return;
}

