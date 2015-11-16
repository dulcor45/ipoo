
#include <iostream>
#include "Container.h"

using namespace std;

int main() 
{
	Container<int> icont(5);
	Container<char> ccont('r');
	cout << icont.inc() << endl;
	cout << ccont.uppercase() << endl;
	return 0;
}