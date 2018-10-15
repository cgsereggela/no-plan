#ifndef Cost_H
#define Cost_H

#include <vector>

#include "Symbol.h"

class Cost
{
public:

	// constructor
	Cost();

	// destructor
	~Cost();

	// converted mana cost
	long getManaCost();

protected:
private:

	// vector of symbols to represent display cost
	std::vector<Symbol> m_displayCost;
};

#endif