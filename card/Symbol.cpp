
#include "Symbol.h"

Symbol::Symbol() :
	m_colour(colour),
	m_value(value)
{
	switch (m_colour)
	{
		case COLOUR_NONE:
		case COLOUR_RED:
		case COLOUR_WHITE:
		case COLOUR_GREEN:
		case COLOUR_BLUE:
		case COLOUR_BLACK:
		{
			m_image = gtk_image_from_file("naya.png");
		}

		default:
			break;
	}
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