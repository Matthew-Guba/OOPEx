#pragma once
#include"Transport.h"
class Truck: public Transport
{
public:
	int gas;
	double volume;
	double weight;

	Truck(int volume) : Transport(tank) {};

};

