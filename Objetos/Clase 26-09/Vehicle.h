#include <string>

using namespace std;

class Vehicle
{
protected:
	string license;
	int year;

public:
	Vehicle(const string myLicense, const int myYear);
	
	virtual const string getDesc() = 0;

	virtual string getLicense() = 0;

	virtual int getYear() = 0;
};