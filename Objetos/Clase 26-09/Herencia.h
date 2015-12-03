
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

 	const string getDesc();

 	string getStyle();

 	string getLicense();

 	int getYear();
};


class Truck : public Vehicle 
{ 
	int Peso;

public:
	Truck( const string myLicense , const int myYear , const int myPeso)
 	: Vehicle ( myLicense , myYear ), Peso ( myPeso ) {}

 	const string getDesc();

 	int getPeso();

 	string getLicense();

 	int getYear();
};