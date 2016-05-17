
#include "Profesor.h"
#include "Azulito.h"

int main()
{
	Profesor Prof1("Matias", 15772430, 1200, "Algebra");
	
	Prof1.Mostrar_datos();
	Prof1.Ensenar();

	std::cout << std::endl;

	Azulito Azul1("Pierre", 000054, 800, "N3");

	Azul1.Mostrar_datos();
	Azul1.Limpiar();

	return 0;
}