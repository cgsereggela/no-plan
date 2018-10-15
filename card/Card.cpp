#include "Card.h"

Card::Card() :
	m_cost(0),
	m_name(""),
	m_set(SET_NONE),
	m_type(TYPE_NONE),
	m_subtype(SUBTYPE_NONE),
	m_power(0),
	m_toughness(0),
	m_rules(""),
	m_leftColour(COLOUR_NONE),
	m_rightColour(COLOUR_NONE),
	m_rarity(RARITY_NONE),
	m_art(0)
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
	// COLOUR    | leftcolourstring,rightcolourstring
	//             space
	// RARITY    | raritystring
	//             space
	// RULES     | rules (will include keywords for newline, bullets, symbol, etc)
}

Card::~Card()
{

}

void Card::addCost(e_Colour colour)
{
	if (!m_cost)
	{
		m_cost = new Cost();
	}

	m_cost->addCost(colour);
}

void Card::addCost(long cost)
{
	if (!m_cost)
	{
		m_cost = new Cost();
	}

	m_cost->addCost(cost);
}

void Card::setName(std::string name)
{
	m_name = name;
}

void Card::setSet(e_Set set)
{
	m_set = set;
}

void Card::setType(e_Type type)
{
	m_type = type;
}

void Card::addSubtype(long subtype)
{
	m_subtype |= subtype;
}

void Card::setPower(long power)
{
	m_power = power;
}

void Card::setToughness(long toughness)
{
	m_toughness = toughness;
}

void Card::setRules(std::string rules)
{
	m_rules = rules;
}

void Card::setColour(e_Colour leftColour, e_Colour rightColour)
{
	m_leftColour = leftColour;
	m_rightColour = rightColour;
}

void Card::setRarity(e_Rarity rarity)
{
	m_rarity = rarity;
}