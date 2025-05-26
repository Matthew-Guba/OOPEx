#include "Point2D.h"
int main() {
	Point2D a(1, 1), b(2, 2);

	cout << a.toString() << " + " << b.toString()
		<< " = " << a.sum(b).toString() << endl;

	int value = 5;
	cout << a.toString() << " + " << b.toString()
		<< " = " << a.sum(value).toString() << endl;

	return 0;
}