
#include "Stdafx.h"
#include "DNTableFile.h"
#include "Stream.h"
#include "SundriesFunc.h"
#include <boost/algorithm/string.hpp>

CDNTableFile::CDNTableFile()
: m_nFieldCount(0), m_iDataCount(0), m_pmStringItemID(NULL), m_pmIntItemID(NULL), m_pmFloatItemID(NULL), m_bDontUseItemIDData( false )
{
	_Reset();
}

CDNTableFile::CDNTableFile( const char *szFileName )
: m_nFieldCount(0), m_iDataCount(0), m_pmStringItemID(NULL), m_pmIntItemID(NULL), m_pmFloatItemID(NULL), m_bDontUseItemIDData( false )
{
	_Reset();
}

CDNTableFile::~CDNTableFile()
{
	_Reset();
}

void CDNTableFile::_Reset()
{
	SAFE_DELETE_VEC( m_vCellRepository );
	m_mItemIDStartCellIndex.clear();
	m_vLabel.clear();
	m_mFieldNameFieldIndex.clear();
	m_StringPool.Clear();
	m_vItemID.clear();

	for( int i=0; i<m_nFieldCount; i++ ) 
	{
		if( m_pmStringItemID ) 
			SAFE_DELETE_VEC( m_pmStringItemID[i] );
		if( m_pmIntItemID ) 
			SAFE_DELETE_VEC( m_pmIntItemID[i] );
		if( m_pmFloatItemID ) 
			SAFE_DELETE_VEC( m_pmFloatItemID[i] );
	}
	
	SAFE_DELETEA( m_pmStringItemID );
	SAFE_DELETEA( m_pmIntItemID );
	SAFE_DELETEA( m_pmFloatItemID );

	m_nFieldCount = 0;
	m_iDataCount = 0;

	m_bAutoUnload = false;
	m_fHoldingTime = 0.0f;
}

bool CDNTableFile::SetGenerationInverseLabel( char* pszStr )
{
	if( pszStr == NULL )
		return false;

	if( strlen(pszStr) == 0 )
		return false;

	m_vGenerationInverseLabel.clear();
	
	std::string	strString( pszStr );
	std::vector<std::string> vSplit;
	boost::algorithm::split( vSplit, strString, boost::algorithm::is_any_of(";") );

	if( vSplit.empty() )
		return false;

	for( size_t i=0 ; i<vSplit.size() ; ++i )
		m_vGenerationInverseLabel.push_back( vSplit[i] );

	return true;
}

bool CDNTableFile::Load( const char* pszFileName, bool bResetData/*=true*/ )
{
	CFileStream Stream( pszFileName );
	return _Load( &Stream, bResetData );
}

bool CDNTableFile::Load( std::vector<CStream*>& VecStream, bool bDontUseItemIDData )
{
	m_bDontUseItemIDData = bDontUseItemIDData;
	_Reset();

	short nFieldCount = 0;
	int iDataCount = 0;

	for( DWORD i=0 ; i<VecStream.size(); ++i ) 
	{
		short nTemp = 0;
		int iTemp = 0;

		if( VecStream[i]->IsValid() == false ) 
			return false;

		VecStream[i]->Seek( HeaderSize::Version, SEEK_SET );
		VecStream[i]->Read( &nTemp, HeaderSize::ReserveLen );
		if( nTemp > 0 )
			VecStream[i]->Seek( nTemp, SEEK_CUR );
		VecStream[i]->Read( &nFieldCount, HeaderSize::FieldCount );
		VecStream[i]->Read( &iTemp, HeaderSize::DataCount );
		
		iDataCount += iTemp;
	}

	m_vCellRepository.resize( iDataCount * nFieldCount + iDataCount );

	for( DWORD i=0 ; i<VecStream.size() ; ++i ) 
	{
		if( _Load( VecStream[i], false ) == false )
			return false;
	}

	return true;
}

