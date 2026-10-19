#pragma once

class CEtPackingFile;

class CEtFileIO
{
public:
	enum FileIOType
	{
		ET_STD_FILE = 0,
		ET_PACK_FILE = 1
	};

	enum AccessType
	{
		ET_READ = 0,
		ET_WRITE,
		ET_ALL
	};
	enum SeekType
	{
		// Corresponds to FILE_BEGIN = 0 in winbase.h
		ET_SEEK_BEGIN = 0,		// Beginning of file
		ET_SEEK_CURRENT = 1,	// Current file position
		ET_SEEK_END = 2			// End of file
	};

public:
	
	CEtFileIO() { }
	virtual ~CEtFileIO() { }

	virtual bool	Open(const TCHAR* szFileName, AccessType nAccessMode) = 0;
	virtual bool	Close() = 0;

	virtual int		Read(void* pBuffer, int nLen) = 0;
	virtual int		Write(const void* pBuffer, int nLen ) = 0;
	virtual int		Seek(int nOffset, SeekType nPosition) = 0;
	virtual int		Tell() = 0;

public:
	
	// Factory method to instantiate standard file IO or package archive file IO
	static	CEtFileIO*	CreateFileIO(FileIOType opt);

};
