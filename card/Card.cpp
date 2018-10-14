#include "Card.h"

Card::Card() :
	m_cost(0),
	m_name(""),
	m_set(SET_NONE),
	m_type(TYPE_NONE),
	m_subtype(SUBTYPE_NONE)
{
	// file definition for cards
	// COST      | value,type,...
	//             space
	// NAME      | namestring
	//             space
	// SET       | setstring
	//             space
	// TYPE      | typestring
	//             space
	// SUBTYPE   | subtypestring
	//             space
	// POWER     | value
	//             space
	// TOUGHNESS | value
	//             space
	// RULES     | rules (will include keywords for newline, bullets, symbol, etc)
}

Card::~Card()
{

}

