
#include <iostream>

using namespace std;

void ordena(int* p)
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 9; j++)
		{
			if (p[j] > p[j+1])
			{
				int x = p[j];
				p[j] = p[j+1];
				p[j+1] = x;
			}		
		}
	}
}


int main(){

	int lis[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Numero: "; cin >> lis[i];
	}

	ordena(lis);

	cout << endl;
	cout << "Ordenado: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Numero: " << lis[i] << endl;
	}

	return 0;
}