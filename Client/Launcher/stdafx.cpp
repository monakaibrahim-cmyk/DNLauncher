// stdafx.cpp : source file that includes just the standard includes
// DnLauncher.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

#if _MSC_VER >= 1900
extern "C" {
    FILE __iob_func_array[3];
    FILE * __cdecl __iob_func(void) {
        __iob_func_array[0] = *stdin;
        __iob_func_array[1] = *stdout;
        __iob_func_array[2] = *stderr;
        return __iob_func_array;
    }
}
#endif


