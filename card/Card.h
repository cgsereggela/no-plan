#ifndef Card_H
#define Card_H

#include <string>

#include <gtk/gtk.h>

#include "Cost.h"
#include "Types.h"

class Card
{
public:

	// constructor
	Card();

	// destructor
	~Card();

	// add cost
	void addCost(e_Colour colour);
	void addCost(long cost);

	// set name
	void setName(std::string name);

	// set set
	void setSet(e_Set set);

	// set type
	void setType(e_Type type);

	// add subtype
	void addSubtype(long subtype);
	
	// set power
	void setPower(long power);

	// set toughness
	void setToughness(long toughness);

	// set rules
	void setRules(std::string rules);

	// set colour
	void setColour(e_Colour left, e_Colour right);

	// set rarity
	void setRarity(e_Rarity rarity);

protected:
private:

	// card converted mana cost
	Cost *m_cost;

	// card name
	std::string m_name;

	// card set
	e_Set m_set;

	// card type
	e_Type m_type;

	// bit-wise OR to define card subtype
	unsigned long m_subtype;

	// power
	long m_power;

	// toughness
	long m_toughness;

	// rules
	std::string m_rules;

	// colour
	e_Colour m_leftColour;
	e_Colour m_rightColour;

	// card rarity
	e_Rarity m_rarity;

	// card art
	GtkWidget *m_art;
};

#endif