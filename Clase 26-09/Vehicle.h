#include <string>

using namespace std;

class Vehicle
{
protected:
	string license;
	int year;

public:
	Vehicle(const string myLicense, const int myYear)
		: license(myLicense), year(myYear) {}

	string getDesc();

	string getLicense();

	int getYear();
};