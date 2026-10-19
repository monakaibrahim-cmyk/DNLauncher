
#include <windows.h>
#include <crtdbg.h>
#include <stdio.h>
#include <io.h>
#include <stdlib.h>
#include <stdarg.h>
#include "XMLParser.h"
#include "tinyxml.h"
#include "Stream.h"

CXMLParser::CXMLParser()
{
	m_pTiDocument = NULL;
	m_pTiNode = NULL;
}

CXMLParser::~CXMLParser()
{
	if (m_pTiDocument != NULL)
		delete m_pTiDocument;

	std::vector <WCHAR*>::iterator ii;
	for (ii = m_CharList.begin(); ii != m_CharList.end(); ii++)
		delete [] (*ii);
	m_CharList.clear();
}

bool CXMLParser::Open(const char * fname, bool non_standard)
{
	if (fname == NULL)
		return false;

	CFileStream stream;
	if (stream.Open(fname) == false)
		return false;

	int tt = stream.Size() + 1;
	char * pTemp = new char[stream.Size() + 1];
	memset(pTemp, 0, stream.Size() + 1);
	int iReadBytes = stream.Read(pTemp, stream.Size());

	if (m_pTiDocument != NULL)
		delete m_pTiDocument;

	m_pTiDocument = new TiXmlDocument;
	m_pTiDocument->Parse(pTemp);

	delete [] pTemp;
	if (m_pTiDocument->Error() != 0)
	{
		_tprintf( _T("Error in %s: %s\n"), m_pTiDocument->Value(), m_pTiDocument->ErrorDesc() );
		_ASSERT(0);				// Invalid node format or attribute missing
		return false;
	}
	return true;
}

bool CXMLParser::OpenByBuffer(const char* pXmlBuf)
{
	if (m_pTiDocument != NULL)
		delete m_pTiDocument;

	m_pTiDocument = new TiXmlDocument;
	m_pTiDocument->Parse(pXmlBuf);
	
	if (m_pTiDocument->Error() != 0)
	{
		_tprintf( _T("Error in %s: %s\n"), m_pTiDocument->Value(), m_pTiDocument->ErrorDesc() );
		_ASSERT(0);				// Invalid node format or attribute missing
		return false;
	}
	return true;
}

void CXMLParser::Reset()
{
	m_BaseNode.clear();
}

bool CXMLParser::FirstChildElement(const char * item, bool stepdown)
{
	if (!m_pTiDocument)
		return false;

	TiXmlNode * node = NULL;

	if (m_BaseNode.empty())
	{
		if (item == NULL)
		{
			node = m_pTiDocument->RootElement();
		}
		else
		{
			TiXmlElement* root = m_pTiDocument->RootElement();
			if (root && _stricmp(root->Value(), item) == 0)
			{
				node = root;
			}
			else
			{
				for (TiXmlNode* child = m_pTiDocument->FirstChild(); child != NULL; child = child->NextSibling())
				{
					if (child->ToElement() && _stricmp(child->Value(), item) == 0)
					{
						node = child;
						break;
					}
				}
			}
		}
	}
	else
	{
		TiXmlElement* parentElem = (*m_BaseNode.begin())->ToElement();
		if (parentElem)
		{
			if (item == NULL)
			{
				node = parentElem->FirstChildElement();
			}
			else
			{
				for (TiXmlElement* elem = parentElem->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement())
				{
					if (_stricmp(elem->Value(), item) == 0)
					{
						node = elem;
						break;
					}
				}
			}
		}
	}

	if (node != NULL)
	{
		if (stepdown == true)
			m_BaseNode.push_front(node);

		m_pTiNode = node;
		return true;
	}
	return false;
}

bool CXMLParser::GoParent()
{
	if (!m_BaseNode.empty() )
	{
		m_BaseNode.erase(m_BaseNode.begin());
		
		if ( !m_BaseNode.empty() )
			m_pTiNode = (*m_BaseNode.begin());
		else
			m_pTiNode = NULL;
		return true;
	}
	return false;
}

bool CXMLParser::NextSiblingElement(const char * item)
{
	if (m_pTiNode != NULL && !m_BaseNode.empty())
	{
		TiXmlNode * parent = (*m_BaseNode.begin());
		TiXmlNode * pOld = (item && !_stricmp(parent->Value(), item)) ? parent : m_pTiNode;
		TiXmlNode * node = NULL;

		if (item == NULL)
		{
			node = pOld->NextSiblingElement();
		}
		else
		{
			for (TiXmlNode* sib = pOld->NextSibling(); sib != NULL; sib = sib->NextSibling())
			{
				if (sib->ToElement() && _stricmp(sib->Value(), item) == 0)
				{
					node = sib;
					break;
				}
			}
		}

		if (node != NULL)
		{
			if (parent == pOld)
			{
				m_BaseNode.erase(m_BaseNode.begin());
				m_BaseNode.push_front(node);
			}
			m_pTiNode = node;
			return true;
		}
		return false;
	}
	return false;
}

