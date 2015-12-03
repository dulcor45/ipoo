
#include "Funciones.h"

using namespace std;

int main()
{
	int Dim = Dimencion(); 

	while (Dim != 9)
	{
		if (Dim == 1)
		{
			Jugar(8, 8);
		}
		else if (Dim == 2)
		{
			Jugar(16, 16);
		}
		else if (Dim == 3)
		{
			int F, C;
			cout << "Numero de filas: "; cin >> F;
			cout << "Numero de columnas: "; cin >> C;
			Jugar(F, C);
		}

		Dim = Dimencion();
	}

	return 0;
}