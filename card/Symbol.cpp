#include "Symbol.h"

Symbol::Symbol() :
	m_colour(colour),
	m_value(value)
{
	
}

Symbol:~Symbol()
{
	
}

bool Symbol::isNumber()
{
	return m_colour == COLOUR_NONE;
}

e_Colour Symbol::getColour()
{
	return m_colour;
}

long Symbol::getValue()
{
	if (m_colour != COLOUR_NONE)
	{
		return 1;
	}
	else
	{
		return m_value;
	}
}