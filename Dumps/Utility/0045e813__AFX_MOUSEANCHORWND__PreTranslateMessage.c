// Address: 0x0045e813
// Name: _AFX_MOUSEANCHORWND::PreTranslateMessage
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall _AFX_MOUSEANCHORWND::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall _AFX_MOUSEANCHORWND::PreTranslateMessage(_AFX_MOUSEANCHORWND *this,tagMSG *param_1)

{
  uint uVar1;
  POINT pt;
  BOOL BVar2;
  tagPOINT local_c;
  
  if (param_1 == (tagMSG *)0x0) {
    local_c.x = (LONG)this;
    local_c.y = (LONG)this;
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  uVar1 = param_1->message;
  if (uVar1 < 0x206) {
    if (uVar1 < 0x204) {
      if (uVar1 < 0x100) {
        return 0;
      }
      if (0x102 < uVar1) {
        if (uVar1 < 0x104) {
          return 0;
        }
        if (0x105 < uVar1) {
          if (uVar1 < 0x201) {
            return 0;
          }
          if (0x202 < uVar1) {
            return 0;
          }
        }
      }
    }
  }
  else if (uVar1 != 0x207) {
    if (uVar1 == 0x208) {
      local_c.x = (LONG)(short)param_1->lParam;
      local_c.y = (LONG)(short)((uint)param_1->lParam >> 0x10);
      ClientToScreen(*(HWND *)(this + 0x20),&local_c);
      pt.y = local_c.y;
      pt.x = local_c.x;
      BVar2 = PtInRect((RECT *)(this + 0x54),pt);
      if (BVar2 != 0) {
        return 1;
      }
    }
    else if (uVar1 != 0x20a) {
      return 0;
    }
  }
  *(undefined4 *)(this + 0x6c) = 1;
  return 1;
}

