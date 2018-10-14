#ifndef Symbol_H
#define Symbol_H

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

protected:
private:

	// symbol colour
	e_Colour m_colour;

	// symbol value
	long m_value;
};

#endif