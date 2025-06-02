#pragma once
#include "Transport.h";

class Plane : public Transport
{
public:
	int tank;

	Plane(int tank) : Transport(tank) {};
};

