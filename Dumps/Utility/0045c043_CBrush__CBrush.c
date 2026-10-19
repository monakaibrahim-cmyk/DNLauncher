// Address: 0x0045c043
// Name: CBrush::CBrush
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CBrush::CBrush(unsigned long)
   
   Library: Visual Studio */

CBrush * __thiscall CBrush::CBrush(CBrush *this,ulong param_1)

{
  bool bVar1;
  HBRUSH pHVar2;
  undefined3 extraout_var;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  pHVar2 = CreateSolidBrush(param_1);
  bVar1 = Attach(this,(int)pHVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_0045b5bf();
  }
  return this;
}

