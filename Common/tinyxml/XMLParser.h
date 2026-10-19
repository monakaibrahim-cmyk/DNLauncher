
#pragma once

#include <tchar.h>
#include <list>
#include <vector>

class TiXmlDocument;
class TiXmlNode;
class CStream;
class CFileStream;

#define SAFE_DELETE(x) if(x) { delete x; x=NULL; }

class CXMLParser
{
public:
	CXMLParser();
	~CXMLParser();

	bool Open(const char * fname, bool non_standard = false);
	bool OpenByBuffer(const char* pXmlBuf);

	void Reset();				//Seek Reset

	bool FirstChildElement(const char * item = NULL, bool stepdown = false);
	bool GoParent();
	bool NextSiblingElement(const char * item = NULL);

	TiXmlDocument * GetDocument() { return m_pTiDocument; }
	TiXmlNode * GetCurrentNode() { return m_pTiNode; }

	const WCHAR * GetAttribute(const char * att);
	const WCHAR * GetText();

	int Scan(char * form, ...);
	int ScanAtt(const char * att, char * form, ...);

private :
	TiXmlDocument * m_pTiDocument;
	TiXmlNode * m_pTiNode;
	std::list <TiXmlNode*> m_BaseNode;
	std::vector <WCHAR*> m_CharList;
};

class TiXmlElement;
class TiXmlComment;
class TiXmlText;
class TiXmlDeclaration;
class CXMLCreater
{
public:
	CXMLCreater();
	~CXMLCreater();

	bool Init(const char * fname, bool non_standard = false);
	bool Init(const char * fname, const char * filePath, bool non_standard = false);
	bool InitByUtf8(const char * fname, const char * filePath, bool non_standard = false);

	bool AddElement(const char * pName, bool bStepDown = false);
	bool AddAttribute(const char * pName, const char * pValue);
	bool AddAttribute(const char * pName, const WCHAR * pValue);
	bool AddAttribute(const char * pName, int nValue);

	void GoRarent();

	void Create();

private:
	bool m_bStepDown;
	TiXmlElement * m_pTiCurElement;
	TiXmlDocument * m_pTiBaseDocument;
	TiXmlDeclaration * m_pTiDeclaration;

	std::list <TiXmlElement*> m_BaseElement;
	std::list <TiXmlComment*> m_BaseComment;
	std::list <TiXmlText*> m_BaseTextValue;

	char m_szFileName[MAX_PATH];
};