#include "Cam.h"

Cam::Cam()
{
	resolutionHeight = 0;
	resolutionWidth = 0;
}

Cam::Cam(unsigned short _resolutionHeight, unsigned short _resolutionWidth)
{
	resolutionHeight = _resolutionHeight;
	resolutionWidth = _resolutionWidth;
}

void Cam::printInfo()const
{
	cout << "Resolution Height: " << resolutionHeight << "\nResolution Width: " << resolutionWidth << endl;
}

unsigned short Cam::getResolutionHeight()const
{
	return resolutionHeight;
}

unsigned short Cam::getResolutionWidth()const
{
	return resolutionWidth;
}

void Cam::setResolutionHeight(unsigned short _resolutionHeight)
{
	resolutionHeight = _resolutionHeight;
}

void Cam::setResolutionWidth(unsigned short _resolutionWidth)
{
	resolutionWidth = _resolutionWidth;
}
