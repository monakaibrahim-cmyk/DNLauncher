#include "stdafx.h"
#include "CSVWriter.h"
#include "StringUtil.h"


// Initial column header setup
// Add columns using AddColumn
// Add fields using AddField


CSVWriter::CSVWriter()
{
	m_stream = NULL;
	m_bEnableWrite = false;
}

CSVWriter::~CSVWriter()
{
}

bool CSVWriter::Initialize( const wchar_t *FileName , std::wstring strColumname )
{
#ifndef _FINAL_BUILD
	_wsetlocale(LC_ALL,L"kor"); // Set locale for proper localized string representation.
#endif

	m_strFileName = FileName;
	m_strColumname = strColumname;

	return CheckExistFile();
}

bool CSVWriter::CheckExistFile()
{
	if( _wfopen_s( &m_stream, m_strFileName.c_str(), L"r" ) != 0 )
	{
		if( _wfopen_s( &m_stream, m_strFileName.c_str(), L"w" ) != 0 )
		{
			return false;
		}
		else
		{
			fclose(m_stream);
			WriteColumnName();
		}
	}
	else
	{
		fclose(m_stream);
	}

	return true;
}

void CSVWriter::WriteColumnName()
{
	StartWrite();
	std::vector<std::wstring> tokens;
	TokenizeW( m_strColumname , tokens, L";" );
	for ( int j = 0 ; j < (int)tokens.size() ; j++ )
		AddColumn(tokens[j].c_str());
	AddField();
	EndWrite();
}

void CSVWriter::StartWrite()
{
	if( _wfopen_s( &m_stream, m_strFileName.c_str(), L"a" ) != 0 )
		return;

	m_bEnableWrite = true;
}
void CSVWriter::EndWrite()
{
	if(!m_bEnableWrite)
		return;

	m_bEnableWrite = false;
	fclose(m_stream);
}


void CSVWriter::AddColumn(const wchar_t *str)
{
	if(m_bEnableWrite)
		fwprintf_s( m_stream, L"%s,", str );
}



void CSVWriter::AddField( int nCount )
{
	if(m_bEnableWrite)
		for( int i = 0; i < nCount; i ++ )
			fwprintf_s( m_stream, L"\n" );
}


