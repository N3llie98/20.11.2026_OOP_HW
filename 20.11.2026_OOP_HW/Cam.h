#pragma once
#include <iostream>
using namespace std;

class Cam
{
	unsigned short resolutionHeight;
	unsigned short resolutionWidth;
public:
	Cam();
	Cam(unsigned short _resolutionHeight, unsigned short _resolutionWidth);

	//METHODS
	void printInfo()const;

	//GETTERS
	unsigned short getResolutionHeight()const;
	unsigned short getResolutionWidth()const;
	//SETTERS
	void setResolutionHeight(unsigned short _resolutionHeight);
	void setResolutionWidth(unsigned short _resolutionWidth);
};

