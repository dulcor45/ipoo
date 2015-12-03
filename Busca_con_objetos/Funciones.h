
#include <iostream>
#include <string>
#include "Tablero.h"

using namespace std;

void Ganaste(){
  cout << endl;
	cout << "________________________________________________________________________________________________________________________________________________" << endl;
	cout << "_________________________________________________________________GANASTE________________________________________________________________________" << endl;
	cout << "________________________________________________________________________________________________________________________________________________" << endl;
  cout << endl;
}

void Perdiste(){
	cout << endl;
  cout << "________________________________________________________________________________________________________________________________________________" << endl;
	cout << "________________________________________________________________PERDISTE________________________________________________________________________" << endl;
	cout << "________________________________________________________________________________________________________________________________________________" << endl;
  cout << endl;
}

int Hacer(){
  int b;
  cout << endl;
	cout << "Jugar_______________________1" << endl;
	cout << "Marcar Mina_________________2" << endl;
	cout << "Salir_______________________9" << endl;
  cout << endl;
  cout << "Hacer: "; cin >> b;
  cout << endl;
  return b;
}

int Dimencion(){
	int D;
  cout << endl;
	cout << "Dimensiones:" << endl;
	cout << endl;
	cout << "  8x8________________________________1" << endl;
	cout << "  16x16______________________________2" << endl;
	cout << "  Personalizado______________________3" << endl;
  cout << endl;
  cout << "Salir :( ____________________________9" << endl;
	cout << endl;
	cout << " - "; cin >> D;

	return D;
}

void Jugar(int f, int c)
{
	Tablero Tab(f, c);
	Tab.Get_Tablero();
	Tab.Get_Minas();
	int Has;

	Has = Hacer();

	while (Has != 9)
	{
		if (Has == 1)
		{
			int x, y;
			cout << "  Fila: "; cin >> x;
			cout << "  Columna: "; cin >> y;

			if (Tab.Get_Elemento(x, y) == 1)
			{
				Perdiste();
				break;
			}

			else
			{
				Tab.Buscar_2(x, y);
				Tab.Get_Tablero();
				Tab.Get_Minas();
				if (Tab.Ganar_1())
				{
					Ganaste();
					break;
				}
			}
		}

		if (Has == 2)
		{
			Tab.Marcar_Mina();
			Tab.Get_Tablero();
			if (Tab.Ganar_2())
			{
				Ganaste();
				break;
			}
		}

		Has = Hacer();
	}
}