const WCHAR * CXMLParser::GetAttribute(const char * att)
{
	if (m_pTiNode == NULL || m_pTiNode->ToElement() == NULL || att == NULL)
		return NULL;

	const char * pAtt = m_pTiNode->ToElement()->Attribute(att);
	if (pAtt == NULL)
	{
		for (const TiXmlAttribute* a = m_pTiNode->ToElement()->FirstAttribute(); a != NULL; a = a->Next())
		{
			if (_stricmp(a->Name(), att) == 0)
			{
				pAtt = a->Value();
				break;
			}
		}
	}

	if (pAtt != NULL)
	{
		WCHAR * pBuf = new WCHAR[1024];
		memset(pBuf, 0, 1024 * sizeof(WCHAR));

		MultiByteToWideChar(CP_UTF8, 0, pAtt, -1, pBuf, 1024);

		m_CharList.push_back(pBuf);
		return pBuf;
	}
	return NULL;
}

const WCHAR * CXMLParser::GetText()
{
	if (m_pTiNode == NULL || m_pTiNode->ToElement() == NULL)
		return NULL;

	const char * pAtt = m_pTiNode->ToElement()->GetText();
	if (pAtt != NULL)
	{
		WCHAR * pBuf = new WCHAR[1024];
		memset(pBuf, 0, 1024 * sizeof(WCHAR));

		MultiByteToWideChar(CP_UTF8, 0, pAtt, -1, pBuf, 1024);

		m_CharList.push_back(pBuf);
		return pBuf;
	}
	return NULL;
}

int CXMLParser::Scan(char * fmt, ...)
{
	const WCHAR * ptr;
	va_list arg;
	int i, cnt=0, j;
	WCHAR token[256];

	ptr = GetText();

	if (ptr == NULL)
		return 0;

	va_start(arg, fmt);

	for(i=0; fmt[i]; i++)
	{
		if (fmt[i] == '%')
		{
			for(; *ptr && wcschr(L"\n\r\t ", *ptr); ptr++) ;

			for(j=0; *ptr && !wcschr(L"\n\r\t ", *ptr); j++, ptr++)
				token[j] = *ptr;

			if (j == 0)
				return cnt;

			token[j] = '\0';

			switch(fmt[i+1])
			{
				case 'x' : case 'X' :
					swscanf(token, L"%x", va_arg(arg, int*));
					break;
				case 'f' : case 'F' :
					swscanf(token, L"%f", va_arg(arg, float*));
					break;
				case 'd' : case 'u' :
					swscanf(token, L"%d", va_arg(arg, int*));
					break;
				case 's' :
					wcscpy(va_arg(arg, WCHAR*), token);
					break;
			}
			cnt++;
		}
	}

	va_end(arg);
	return cnt;
}

int CXMLParser::ScanAtt(const char * att, char * fmt, ...)
{
	const WCHAR * ptr;
	va_list arg;
	int i, cnt=0, j;
	WCHAR token[256];

	ptr = GetAttribute(att);

	if (ptr == NULL)
		return 0;

	va_start(arg, fmt);

	for(i=0; fmt[i]; i++)
	{
		if (fmt[i] == '%')
		{
			for(; *ptr && wcschr(L"\n\r\t ", *ptr); ptr++) ;

			for(j=0; *ptr && !wcschr(L"\n\r\t ", *ptr); j++, ptr++)
				token[j] = *ptr;

			if (j == 0)
				return cnt;

			token[j] = '\0';

			switch(fmt[i+1])
			{
				case 'x' : case 'X' :
					swscanf(token, L"%x", va_arg(arg, int*));
					break;
				case 'f' : case 'F' :
					swscanf(token, L"%f", va_arg(arg, float*));
					break;
				case 'd' : case 'u' :
					swscanf(token, L"%d", va_arg(arg, int*));
					break;
				case 's' :
					wcscpy(va_arg(arg, WCHAR*), token);
					break;
			}
			cnt++;
		}
	}

	va_end(arg);
	return cnt;
}


//Creater
CXMLCreater::CXMLCreater()
{
	m_bStepDown = false;
	m_pTiCurElement = NULL;
	m_pTiBaseDocument = NULL;
	memset(m_szFileName, 0, sizeof(m_szFileName));
}

