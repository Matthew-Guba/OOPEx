#pragma once
#include"Transport.h"
class Car : public Transport
{
public:
	int volume;
	int speed;
	double price;

	Car(int volume) : Transport(tank) {};
};

