#ifndef Symbol_H
#define Symbol_H

#include <gtk/gtk.h>

#include "Types.h"

class Symbol
{
public:

	// constructor
	// colour - the symbol colour
	// value  - if colour is none, the number value, -1 for x
	Symbol(e_Colour colour, long value = 0);

	// destructor
	~Symbol();

	// is the symbol a number
	bool isNumber();

	// get the symbol colour
	e_Colour getColour();

	// the symbol value
	long getValue();

	// the image reference
	GtkWidget *getImage();

protected:
private:

	// symbol colour
	e_Colour m_colour;

	// symbol value
	long m_value;

	// symbol image
	GtkWidget *m_image;
};

#endif