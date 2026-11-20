#include "SSD.h"
#include <iostream>
using namespace std;

SSD::SSD()
{
	price = 0;
	model = "";
	capacityInBytes = 0;
	readSpeed = 0;
}

SSD::SSD(double _price, string _model, long long _capacityInBytes, long long _readSpeed)
{
	price = _price;
	model = _model;
	capacityInBytes = _capacityInBytes;
	readSpeed = _readSpeed;
}

void SSD::printInfo()const
{
	cout << "Price: " << price << "\nModel: " << model
		<< "\nCapacity in bytes: " << capacityInBytes << "\nRead speed: " << readSpeed << endl;
}

double SSD::getPrice()const
{
	return price;
}

string SSD::getModel()const
{
	return model;
}

long long SSD::getCapacityInBytes()const
{
	return capacityInBytes;
}

long long SSD::getReadSpeed()const
{
	return readSpeed;
}

void SSD::setPrice(double _price)
{
	price = _price;
}

void SSD::setModel(string _model)
{
	model = _model;
}

void SSD::setCapacityInBytes(long long _capacityInBytes)
{
	capacityInBytes = _capacityInBytes;
}

void SSD::setReadSpeed(long long _readSpeed)
{
	readSpeed = _readSpeed;
}