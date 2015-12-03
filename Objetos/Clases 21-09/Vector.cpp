
#include <iostream>

#include "Vector.h"
#include <cmath>

using namespace std;

Vector::Vector(){}

Vector::Vector(double X1, double Y1, double X2, double Y2)
	: Start(X1, Y1), End(X2, Y2)
{
/*	
	Punto _Start(X1, Y1), _End(X2, Y2);	
	Start = _Start;
	End = _End;
*/
}

double Vector::Distance(){
	return sqrt(pow((End.Get_X() - Start.Get_X()),2) + pow((End.Get_Y() - Start.Get_Y()),2));
}

void Vector::Print()
{
	cout << endl;
	cout << "   Las cordenadas en el primer punto son: (" << Start.Get_X() << " ; " << Start.Get_Y() << ")" << endl;
	cout << endl;
	cout << "   Las cordenadas en el segundo punto son: (" << End.Get_X() << " ; " << End.Get_Y() << ")" << endl;
	cout << endl;
	
}




