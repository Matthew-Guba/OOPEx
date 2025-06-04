#include"Figure.h"
#include"Point.h"
#include"Circle.h"
#include"Line.h"
#include"Rectangle.h"

int main() {
	int size = 4;

	Figure** figures = new Figure * [size]
	{
		new Point(3, 4),
			new Line(Point(1, 1), Point(4, 5)),
			new Circle(Point(1, 1), 3),
			new Rectangle(Point(5, 2), 3, 2)
	};



	return 0;
}