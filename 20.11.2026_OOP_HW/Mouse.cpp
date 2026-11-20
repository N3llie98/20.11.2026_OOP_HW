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

void Mouse::printInfo()
{
	cout << "Weight: " << weight << "\nDPI: " << dpi << endl;
}

double Mouse::getWeight()
{
	return weight;
}

unsigned int Mouse::getDpi()
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
