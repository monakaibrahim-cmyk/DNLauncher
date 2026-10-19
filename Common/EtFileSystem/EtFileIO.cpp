#include "stdafx.h"
#include <stdio.h>
#include "EtFileIO.h"
#include "EtStdFileIO.h"
#include "EtPackFileIO.h"

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif

/// Factory method to instantiate standard file IO or package archive file IO
CEtFileIO*
CEtFileIO::CreateFileIO(FileIOType opt)
{
	CEtFileIO* pFileIO = NULL;
	
	switch(opt) 
	{
	case ET_STD_FILE:
		{
			pFileIO = new CEtStdFileIO();
		}
		break;
	case ET_PACK_FILE:
		{
			pFileIO = new CEtPackFileIO();
		}
		break;
	}

	return pFileIO;
}
