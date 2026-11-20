#include <iostream>
using namespace std;
#include "Laptop.h"

int main()
{
	Mouse mouse(0.2, 16000);
	Cam cam(1080, 1920);
	cout << "=== MOUSE ===\n";
	mouse.printInfo();
	cout << "-------------------------\n=== CAMERA ===\n";
	cam.printInfo();
	cout << "-------------------------\n=== LAPTOP ===\n";
	Laptop laptop(CPU("Intel Core i7", 8, 300.0), RAM(150.0, "Corsair Vengeance", 9999), SSD(200.0, "Samsung 970 EVO", 9999, 99999), "Dell", 1000.0, &mouse, &cam);
	laptop.printInfo();
	return 0;
}