bool CDNTableFile::_Load( CStream* pStream, bool bResetData/*=true*/ )
{
	if( pStream == NULL || pStream->IsValid() == false ) 
		return false;
    if( bResetData ) 
		_Reset();
	
	pStream->Seek( 0, SEEK_SET );
	pStream->Seek( HeaderSize::Version, SEEK_CUR );
	short nTemp = 0;
	pStream->Read( &nTemp, HeaderSize::ReserveLen );
	if( nTemp > 0 )
		pStream->Seek( nTemp, SEEK_CUR );
	short nFieldCount;
	pStream->Read( &nFieldCount, HeaderSize::FieldCount );
	if( m_nFieldCount != 0 && m_nFieldCount != nFieldCount ) 
	{
		OutputDebug( "Invalid Field Count : %s - ( %d - %d )\n", ( pStream->GetName() ) ? pStream->GetName() : "Unknown", m_nFieldCount, nFieldCount );
		return false;
	}
	m_nFieldCount = nFieldCount;
	int iDataCount = 0;
	pStream->Read( &iDataCount, HeaderSize::DataCount );
	int iPrevDataCount = m_iDataCount;
	m_iDataCount += iDataCount;

	m_vLabel.resize( nFieldCount );

	if( !m_bDontUseItemIDData )
	{
		if( m_pmStringItemID == NULL )
			m_pmStringItemID = new TDStringItemID[nFieldCount];
		if( m_pmIntItemID == NULL ) 
			m_pmIntItemID = new TDIntItemID[nFieldCount];
//		if( m_pmFloatItemID == NULL )
//			m_pmFloatItemID = new TDFloatItemID[nFieldCount];
	}

	std::vector<FieldType::eCode> vFieldType;

	for( int i=0; i<nFieldCount; i++ ) 
	{
		char szFieldName[MAX_PATH];
		short nFieldNameLen = 0;
		BYTE cFieldType = FieldType::NA;

		pStream->Read( &nFieldNameLen, HeaderSize::FieldNameLen );
		
		if( nFieldNameLen >= MAX_PATH )
			return false;
		pStream->Read( szFieldName, nFieldNameLen );
		szFieldName[nFieldNameLen] = 0;
		m_vLabel[i] = szFieldName;
		m_mFieldNameFieldIndex.insert( std::make_pair(m_vLabel[i],i) );

		pStream->Read( &cFieldType, HeaderSize::FieldType );

		switch( cFieldType )
		{
			case FieldType::NA:
			case FieldType::STRING:
			case FieldType::BOOL:
			case FieldType::INT:
			case FieldType::PER:
			case FieldType::FLOAT:
				break;
			default:
				return false;
		}

		vFieldType.push_back( static_cast<FieldType::eCode>(cFieldType) );
	}
	
	// GenerationLavel Check
	for( UINT i=0 ; i<m_vGenerationInverseLabel.size() ; ++i )
	{
		if( std::find( m_vLabel.begin(), m_vLabel.end(), m_vGenerationInverseLabel[i].c_str() ) == m_vLabel.end() )
			return false;
	}

	size_t tResizeCount = (m_iDataCount*m_nFieldCount+m_iDataCount);
	if( tResizeCount > m_vCellRepository.size() ) 
		m_vCellRepository.resize( tResizeCount );
	
	int iOffset = (iPrevDataCount*m_nFieldCount+iPrevDataCount);

	for( int i=0; i<iDataCount ; ++i ) 
	{
		Cell tempCell;
		
		int iItemID = 0;
		pStream->Read( &iItemID, sizeof(int) );	

		tempCell.SetInteger( iItemID );

		if( m_mItemIDStartCellIndex.find( iItemID ) == m_mItemIDStartCellIndex.end() )
			m_vItemID.push_back( iItemID );

		m_vCellRepository[iOffset++] = tempCell;
		m_mItemIDStartCellIndex.insert( TDItemIDCellIndex::value_type( iItemID, (iPrevDataCount+i )*(m_nFieldCount+1) ) );

		for( int j=0; j<m_nFieldCount; ++j ) 
		{
			int iTemp = 0;
			float fTemp = 0.f;
			char szTemp[4096];

			switch( vFieldType[j] ) 
			{
				case FieldType::STRING:
				{		
					short nTemp = 0;
					pStream->Read( &nTemp, sizeof(short) );
					if( nTemp < 0 || nTemp >= _countof(szTemp) ) 
						return false;

					pStream->Read( szTemp, nTemp );
					szTemp[nTemp] = 0;
					tempCell.SetString( m_StringPool.Alloc( szTemp, strlen(szTemp) ) );
					break;
				}
				case FieldType::BOOL:
				case FieldType::NA:
				case FieldType::INT:
				{
					pStream->Read( &iTemp, sizeof(int) );
					tempCell.SetInteger( iTemp );
					break;
				}
				case FieldType::PER:
				case FieldType::FLOAT:
				{
					pStream->Read( &fTemp, sizeof(float) );
					tempCell.SetFloat( fTemp );
					break;
				}
			}
			
			m_vCellRepository[iOffset++] = tempCell;

			if( !m_vGenerationInverseLabel.empty() && std::find( m_vGenerationInverseLabel.begin(), m_vGenerationInverseLabel.end(), m_vLabel[j] ) == m_vGenerationInverseLabel.end() ) 
				continue;

			if( m_bDontUseItemIDData )
				continue;

			switch( vFieldType[j] ) 
			{
				case FieldType::NA:
				case FieldType::BOOL:
				case FieldType::INT:
				{
					TDIntItemID::iterator itor = m_pmIntItemID[j].find( iTemp );
					if( itor == m_pmIntItemID[j].end() ) 
					{
						std::vector<int> vTemp;
						vTemp.push_back( iItemID );
						m_pmIntItemID[j].insert( std::make_pair( iTemp, vTemp ) );
					}
					else 
					{
						(*itor).second.push_back( iItemID );
					}
					break;
				}
				case FieldType::STRING:
				{
					TDStringItemID::iterator itor = m_pmStringItemID[j].find( szTemp );
					if( itor == m_pmStringItemID[j].end() ) 
					{
						std::vector<int> vTemp;
						vTemp.push_back( iItemID );
						m_pmStringItemID[j].insert( std::make_pair( szTemp, vTemp ) );
					}
					else 
					{
						(*itor).second.push_back( iItemID );
					}
					break;
				}
/*				case FieldType::PER:
				case FieldType::FLOAT:
				{
					TDFloatItemID::iterator itor = m_pmFloatItemID[j].find( fTemp );
					if( itor == m_pmFloatItemID[j].end() ) 
					{
						std::vector<int> vTemp;
						vTemp.push_back( iItemID );
						m_pmFloatItemID[j].insert( std::make_pair( fTemp, vTemp ) );
					}
					else 
					{
						(*itor).second.push_back( iItemID );
					}
					break;
				}*/
			}
		}
	}

    return true;
}

