#include "Cost.h"

Cost::Cost()
{

}

Cost::~Cost()
{

}

void Cost::addCost(e_Colour colour)
{
	// get the symbol that represents the cost
	Symbol *symbol = new Symbol(colour);

	// add the symbolic cost to the end
	m_displayCost.push_back(symbol);
}

void Cost::addCost(long cost)
{
	// get the symbol that represents the cost
	Symbol *symbol = new Symbol(COLOUR_NONE, cost);

	// insert the numeric cost as the beginning
	m_displayCost.insert(m_displayCost.begin(), symbol);
}

long Cost::getManaCost()
{
	long ret;

	for (unsigned long i = 0; i < m_displayCost.size(); ++i)
	{
		ret += m_displayCost[i]->getValue();
	}

	return ret;
}