
#include "Vector.h"

#include <iostream>

using namespace std;

int main()
{
	Vector V1(2.4, 5.3, 3.1, 8.9);

	V1.Print();
	cout << "  La distancia es" << V1.Distance() << endl;

	return 0;
}
