#pragma once

class CMultiRoom {
public:
	CMultiRoom( unsigned int iRoomID ) { m_iRoomID = iRoomID; }
	virtual ~CMultiRoom() {}

protected:
	unsigned int m_iRoomID;

public:
	//unsigned int GetSessionID() { return m_iRoomID; }			// Needs renaming
	unsigned int GetRoomID() { return m_iRoomID; }

};
