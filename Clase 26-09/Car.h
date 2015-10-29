
#include <iostream>
#include <string>
#include <sstream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle 
{ 
	string style;

public:
	Car( const string myLicense , const int myYear , const string myStyle )
 	: Vehicle ( myLicense , myYear ), style ( myStyle ) {}

 	string getStyle ();
};