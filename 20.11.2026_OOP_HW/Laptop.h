#pragma once
#include <iostream>
using namespace std;
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "Mouse.h"
#include "Cam.h"

class Laptop
{
	CPU cpu;
	RAM ram;
	SSD ssd;
	string brand;
	double price;
	Mouse* mouse;
	Cam* cam;
public:
	Laptop();
	Laptop(CPU _cpu, RAM _ram, SSD _ssd, string _brand, double _price, Mouse* _mouse, Cam* cam);

	//METHODS
	void printInfo()const;

	//GETTERS
	CPU getCpu()const;
	RAM getRam()const;
	SSD getSsd()const;
	string getBrand()const;
	double getPrice()const;
	Mouse* getMouse()const;
	Cam* getCam()const;
	//SETTERS
	void setCpu(CPU _cpu);
	void setRam(RAM _ram);
	void setSsd(SSD _ssd);
	void setBrand(string _brand);
	void setPrice(double _price);
	void setMouse(Mouse* _mouse);
	void setCam(Cam* _cam);
};
