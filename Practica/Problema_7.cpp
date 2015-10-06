#include <iostream>
#include <string>

using namespace std;

int main()
{
	int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

	if ((**matr = 1) and (*(*(matr+1)+2) = 7) and (*(matr[2]+3) = 12) and ((*(matr+2))[2] = 11 ))
	{
		cout << "es corecto " << endl;
	}

	return 0;
}