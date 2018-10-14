#ifndef Card_H
#define Card_H

#include "Description.h"
#include "Cost.h"
#include "Types.h"

class Card
{
public:

	// constructor
	Card();

	// destructor
	~Card();

protected:
private:

	// card converted mana cost
	Cost *m_cost;

	// card name
	std::string m_name;

	enum e_Set
	{
		SET_NONE,
		SET_GUILDS_OF_RAVNICA,
		SET_MAGIC_ARENA,
		SET_CORE_SET_2019,
		SET_DOMINARIA,
		SET_RIVALS_OF_IXALAN,
		SET_IXALAN,
		SET_HOUR_OF_DEVASTATION,
		SET_AMONKHET,
		SET_WELCOME_DECK_2017,
		SET_AETHER_REVOLT,
		SET_KALADESH,
		SET_OATH_OF_THE_GATEWATCH
	};

	// card set
	e_Set m_set;

	enum e_Type
	{
		TYPE_NONE,
		TYPE_INSTANT,
		TYPE_SORCERY,
		TYPE_CREATURE,
		TYPE_ENCHANTMENT,
		TYPE_ARTIFACT,
		TYPE_PLANESWALKER,
		TYPE_LAND
	};

	// card type
	e_Type m_type;

	enum e_SubType
	{
		SUBTYPE_NONE,
		SUBTYPE_HUMAN,
		SUBTYPE_CLERIC,
		SUBTYPE_KNIGHT,
		SUBTYPE_VAMPIRE,
		SUBTYPE_BIRD,
		SUBTYPE_CAT,
		SUBTYPE_SOLDIER,
		SUBTYPE_WIZARD,
		SUBTYPE_ZOMBIE,
		SUBTYPE_MINOTAUR,
		SUBTYPE_ELF,
		SUBTYPE_JACKAL
	};

	// bit-wise OR to define card subtype
	unsigned long m_subtype;

	// power
	long m_power;

	// toughness
	long m_toughness;

	// rules
	std::string m_rules;

	// bit-wise OR to define colour
	unsigned long m_colour;

	enum e_Rarity
	{
		RARITY_COMMON,
		RARITY_UNCOMMON,
		RARITY_RARE,
		RARITY_MYTHIC_RARE,
		RARITY_BASIC_LAND
	};

	// card rarity
	e_Rarity m_rarity;
};

#endif