
#include <string>

#include "Symbol.h"

Symbol::Symbol(e_Colour colour, long value) :
	m_colour(colour),
	m_value(value)
{
	switch (m_colour)
	{
		case COLOUR_NONE:
		{
			if (value < -1 || value > 9)
			{
				// create an error png for safety
				m_image = gtk_image_new_from_file("symbols/error.png");
			}
			else
			{
				std::string val_text = "symbols/";
				val_text += std::to_string(value);
				val_text += "symbol.png";
				m_image = gtk_image_new_from_file(val_text.c_str());
			}
		}
		break;

		case COLOUR_RED:
		{
			m_image = gtk_image_new_from_file("symbols/jund.png");
		}
		break;

		case COLOUR_WHITE:
		{
			m_image = gtk_image_new_from_file("symbols/bant.png");
		}
		break;

		case COLOUR_GREEN:
		{
			m_image = gtk_image_new_from_file("symbols/naya.png");
		}
		break;

		case COLOUR_BLUE:
		{
			m_image = gtk_image_new_from_file("symbols/esper.png");
		}
		break;

		case COLOUR_BLACK:
		{
			m_image = gtk_image_new_from_file("symbols/grixis.png");
		}
		break;

		default:
			break;
	}
}

Symbol::~Symbol()
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

GtkWidget *Symbol::getImage()
{
	return m_image;
}