
#include "Azulito.h"

Azulito::Azulito(std::string Nombre, int Codigo, int Paga, std::string Zona)
	:Empleado(Nombre, Codigo, Paga)
{
	m_Zona = Zona;
}

void Azulito::Limpiar()
{
	std::cout << " Limpiando... " << std::endl;
}

void Azulito::Mostrar_datos()
{
	std::cout << " Azulito:" << std::endl;
	Empleado::Mostrar_datos();
	std::cout << "  -Zona de limpieza: " << m_Zona << std::endl;
}