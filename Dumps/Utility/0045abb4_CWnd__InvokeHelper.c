// Address: 0x0045abb4
// Name: CWnd::InvokeHelper
// Category: Utility


/* Library Function - Single Match
    public: void __cdecl CWnd::InvokeHelper(long,unsigned short,unsigned short,void *,unsigned char
   const *,...)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CWnd::InvokeHelper(CWnd *this,long param_1,ushort param_2,ushort param_3,void *param_4,
                  uchar *param_5,...)

{
  undefined4 in_stack_00000018;
  
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x60))
              (_param_2,_param_3,param_4,param_5,in_stack_00000018,&stack0x0000001c);
  }
  return;
}

