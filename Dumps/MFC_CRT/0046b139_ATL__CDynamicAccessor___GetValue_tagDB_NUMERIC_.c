// Address: 0x0046b139
// Name: ATL::CDynamicAccessor::_GetValue<tagDB_NUMERIC>
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall ATL::CDynamicAccessor::_GetValue<struct tagDB_NUMERIC>(unsigned
   long,struct tagDB_NUMERIC *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall
ATL::CDynamicAccessor::_GetValue<tagDB_NUMERIC>
          (CDynamicAccessor *this,ulong param_1,tagDB_NUMERIC *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 * 0x30 + 4 + *(int *)(this + 0x14)) + *(int *)(this + 8))
  ;
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = puVar1[1];
  *(undefined4 *)(param_2 + 8) = puVar1[2];
  *(undefined4 *)(param_2 + 0xc) = puVar1[3];
  *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(puVar1 + 4);
  param_2[0x12] = *(tagDB_NUMERIC *)((int)puVar1 + 0x12);
  return;
}

