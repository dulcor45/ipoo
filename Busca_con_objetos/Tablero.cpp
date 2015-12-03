
#include "Tablero.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int char_to_int(char caracter){
    int auxiliar =0;
    auxiliar = caracter-48;
    return auxiliar;
}

char int_to_char(int caracter){
    char a = '0';
    a = caracter+48;
    return a;
}

Tablero::Tablero(int f, int c)
{
	srand (time(NULL));
	Fil = f;
	Col = c;
	int w = (f*c)/6;

  	Matriz = new Mina*[f];

  for(int i=0; i<f;i++)
	{
        (*(Matriz+i)) = new Mina[c];
    }

    for(int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
          *((*(Matriz+i))+j) = Mina(0);
        }
    } 
    for (int x=0; x<w; x++)
    {
	    Matriz[rand()%Fil][rand()%Col].Set_Valor(1);
    }
}

int Tablero::Get_Fil()
{
	return Fil;
}

int Tablero::Get_Col()
{
	return Col;
}

int Tablero::Get_Elemento(int F, int C)
{
  return Matriz[F][C].Get_Valor();
}

void Tablero::Get_Tablero()
{
	int P = 0;
	string E = "";

	P = 60 - Get_Col()/2;

	for (int i = 0; i < P; i++)
	{
		E += " ";
	} 

  for(int i=0; i<Fil; i++)
  {
  	cout << E;
    for (int j=0; j<Col; j++)
    {
      cout << Matriz[i][j].Get_Asterisco()<< " ";
    }
    cout << endl;
  }
}

void Tablero::Get_Minas()
{
  int F = Get_Fil();
  int C = Get_Col();
  int P = 0;
  string E = "";

  P = 60 - Get_Col();

  for (int i = 0; i < P; i++)
  {
    E += " ";
  } 

  for(int i=0; i<F; i++)
  {
    cout << E;
    for (int j=0; j<C; j++)
    {
      cout << Matriz[i][j].Get_Valor()<< " ";
    }
    cout << endl;
  }
}

void Tablero::Marcar_Mina()
{
    int F, C;
    cout << "  Fila: "; cin >> F;
    cout << "  Columa: "; cin >> C;
    Matriz[F][C].Set_Asterisco('#');
}

void Tablero::Buscar_1(int F, int C)
{
   //fila = Fil
  
  Matriz[F][C].Set_Valor(2);
  Matriz[F][C].Set_Asterisco('0');

  for (int i=-1; i<2; i++)
  {
    for (int j=-1; j<2; j++)
    {
      if ((F+i>=0) and (C+j>=0) and (F+i<Fil) and (C+j<Col))
      {
        if (Matriz[F+i][C+j].Get_Valor() == 1)
        {
          Matriz[F][C].Set_Asterisco(int_to_char(char_to_int(Matriz[F][C].Get_Asterisco())+1));
        }
      }
    }
  }
}

void Tablero::Buscar_2(int F, int C)
{
  Matriz[F][C].Set_Asterisco('0');

  Buscar_1(F, C);
  
  if (Matriz[F][C].Get_Asterisco() == '0')
  {
    for (int i=-1; i<2; i++)
    {
      for (int j=-1; j<2; j++)
      {
        if ((F+i>=0) and (C+j>=0) and (F+i < Fil) and (C+j < Col))
        {
          if (Matriz[F][C].Get_Valor() != Matriz[F+i][C+j].Get_Valor())
          {
            Buscar_1(F+i, C+j);
            if (Matriz[F+i][C+j].Get_Asterisco() == '0')
            {
            Buscar_2(F+i, C+j);
            }
          }
        }
      }
    }
  }
}

bool Tablero::Ganar_1()
{
  for(int i=0; i<Fil; i++)
  {
    for (int j=0; j<Col; j++)
    {
      if (Matriz[i][j].Get_Valor() == 0){
        return false;
      }
    }
  }
  return true;
}

bool Tablero::Ganar_2()
{
  for(int i=0; i<Fil; i++)
  {
    for (int j=0; j<Col; j++)
    {
      if (Matriz[i][j].Get_Valor() == 1){
        if (Matriz[i][j].Get_Asterisco() == '*')
        {
          return false;
        }
      }
    }
  }
  return true;
}