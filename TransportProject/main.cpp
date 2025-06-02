#include<iostream>
#include<string>
#include"GasStation.h"
using namespace std;

int main() {
	const int size = 3;
	Car cars[size] = { Car(40), Car(50), Car(45) };
	Bus buses[size] = { Bus(255), Bus(250), Bus(300) };
	Truck trucks[size] = { Truck(500), Truck(300), Truck(400) };
	Plane planes[size] = { Plane(2000), Plane(3000), Plane(2860) };

	GasStation station;

	int total = station.calculateTotalGas(cars, buses, trucks, planes, size);

	cout << "Total gas " << total;
}