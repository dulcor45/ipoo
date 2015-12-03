
#include <iostream>
#include "Mina.h"

using namespace std;

class Tablero : public Busca_Minas
{
private:
	Mina** Matriz;
	int Fil, Col;
public:
	Tablero(int f, int c);
	int Get_Fil();
	int Get_Col();
	int Get_Elemento(int F, int C);
	void Get_Tablero();
	void Get_Minas();
	void Marcar_Mina();
	void Buscar_1(int F, int C);
	void Buscar_2(int F, int C);
	bool Ganar_1();
	bool Ganar_2();
};