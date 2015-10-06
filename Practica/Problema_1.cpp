
#include <iostream>
#include <string>

using namespace std;

int** crearMatriz(int f, int c){
 
    int** m = new int*[f];

    for(int i=0; i<f;i++)
    {
        (*(m+i)) = new int[c];
    }

    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << "Numero: "; cin >> *((*(m+i))+j);
        }
    }

    return m;
}

void ImprimirMatriz(int** z, int f, int c)
{

 	for (int y=0; y<f; y++)
 	{
 		cout << "          | ";
    	for (int x=0; x<c; x++)
     	{
        	cout<< *((*(z+y))+x);
     		cout<< " ";
     	}
    
    	cout << "|" << endl;
 	}
}

void Menu()
{
	cout << endl;
	cout << "1 = Nueva Matriz" << endl;
	cout << "2 = Multiplicar" << endl;
	cout << "3 = Ver Matrices" << endl;
	cout << "4 = Salir" << endl;
	cout << endl;
}

int main()
{
	int** Matriz[10];
	int* fc[10];
	string Nombres[10];

	int Hacer = 0;
	int Num = 0;

	Menu();
	cout << "Hacer: "; cin >> Hacer;

	while (Hacer != 4)
	{
		if (Hacer == 1)
		{
			cout << "Nombre de la Matriz: "; cin >> Nombres[Num];
			fc[Num] = new int [2];
			cout << endl;
			cout << "Numero de filas: "; cin >> fc[Num][0];
			
			cout << "Numero de columnas: "; cin >> fc[Num][1];
			
			cout << endl;

			Matriz[Num] = crearMatriz(fc[Num][0], fc[Num][1]);
			ImprimirMatriz(Matriz[Num], fc[Num][0], fc[Num][1]);

			Num+=1;
		}

		if (Hacer == 2)
		{
			cout << "Matrices: " << endl << endl;

			for (int i = 0; i < Num; i++)
			{
				cout << i << " = " << Nombres[i] << endl;
			}
			cout << endl;

			int x, y;
			cout << "  Matriz: "; cin >> x;
			cout << "  Matriz: "; cin >> y;

			if (fc[x][1] == fc[y][0])
			{
				int** res;
				int r=0;

				res = new int* [fc[x][0]];

				for (int i = 0; i < fc[y][1]; i++)
				{
					res[i] = new int [fc[y][1]];

					for (int k = 0; k < fc[y][0]; k++)
					{
						for (int j = 0; j < fc[y][0]; j++)
						{
							r += Matriz[x][i][j] * Matriz[y][j][k];

						}

						res[i][k]=r;
						r=0;									
					}
				}
				ImprimirMatriz(res, fc[x][0], fc[y][1]);
			}
		}

		if (Hacer == 3)
		{

			for (int i = 0; i < Num; i++)
			{
				cout << Nombres[i] << endl << endl;
				ImprimirMatriz(Matriz[i], fc[i][0], fc[i][1]);
				cout << endl;
			}
		}

		Menu();
		cout << "Hacer: "; cin >> Hacer;
	}

/*
	int** M1 = crearMatriz(5, 6);

	Matriz[0] = M1;

	imprimirtodo(Matriz[0], 5, 6);
*/

	return 0;
}

