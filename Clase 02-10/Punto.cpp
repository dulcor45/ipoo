#include "Punto.h"
#include <iostream>

using namespace std;

Punto::Punto()
{
	x = 0.0;
	y = 0.0;
}

Punto::Punto(double _X, double _Y)
{
		x = _X;
		y = _Y;
}

double Punto::Get_X()
{
	return x;
}

double Punto::Get_Y()
{
	return y;
}

void Punto::Print()
{
	cout << "(" << Get_X() << ";" << Get_Y() << ")" << endl;
}

Punto::~Punto()
{
	cout << "Murio " << endl;
}