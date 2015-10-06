#include <iostream>
#include <string>

using namespace std;

int Factorial(int a)
{
	int res = 1;

	for (int i = 2; i <= a; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	
	int x;
	cout << "Numero: "; cin >> x;
	cout << "La factorial es: " << Factorial(x) << endl;

	return 0;
}