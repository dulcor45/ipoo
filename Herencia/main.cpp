 
#include "Profesor.h"
#include "Azulito.h"

int main()
{
	Profesor Prof1("Alvaro", 15772430, 5200, "ALEGRE");
	
	Prof1.Mostrar_datos();
	Prof1.Ensenar();

	std::cout << std::endl;

	Azulito Azul1("Pierre", 000054, 800, "N3");

	Azul1.Mostrar_datos();
	Azul1.Limpiar();

	return 0;
}