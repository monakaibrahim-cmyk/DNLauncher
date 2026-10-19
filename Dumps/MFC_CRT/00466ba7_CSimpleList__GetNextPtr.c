// Address: 0x00466ba7
// Name: CSimpleList::GetNextPtr
// Category: MFC_CRT


/* Library Function - Single Match
    public: void * * __thiscall CSimpleList::GetNextPtr(void *)const 
   
   Library: Visual Studio 2005 Release */

void ** __thiscall CSimpleList::GetNextPtr(CSimpleList *this,void *param_1)

{
  if (param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  return (void **)(*(int *)(this + 4) + (int)param_1);
}

