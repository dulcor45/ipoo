
#include <iostream>
#include <string>
#include <sstream>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle 
{ 
	int Peso;

public:
	Truck( const string myLicense , const int myYear , const int myPeso)
 	: Vehicle ( myLicense , myYear ), Peso ( myPeso ) {}

 	int getPeso();
};