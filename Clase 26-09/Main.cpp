#include <iostream>
#include <string>
#include <sstream>

#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	Vehicle V1("ABC123", 2015);

	cout << V1.getDesc() << endl;

	Car C1("ZXC456", 2014, "RED");
	cout << C1.getDesc() << endl;


	return 0;
}