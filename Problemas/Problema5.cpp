#include <iostream>

using namespace std;

int main(){

	float lis[7];

	for (int i = 0; i < 7; i++)
	{
		cout << "Numero: "; cin >> lis[i];
	}

	float min=lis[0];

	for (int i = 1; i < 7; i++)
	{
		if (min > lis[i])
		{
			min = lis[i];
		}
	}

	float max=lis[0];

	for (int i = 1; i < 7; i++)
	{
		if (max < lis[i])
		{
			max = lis[i];
		}
	}

	cout << "El menor es: " << min << endl;
	cout << "El mayor es: " << max << endl;

	return 0;
}