
#include <iostream>
#include <string>

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle 
{ 
	string style;

public:
	Car( const string myLicense , const int myYear , const string myStyle )
 	: Vehicle ( myLicense , myYear ), style ( myStyle ) {}

 	string getStyle();
};


class Truck : public Vehicle 
{ 
	int Peso;

public:
	Truck( const string myLicense , const int myYear , const int myPeso)
 	: Vehicle ( myLicense , myYear ), Peso ( myPeso ) {}

 	int getPeso();
};