CXMLCreater::~CXMLCreater()
{
	/*std::list <TiXmlElement*>::iterator ii;
	for (ii = m_BaseElement.begin(); ii != m_BaseElement.end(); ii++)
		delete (*ii);

	std::list <TiXmlComment*>::iterator ih;
	for (ih = m_BaseComment.begin(); ih != m_BaseComment.end(); ih++)
		delete (*ih);

	std::list <TiXmlText*>::iterator ij;
	for (ij = m_BaseTextValue.begin(); ij != m_BaseTextValue.end(); ij++)
		delete (*ij);*/

	
	SAFE_DELETE(m_pTiBaseDocument);
	//SAFE_DELETE(m_pTiCurElement);
	//SAFE_DELETE(m_pTiDeclaration);	
}

bool CXMLCreater::Init(const char * fname, bool non_standard/* = false*/)
{
	std::string szStr;
	szStr = "./System/";
	szStr += fname;
	if (_access(szStr.c_str(), 0) != -1)
	{
		// Create directory if it does not exist
		return false;
	}

	strcpy_s(m_szFileName, szStr.c_str());

	m_pTiBaseDocument = new TiXmlDocument;
    m_pTiDeclaration = new TiXmlDeclaration("1.0", "euc-kr", "yes"); 
    m_pTiBaseDocument->LinkEndChild(m_pTiDeclaration);
	return true;
}

bool CXMLCreater::Init(const char * fname, const char * filePath, bool non_standard/* = false*/) // Initialize XML creater
{
	std::string szStr;
	szStr = filePath;

	strcpy_s(m_szFileName, szStr.c_str());

	m_pTiBaseDocument = new TiXmlDocument;
	m_pTiDeclaration = new TiXmlDeclaration("1.0", "euc-kr", "yes"); 
	m_pTiBaseDocument->LinkEndChild(m_pTiDeclaration);
	return true;
}
// Initialize XML creater with UTF-8 encoding
bool CXMLCreater::InitByUtf8(const char * fname, const char * filePath, bool non_standard/* = false*/)
{
	std::string szStr;
	szStr = filePath;
	szStr += fname;
	if (_access(szStr.c_str(), 0) != -1)
	{
		// Create directory if it does not exist
		return false;
	}

	strcpy_s(m_szFileName, szStr.c_str());

	m_pTiBaseDocument = new TiXmlDocument;
	m_pTiDeclaration = new TiXmlDeclaration("1.0", "utf-8", "yes"); 
	m_pTiBaseDocument->LinkEndChild(m_pTiDeclaration);
	return true;
}

bool CXMLCreater::AddElement(const char * pName, bool bStepDown/* = false*/)
{
	TiXmlElement * pElement = new TiXmlElement(pName);

	if (pElement == NULL)
		return false;
		
	if (m_BaseElement.empty())
		m_pTiBaseDocument->LinkEndChild(pElement);
	else
	{
		std::list <TiXmlElement*>::iterator ii = m_BaseElement.begin();
		if (ii != m_BaseElement.end())
		{
			TiXmlElement * pParentElement = m_BaseElement.back();
			pParentElement->LinkEndChild(pElement);
		}
	}
	if (bStepDown)
		m_BaseElement.push_back(pElement);
	
	m_pTiCurElement = pElement;
	return true;
}

bool CXMLCreater::AddAttribute(const char * pName, const char * pValue)
{
	if (m_pTiCurElement)
	{
		m_pTiCurElement->SetAttribute(pName, pValue);
		return true;
	}
	// Add child element
	return false;
}

bool CXMLCreater::AddAttribute(const char * pName, const WCHAR * pValue)
{
	if (m_pTiCurElement)
	{
		char szTemp[MAX_PATH];
		WideCharToMultiByte(CP_ACP, 0, pValue, -1, szTemp, MAX_PATH, NULL, NULL);
		m_pTiCurElement->SetAttribute(pName, szTemp);
		return true;
	}
	// Add child element
	return false;
}

bool CXMLCreater::AddAttribute(const char * pName, int nValue)
{
	if (m_pTiCurElement)
	{
		m_pTiCurElement->SetAttribute(pName, nValue);
		return true;
	}
	// Add child element
	return false;
}

void CXMLCreater::GoRarent()
{
	m_BaseElement.pop_back();
}

void CXMLCreater::Create()
{
	m_pTiBaseDocument->SaveFile(m_szFileName);
	m_BaseElement.clear();
	m_BaseComment.clear();
	m_BaseTextValue.clear();
}
