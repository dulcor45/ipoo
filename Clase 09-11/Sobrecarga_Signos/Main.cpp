
#include <iostream>
#include "Soles.h"

using namespace std;

int main()
{
	TipoSoles mi_dinero(12, 50);
	TipoSoles ganancias(100, 73);
	TipoSoles total;

	total = mi_dinero + ganancias;

	total.Print();
	
	return 0;
}