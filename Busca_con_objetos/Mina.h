
#include <iostream>
#include <string>
#include "Busca_Minas.h"

using namespace std;

class Mina : public Busca_Minas
{
private:
	int M;
	char Asterisco;
public:
	Mina();
	Mina(int _M);
	char Get_Asterisco();
	int Get_Valor();
	void Set_Valor(int _M);
	void Set_Asterisco(char _A);
};