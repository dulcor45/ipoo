
#include <iostream>
#include "ArrayContainer.h"

using namespace std;

int main() {
	ArrayContainer <int, 5> intac;
	ArrayContainer <float, 10> floatac;
	
	intac.set(2, 3);
	/*floatac.set(3, 3.5);
	
	cout << intac.get(2) << endl;
	cout << floatac.get(3) << endl;*/
	
	return 0;
}