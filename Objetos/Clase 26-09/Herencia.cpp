
#include <iostream>
#include <string>
#include <sstream>

#include "Herencia.h"

using namespace std;

const string Car::getDesc()
{
	string s;
   	stringstream out;
  	out << year;
    s = out.str();
	return s + " " + style + ": " + license;
}

string Car::getStyle ()
{
	return style;
}

string Car::getLicense()
{
  return license;
}

int Car::getYear()
{
  return year;
}

const string Truck::getDesc()
{
	string s;
   	stringstream out;
  	out << year;
    s = out.str();

   	string q;
   	stringstream P;
  	P << Peso;
    q = P.str();

	return "Year: " + s + ", Peso: " + q + ", license: " + license;
}

int Truck::getPeso()
{
	return Peso;
}

string Truck::getLicense()
{
  return license;
}

int Truck::getYear()
{
  return year;
}