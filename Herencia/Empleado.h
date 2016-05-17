
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>

class Empleado{
private:
	std::string m_Nombre;
	int m_Codigo;
	int m_Paga;
public:
	Empleado(std::string Nombre, int Codigo, int Paga);
	void Mostrar_datos();
};

#endif