
#include <iostream>

using namespace std;

int main()
{
	int r[8];
	int x=7;

	for (int i = 0; i < 8; i++)
	{
		cout << "Numero: "; cin >> r[i];
	}

	while (x>=0)
	{
		cout << r[x] << endl;
		x-=1;
	}

	return 0;
}