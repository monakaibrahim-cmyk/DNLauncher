// Address: 0x0040c760
// Name: FUN_0040c760
// Category: Launcher


undefined4 FUN_0040c760(void)

{
  CSimpleStringT<wchar_t,0> *this;
  int in_EAX;
  
  if ((*(int *)(*(int *)(in_EAX + 0x68) + -0xc) != 0) &&
     (*(int *)(*(int *)(in_EAX + 0x6c) + -0xc) != 0)) {
    this = (CSimpleStringT<wchar_t,0> *)(in_EAX + 0x70);
    FUN_00403f30(this,L"/ip:%s /port:%s /Lver:%d /use_packing");
    if (1 < *(int *)(*(int *)this + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
    }
    if (1 < *(int *)(DAT_004cbcf4 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&DAT_004cbcf4,*(int *)(DAT_004cbcf4 + -0xc));
    }
    FUN_00403f30((void *)(in_EAX + 0x74),L"%s %s");
    return 1;
  }
  return 0;
}