int CDNTableFile::_GetStartCellIndexFromItemID( int iItemID )
{
	TDItemIDCellIndex::iterator itor = m_mItemIDStartCellIndex.find( iItemID );
	return (itor==m_mItemIDStartCellIndex.end()) ? -1 : (*itor).second;
}

int	CDNTableFile::_GetFieldIndexFromFieldName( const char* pszFieldName )
{
	TDFieldNameFieldIndex::iterator itor = m_mFieldNameFieldIndex.find( pszFieldName );
	return (itor==m_mFieldNameFieldIndex.end()) ? -1 : (*itor).second;
}

bool CDNTableFile::GetFieldFromLable( int iItemID, const char* pszFieldName, DNTableCell& retCell )
{
	retCell = Cell();

	int iStartCellIndex = _GetStartCellIndexFromItemID( iItemID );
	if( iStartCellIndex == -1 ) 
		return false;

	int iFieldIndex = _GetFieldIndexFromFieldName( pszFieldName );
	if( iFieldIndex < 0 )
	{
		ASSERT(0);
		return false;
	}
	
	retCell = m_vCellRepository[ iStartCellIndex + iFieldIndex + 1 ];
	return true;
}

CDNTableFile::Cell* CDNTableFile::GetFieldPtr( int iItemID, int iFieldNum )
{
	int iStartCellIndex = _GetStartCellIndexFromItemID(iItemID);
	if( iStartCellIndex == -1 || iFieldNum < 0 || iFieldNum >= GetFieldCount() ) 
		return NULL;

	return &m_vCellRepository[iStartCellIndex+iFieldNum+1];
}

