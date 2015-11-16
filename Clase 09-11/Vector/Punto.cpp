
#include "Punto.h"
#include <iostream>

using namespace std;

template <typename T>
Punto<T>::Punto()
{
	x = 0.0;
	y = 0.0;
}

template <typename T>
Punto<T>::Punto(T _X, T _Y)
{
		x = _X;
		y = _Y;
}

template <typename T>
T Punto<T>::Get_X()
{
	return x;
}

template <typename T>
T Punto<T>::Get_Y()
{
	return y;
}

template <typename T>
void Punto<T>::Print()
{
	cout << "(" << Get_X() << "; " << Get_Y() << ")" << endl;
}

template class Punto<float>;
template class Punto<int>;