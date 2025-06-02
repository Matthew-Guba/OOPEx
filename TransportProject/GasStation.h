#pragma once
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include "Plane.h"

class GasStation
{
public:
	int calculateTotalGas(Car* cars, Bus* buses, Truck* trucks,Plane* planes, int size) {
		int total = 0;
		for (int i = 0; i < size; i++) {
			total += cars[i].volume;
		}
		for (int i = 0; i < size; i++) {
			total += buses[i].tank;
		}
		for (int i = 0; i < size; i++) {
			total += trucks[i].volume;
		}
		for (int i = 0; i < size; i++) {
			total += planes[i].tank;
		}
		return total;
	}
};

