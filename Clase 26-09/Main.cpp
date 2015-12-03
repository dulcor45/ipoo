
#include <iostream>
#include <string>

#include "Herencia.h"

using namespace std;

int main()
{
	Vehicle V1("ABC 123", 2015);

	cout << V1.getDesc() << endl;
	cout << V1.getLicense() << endl;
	cout << V1.getYear() << endl;
	cout << endl;

	Car C1("DEF 456", 2014, "RED");

	cout << C1.getDesc() << endl;
	cout << C1.getLicense() << endl;
	cout << C1.getYear() << endl;
	cout << C1.getStyle() << endl;
	cout << endl;

	Truck T1("GHI 789", 2013, 67890);

	cout << T1.getDesc() << endl;
	cout << T1.getLicense() << endl;
	cout << T1.getYear() << endl;
	cout << T1.getPeso() << endl;
	cout << endl;

	return 0;
}