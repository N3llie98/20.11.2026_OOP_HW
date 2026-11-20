#pragma once
#include <iostream>
using namespace std;

class Mouse
{
	double weight;
	unsigned int dpi;
public:
	Mouse();
	Mouse(double _weight, unsigned int _dpi);

	//METHODS
	void printInfo()const;

	//GETTERS
	double getWeight()const;
	unsigned int getDpi()const;
	//SETTERS
	void setWeight(double _weight);
	void setDpi(unsigned int _dpi);
};

