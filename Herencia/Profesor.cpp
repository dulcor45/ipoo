  
#include "Profesor.h"

Profesor::Profesor(std::string Nombre, int Codigo, int Paga, std::string Curso)
	:Empleado(Nombre, Codigo, Paga)
{
	m_Curso = Curso;
}

void Profesor::Ensenar()
{
	std::cout << " Enseñando... " << std::endl;
}

void Profesor::Mostrar_datos()
{
	std::cout << " Profesor:" << std::endl;
	Empleado::Mostrar_datos();
	std::cout << "  -Curso: " << m_Curso << std::endl;
}

void Profesor::GetCurso()
{ 
	std::cout << m_Curso << std::endl; 
}