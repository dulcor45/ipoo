#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Mina
{
private:
	bool M;
public:
	Mina();
	string Get_Asterisco();
	bool Get_Bool();
};

Mina::Mina()
{
	srand (time(NULL));
	M = rand()%2;
}

string Mina::Get_Asterisco()
{
	return "*";
}

bool Mina::Get_Bool()
{
	return M;
}

class Tablero
{
private:
	Mina** Ta;
public:
	Tablero(int f, int c);
	
};

Tablero::Tablero(int f, int c)
{
  	Ta = new Mina*[f];

  	for(int i=0; i<f;i++)
	{
        (*(Ta+i)) = new Mina[c];
    }

    for(int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
          *((*(Ta+i))+j) = Mina();
        }
    }
}

int main()
{
	Tablero tab(4, 4);

	return 0;
}