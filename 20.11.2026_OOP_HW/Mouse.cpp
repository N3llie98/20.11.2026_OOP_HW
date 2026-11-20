#include "Mouse.h"

Mouse::Mouse()
{
	weight = 0;
	dpi = 0;
}

Mouse::Mouse(double _weight, unsigned int _dpi)
{
	weight = _weight;
	dpi = _dpi;
}

void Mouse::printInfo()const
{
	cout << "Weight: " << weight << "\nDPI: " << dpi << endl;
}

double Mouse::getWeight()const
{
	return weight;
}

unsigned int Mouse::getDpi()const
{
	return dpi;
}

void Mouse::setWeight(double _weight)
{
	weight = _weight;
}

void Mouse::setDpi(unsigned int _dpi)
{
	dpi = _dpi;
}
