// Address: 0x00466dee
// Name: CThreadSlotData::SetValue
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CThreadSlotData::SetValue(int,void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CThreadSlotData::SetValue(CThreadSlotData *this,int param_1,void *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *lpTlsValue;
  uint uVar1;
  HLOCAL pvVar2;
  UINT uFlags;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  if ((param_1 < 1) || (*(int *)(this + 0xc) <= param_1)) goto LAB_00466f15;
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = CNoTrackObject::operator_new(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = CThreadData::vftable;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    CSimpleList::AddHead((CSimpleList *)(this + 0x14),lpTlsValue);
LAB_00466e45:
    if (lpTlsValue[3] == 0) {
      uVar1 = ATL::AtlMultiplyThrow<unsigned_int>(*(uint *)(this + 0xc),4);
      pvVar2 = LocalAlloc(0,uVar1);
    }
    else {
      uFlags = 2;
      uVar1 = ATL::AtlMultiplyThrow<unsigned_int>(*(uint *)(this + 0xc),4);
      pvVar2 = LocalReAlloc((HLOCAL)lpTlsValue[3],uVar1,uFlags);
    }
    if (pvVar2 == (HLOCAL)0x0) {
      LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
    lpTlsValue[3] = pvVar2;
    _memset((void *)((int)pvVar2 + lpTlsValue[2] * 4),0,(*(int *)(this + 0xc) - lpTlsValue[2]) * 4);
    lpTlsValue[2] = *(undefined4 *)(this + 0xc);
    TlsSetValue(*(DWORD *)this,lpTlsValue);
  }
  else if (((int)lpTlsValue[2] <= param_1) && (param_2 != (void *)0x0)) goto LAB_00466e45;
  if ((lpTlsValue[3] != 0) && (param_1 < (int)lpTlsValue[2])) {
    *(void **)(lpTlsValue[3] + param_1 * 4) = param_2;
  }
LAB_00466f15:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

