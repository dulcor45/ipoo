 
#ifndef AZULITO_H
#define AZULITO_H

#include "Empleado.h"

class Azulito
	: public Empleado
{
private:
	std::string m_Zona;
public:
	Azulito(std::string Nombre, int Codigo, int Paga, std::string Zona);
	void Limpiar();
	void Mostrar_datos();
};

#endif //AZULITO_H