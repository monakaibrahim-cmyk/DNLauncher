// Address: 0x00435520
// Name: FUN_00435520
// Category: Utility


HBITMAP __thiscall FUN_00435520(void *this,HDC param_1)

{
  HDC hdc;
  HBITMAP pHVar1;
  void *pvVar2;
  size_t sVar3;
  void *local_4;
  
  if (*(BITMAPINFO **)((int)this + 4) == (BITMAPINFO *)0x0) {
    return (HBITMAP)0x0;
  }
  local_4 = this;
  if (param_1 == (HDC)0x0) {
    hdc = CreateCompatibleDC((HDC)0x0);
    pHVar1 = CreateDIBSection(hdc,*(BITMAPINFO **)((int)this + 4),0,&param_1,(HANDLE)0x0,0);
    if (param_1 != (HDC)0x0) {
      sVar3 = *(size_t *)((int)this + 0x1c);
      pvVar2 = (void *)FUN_00434b20(this,0);
      _memcpy(param_1,pvVar2,sVar3);
    }
    DeleteDC(hdc);
    return pHVar1;
  }
  pHVar1 = CreateDIBSection(param_1,*(BITMAPINFO **)((int)this + 4),0,&local_4,(HANDLE)0x0,0);
  if (local_4 != (void *)0x0) {
    sVar3 = *(size_t *)((int)this + 0x1c);
    pvVar2 = (void *)FUN_00434b20(this,0);
    _memcpy(local_4,pvVar2,sVar3);
  }
  return pHVar1;
}

