#pragma once
#include "Figure.h"
class Point :
    public Figure
{
private: 
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {};

    int getX() { return x; }
    int getY() { return y; }
       
    double distanceFromOrigin() override{
        return sqrt(x * x + y * y);
    }
    string printInfo() override {
        string s = "";
        s += "Point: (" + to_string(x) + ", " + to_string(y) + ")\n";
        return s;
    }
    string getType() override { return "Point"; }
};

