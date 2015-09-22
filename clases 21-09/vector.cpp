#include <iostream>

using namespace std;

class Punto
{
public:
	double x, y;

};

class Vector{

public:
	Punto in, fin;
};

void imp(Vector v){
	cout << "xi= "<< v.in.x << endl;
	cout << "xf= "<< v.fin.x << endl;
	cout << "yi= "<< v.in.y << endl;
	cout << "yf= "<< v.fin.y << endl;
}

void llena(Vector &v){
	cout << "x inicio = "; cin >> v.in.x;
	cout << "x final = "; cin >> v.fin.x;
	cout << "y inicio = "; cin >> v.in.y;
	cout << "y final = "; cin >> v.fin.y;
}

int main(){

	Vector v1;

	Vector *caca;

	llena(v1);

	imp(v1);

	return 0;
}
