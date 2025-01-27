#include <iostream>
#include "Rect.hpp"

using namespace std;

int main() {

	Rect r1(1,2);
	Rect r2(3, 4);
	Rect r3;


	r3=r1+r2;

	cout <<"La suma de las coordenadas rectangulares es: "<< r3.getX() << " " << r3.getY() << endl;
	return 0;


}