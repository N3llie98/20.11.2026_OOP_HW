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
	void printInfo();

	//GETTERS
	unsigned short getResolutionHeight();
	unsigned short getResolutionWidth();
	//SETTERS
	void setResolutionHeight(unsigned short _resolutionHeight);
	void setResolutionWidth(unsigned short _resolutionWidth);
};

