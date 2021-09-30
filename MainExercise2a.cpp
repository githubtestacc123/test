#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle box1(4.0, 3.0);
	const Rectangle box2(1.0, 1.0);

	box1.setWidth(2.0).setLength(2.0);




	cout << Rectangle::getNumRectangles() << endl;		//static function call



	system("PAUSE");
	return 0;
}
