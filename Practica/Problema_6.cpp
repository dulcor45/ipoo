
#include <iostream>
#include <string>

using namespace std;

string Copiar(string x)
{
	string cadena;
	cadena = x;
	return cadena;
}

string Juntar(string x, string y)
{
	string cadena;
	cadena = x + y;
	return cadena;
}

int Longitud(string x)
{
	int Num;
	Num = x.length();
	return Num;
}

bool Compara(string x, string y)
{
	if (x == y)
	{
		return true;
	}

	else {return false; }
}



int main()
{	string x, y, z;
	int Num = 0;

	x="Hola";

	y = Copiar(x);

	z = Juntar(x, y);

	Num = Longitud(x);

	cout << x << endl << y << endl << z << endl << Num << endl;


	return 0;
}