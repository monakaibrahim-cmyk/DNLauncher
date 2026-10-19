// Address: 0x004717c9
// Name: CCmdTarget::GetEventSinkEntry
// Category: MFC_CRT


/* Library Function - Single Match
    protected: struct AFX_EVENTSINKMAP_ENTRY const * __stdcall
   CCmdTarget::GetEventSinkEntry(unsigned int,struct AFX_EVENT *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

AFX_EVENTSINKMAP_ENTRY * CCmdTarget::GetEventSinkEntry(uint param_1,AFX_EVENT *param_2)

{
  undefined4 *puVar1;
  AFX_EVENTSINKMAP_ENTRY *pAVar2;
  int *in_stack_0000000c;
  
  if (in_stack_0000000c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x3c))();
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return (AFX_EVENTSINKMAP_ENTRY *)0x0;
    }
    for (pAVar2 = (AFX_EVENTSINKMAP_ENTRY *)puVar1[1]; *(uint *)(pAVar2 + 0x18) != 0xffffffff;
        pAVar2 = pAVar2 + 0x28) {
      if ((*(int *)(pAVar2 + 4) == in_stack_0000000c[1]) &&
         (*(uint *)(pAVar2 + 0x18) == (uint)(*in_stack_0000000c != 0))) {
        if (*(AFX_EVENT **)(pAVar2 + 0x24) == (AFX_EVENT *)0xffffffff) {
          if (*(AFX_EVENT **)(pAVar2 + 0x20) == (AFX_EVENT *)0xffffffff) {
            return pAVar2;
          }
          if (*(AFX_EVENT **)(pAVar2 + 0x20) == param_2) {
            return pAVar2;
          }
        }
        else if ((*(AFX_EVENT **)(pAVar2 + 0x20) <= param_2) &&
                (param_2 <= *(AFX_EVENT **)(pAVar2 + 0x24))) {
          return pAVar2;
        }
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

