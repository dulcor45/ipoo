#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(){

	int lis[400000];
	int x;

	cout << "Numero: "; cin >> x;

	srand (time(NULL));
	for (int i = 0; i < 400000; i++)
	{
		lis[i]=rand()%101;
	}

	for (int i = 0; i < 400000; i++)
	{
		if (lis[i]==x)
		{
			cout << "Encontro: " << lis[i] << " en la cordenada " << i << endl;
			break;
		}
	}

	return 0;
}