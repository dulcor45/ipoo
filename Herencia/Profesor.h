 
#ifndef PROFESOR_H
#define PROFESOR_H

#include "Empleado.h"

class Profesor
	: public Empleado
{
private:
	std::string m_Curso;
public:
	Profesor(std::string Nombre, int Codigo, int Paga, std::string Curso);
	void Ensenar();
	void Mostrar_datos();
	void GetCurso();
}; 

#endif //PROFESOR_H