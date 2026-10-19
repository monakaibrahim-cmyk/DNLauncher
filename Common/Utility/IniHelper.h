#pragma once

class CIniHelper
{
private:
	std::string	m_fileName;
	bool m_checked;

private:
	bool CheckFile()
	{
		if ( m_checked )
			return true;

		// Create file if it does not exist.
		if( GetFileAttributesA(m_fileName.c_str()) == INVALID_FILE_ATTRIBUTES)
		{
			FILE *fp = fopen(m_fileName.c_str(), "ab");
			if(fp)
			{
				m_checked = true;
				fclose(fp);
				return true;
			}
			else
				return false;
		}
		else
		{
			m_checked = true;
			return true;
		}

		return true;
		
	}

public:
	CIniHelper(const char* fileName = "")
	{
		SetFile(fileName);
	}

	void SetFile(const char* fileName)
	{
		m_checked = false;
		m_fileName = fileName;
	}

	// Read int value from INI file.
	int Read(const char* app, const char* key, int defaultValue)
	{
		return GetPrivateProfileIntA(app, key, defaultValue, m_fileName.c_str());
	}

	// Read string value from INI file.
	std::string Read(const char* app, const char* key, const char* defaultValue)
	{
		char buf[2048] = {0,} ;
		GetPrivateProfileStringA(app, key, defaultValue, buf, sizeof(buf), m_fileName.c_str());
		return std::string(buf);
	}

	// Write int value to INI file.
	bool Write(const char* app, const char* key, int v)
	{

		if(!CheckFile())
			return false;

		char buf[2048] = {0,} ;
		StringCbPrintfA(buf, sizeof(buf), "%d", v);
		return WritePrivateProfileStringA(app, key, buf, m_fileName.c_str()) ? true : false;
	}

	// Write string value to INI file.
	bool Write(const char* app, const char* key, const char* v)
	{
		if(!CheckFile())
			return false;

		return WritePrivateProfileStringA(app, key, v, m_fileName.c_str()) ? true : false;
	}

	// Flush cached INI contents to disk
	// Must be called after writing.
	bool Flush()
	{
		if(!CheckFile())
			return false;

		return WritePrivateProfileStringA(NULL, NULL, NULL, m_fileName.c_str())  ? true : false ;
	}
};