#pragma once
#include "Transport.h"
class Bus : public Transport
{
public:
	int tank;
	int count;

	Bus(int tank) : Transport(tank) {};

};

