#include "Laptop.h"

Laptop::Laptop()
{
	brand = "";
	price = 0;
}

Laptop::Laptop(CPU _cpu, RAM _ram, SSD _ssd, string _brand, double _price, Mouse* _mouse, Cam* _cam)
{
	cpu = _cpu;
	ram = _ram;
	ssd = _ssd;
	brand = _brand;
	price = _price;
	mouse = _mouse;
	cam = _cam;
}

void Laptop::printInfo()
{
	cout << "-Laptop:\nBrand: " << brand << "\nPrice: " << price << endl;
	cout << "-CPU:\n";
	cpu.printInfo();
	cout << "-RAM:\n";
	ram.printInfo();
	cout << "-SSD:\n";
	ssd.printInfo();
	cout << "-Mouse:\n";
	(*mouse).printInfo();
	cout << "-Camera:\n";
	(*cam).printInfo();
}

CPU Laptop::getCpu()
{
	return cpu;
}

RAM Laptop::getRam()
{
	return ram;
}

SSD Laptop::getSsd()
{
	return ssd;
}

string Laptop::getBrand()
{
	return brand;
}

double Laptop::getPrice()
{
	return price;
}

Mouse* Laptop::getMouse()
{
	return mouse;
}

Cam* Laptop::getCam()
{
	return cam;
}

void Laptop::setCpu(CPU _cpu)
{
	cpu = _cpu;
}

void Laptop::setRam(RAM _ram)
{
	ram = _ram;
}

void Laptop::setSsd(SSD _ssd)
{
	ssd = _ssd;
}

void Laptop::setBrand(string _brand)
{
	brand = _brand;
}

void Laptop::setPrice(double _price)
{
	price = _price;
}

void Laptop::setMouse(Mouse* _mouse)
{
	mouse = _mouse;
}

void Laptop::setCam(Cam* _cam)
{
	cam = _cam;
}
