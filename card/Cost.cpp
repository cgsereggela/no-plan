#include "Cost.h"

Cost::Cost()
{

}

Cost::~Cost()
{

}

long Cost::getManaCost()
{
	long ret;

	for (unsigned long i = 0; i < m_displayCost.size(); ++i)
	{
		ret += m_displayCost[i].getValue();
	}

	return ret;
}