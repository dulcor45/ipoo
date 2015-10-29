#include "Vehicle.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string  Vehicle::getDesc()
{
	string s;
   	stringstream out;
  	out << year;
    s = out.str();
	return license + " from " + s;
}

string Vehicle::getLicense()
{
	return license;
}

int Vehicle::getYear()
{
	return year;
}