
#include <iostream>
#include <string>

#include "Mina.h"

using namespace std;

Mina::Mina()
{
	M = 0;
	Asterisco = '*';
}

Mina::Mina(int _M)
{
	M = _M;
	Asterisco = '*';
}

char Mina::Get_Asterisco()
{
	return Asterisco;
}

int Mina::Get_Valor()
{
	return M;
}

void Mina::Set_Valor(int _M)
{
	M = _M;
}

void Mina::Set_Asterisco(char _A)
{
	Asterisco = _A;
}
