#pragma once
#include <iostream>
using namespace std;

class RAM
{
	double price;
	string model;
	long long memoryInBytes;
public:
	RAM();
	RAM(double _price, string _model, long long _memoryInBytes);

	//METHODS
	void printInfo()const;

	//GETTERS
	double getPrice()const;
	string getModel()const;
	long long getMemoryInBytes()const;
	//SETTERS
	void setPrice(double _price);
	void setModel(string _model);
	void setMemoryInBytes(long long _memoryInBytes);
};