CDNTableFile::Cell* CDNTableFile::GetFieldFromLablePtr( int iItemID, const char* pszFieldName )
{
	int iStartCellIndex = _GetStartCellIndexFromItemID( iItemID );
	if( iStartCellIndex == -1 ) 
		return NULL;

	int iFieldIndex = _GetFieldIndexFromFieldName( pszFieldName );
	if( iFieldIndex == -1 )
		return NULL;

	return &m_vCellRepository[iStartCellIndex+iFieldIndex+1];
}

CDNTableFile::Cell* CDNTableFile::GetFieldFromLablePtr( int iStartCellIndex, int iFieldNum )
{
	if( iStartCellIndex == -1 || iFieldNum < 0 )
		return NULL;

	return &m_vCellRepository[iStartCellIndex+iFieldNum+1];
}

int CDNTableFile::GetItemID( UINT uiIndex )
{
	return (uiIndex >= m_vItemID.size()) ? -1 : m_vItemID[uiIndex];
}

bool CDNTableFile::IsExistItem( int iItemID )
{
	return ( _GetStartCellIndexFromItemID( iItemID ) == -1 ) ? false : true;
}

int CDNTableFile::GetArrayIndex( int iItemID )
{
	int iCellStartIndex = _GetStartCellIndexFromItemID(iItemID);
	return iCellStartIndex / ( GetFieldCount() + 1 );
}

int CDNTableFile::GetItemIDListFromField( const char *szFieldLabel, int iValue, std::vector<int>& vVec, bool bClearList/*=true*/ )
{
	if( m_pmIntItemID == NULL )
		return -1;

	int iFieldNum = _GetFieldIndexFromFieldName( szFieldLabel );
	if( iFieldNum == -1 ) 
		return -1;

	TDIntItemID::iterator itor = m_pmIntItemID[iFieldNum].find(iValue);
	if( itor == m_pmIntItemID[iFieldNum].end() ) 
		return -1;
	if( (*itor).second.empty() ) 
		return -1;

	if( bClearList == true )
		vVec = (*itor).second;
	else
		vVec.insert( vVec.end(), (*itor).second.begin(), (*itor).second.end() );

	return static_cast<int>((*itor).second.size());
}

int CDNTableFile::GetItemIDFromField( const char* pszFieldName, const char* pszValue )
{
	if( m_pmStringItemID == NULL )
		return -1;

	int iFieldIndex = _GetFieldIndexFromFieldName( pszFieldName );
	if( iFieldIndex == -1 ) 
		return -1;

	TDStringItemID::iterator itor = m_pmStringItemID[iFieldIndex].find( pszValue );
	if( itor == m_pmStringItemID[iFieldIndex].end() )
		return -1;

	return (*itor).second.empty() ? -1 : (*itor).second[0];
}

int CDNTableFile::GetItemIDFromField( const char* pszFieldName, int iValue )
{
	if( m_pmIntItemID == NULL )
		return -1;

	int iFieldIndex = _GetFieldIndexFromFieldName( pszFieldName );
	if( iFieldIndex == -1 ) 
		return -1;

	TDIntItemID::iterator itor = m_pmIntItemID[iFieldIndex].find( iValue );
	if( itor == m_pmIntItemID[iFieldIndex].end() )
		return -1;

	return (*itor).second.empty() ? -1 : (*itor).second[0];
}

int CDNTableFile::GetItemIDFromFieldCaseFree( const char* pszFieldName, const char* pszValue )
{
	int iFieldIndex = _GetFieldIndexFromFieldName( pszFieldName );
	if( iFieldIndex == -1 ) 
		return -1;
	
	for( UINT i=0 ; i < m_vItemID.size() ; ++i )
	{
		if( stricmp( GetFieldPtr( m_vItemID[i], iFieldIndex )->GetString(), pszValue ) == 0 ) 
			return m_vItemID[i];
	}

	return -1;
}

