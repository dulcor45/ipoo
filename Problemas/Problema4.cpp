
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int** crearMatriz(int f, int c){
    srand (time(NULL));

    int** m = new int*[f];

    for(int i=0; i<f;i++){
        (*(m+i)) = new int[c];
    }
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            *((*(m+i))+j) = rand()%100;
        }
    }

    return m;
}

int main()
{
	int** matriz = crearMatriz(100, 100);

	int x=0;

	cout << "Numero: "; cin >> x;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (matriz[i][j] == x)
			{
				cout << "[" << i << "][" << j << "] = " << matriz[i][j] << endl;
			}
		}
	}

	return 0;
}