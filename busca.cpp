
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void ganaste(){
  cout << endl;
	cout << "________________________________________________________________________________________________________________________________________________" << endl;
	cout << "_________________________________________________________________GANASTE________________________________________________________________________" << endl;
	cout << "________________________________________________________________________________________________________________________________________________" << endl;
  cout << endl;
}

void perdiste(){
	cout << endl;
  cout << "________________________________________________________________________________________________________________________________________________" << endl;
	cout << "________________________________________________________________PERDISTE________________________________________________________________________" << endl;
	cout << "________________________________________________________________________________________________________________________________________________" << endl;
  cout << endl;
}

int menu(){
  int b;
  cout << endl;
	cout << "Jugar_______________________1" << endl;
	cout << "Marcar Mina_________________2" << endl;
	cout << "Salir_______________________3" << endl;
  cout << endl;
  cout << "Hacer: "; cin >> b;
  cout << endl;
  return b;
}

void inicio(){
  cout << endl;
	cout << "Dimenciones:" << endl;
	cout << endl;
	cout << "  8x8________________________________1" << endl;
	cout << "  16x16______________________________2" << endl;
	cout << "  Personalizado______________________3" << endl;
  cout << endl;
  cout << "Salir :( ____________________________4" << endl;
	cout << endl;
}

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

int** crearMatriz(int f, int c)
{
    srand (time(NULL));
    int** m = new int*[f];
    int w = (f*c)/1.5;
    for(int i=0; i<f;i++)
    {
        (*(m+i)) = new int[c];
    }
    
    for(int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
            *((*(m+i))+j) = 0;
        }
    }

    for (int x=0; x<w; x++){
        m[rand()%f][rand()%c]=1;
    }
    return m;
}

char** crearAsterisco(int f, int c){

  char** m = new char*[f];
  for(int i=0; i<f;i++)
    {
        (*(m+i)) = new char[c];
    }
    for(int i=0; i<f; i++)
    {
        for (int j=0; j<c; j++)
        {
          *((*(m+i))+j) = '*';
        }
    }
    return m;
}

void imprimeAsterisco(char** z, int f, int c){
    int q=0, b=0, p=0;
    p=60-c;
    cout << endl;

    cout << "    ";
    for (int k=0; k<p; k++){
        cout << " ";
    }

    for(int k=0; k<c; k++){
        cout << b << "   ";
        b++;
    }
    b=0;
    cout << endl;

    cout << "  ";
    for (int k=0; k<p; k++){
        cout << " ";
    }

    for (int k=0; k<c; k++){
        cout << "----";
    }
    cout << endl;

    for (int y=0; y<f; y++){

      for (int k=0; k<p; k++){
        cout << " ";
      }

        cout << q;
        for (int x=0; x<c; x++){
            cout << " | ";
            cout << *((*(z+y))+x);
        }
        cout << " | " << q << endl;
        q++;

        for (int k=0; k<p; k++){
          cout << " ";
        }

        cout << "  ";
        for (int k=0; k<c; k++){
            cout << "----";
    }
    cout << endl;
    }

    cout << "    ";
    for (int k=0; k<p; k++){
      cout << " ";
    }

    for(int k=0; k<c; k++){
        cout << b << "   ";
        b++;
    }
    cout << endl;
}

void MarcarM(char** m){
  int f=0;
  int c=0;
  cout << "Fila: "; cin >> f;
  cout << "Columna: "; cin >> c;
  m[f][c] = '#';
}

bool perdiste1(int** m, int f, int c){         //mina==1
  if (m[f][c] == 1){
    return true;
  }
}

bool ganar(int** mat, int f, int c){
  for (int i = 0; i < f; i++){ 
    for (int j = 0; j < c; j++){

      if (mat[i][j]==0){

        return false;
      }
    }
  }
  return true;
}

bool ganar1(int** mat, char** aste, int f, int c){
  for (int i=0; i<f ;i++){
    for (int j=0; j<c ; j++){

      if (mat[i][j]==1){
        if (aste[i][j]=='*'){

          return false;
        }
      }
    }
  }
  return true;
}

void buscar(int** mina, char** aste, int f, int c, int DIM){
  mina[f][c]=2;
  aste[f][c]='0';
  for (int i=-1; i<2; i++){
    for (int j=-1; j<2; j++){

      if ((f+i>=0) and (c+j>=0) and (f+i<DIM) and (c+j<DIM)){
        if (mina[f+i][c+j] == 1){

          aste[f][c] = int_to_char(char_to_int(aste[f][c])+1);
        }
      }
    }
  }
}

void buscar1(int** mina, char** aste, int f, int c, int DIM){
  aste[f][c] = '0';
  buscar(mina, aste, f, c, DIM);
  if (aste[f][c] == '0'){
    for (int i=-1; i<2; i++){
      for (int j=-1; j<2; j++){

        if ((f+i>=0) and (c+j>=0) and (f+i<DIM) and (c+j<DIM)){
          if (mina[f][c] != mina[f+i][c+j]){
            buscar(mina, aste, f+i, c+j, DIM);
            if (aste[f+i][c+j] == '0'){
              buscar1(mina, aste, f+i, c+j, DIM);
            }
          }
        }
      }
    }
  }
}

void Jugar(int fila, int col){
  int hacer = 0;
  int** mina = crearMatriz(fila, col);
  char** asterisco = crearAsterisco(fila, col);
  imprimeAsterisco(asterisco, fila, col);
  
  hacer = menu();

  while(hacer != 3){

    if (hacer == 1){
      int x, y;
      cout << "Fila: "; cin >> x;
      cout << "Columna: "; cin >> y;

      if (perdiste1(mina, x, y) == true){
        perdiste();
        break;
      }

      buscar1(mina, asterisco, x, y, fila);
      imprimeAsterisco(asterisco, fila, col);

      if (ganar (mina, fila, col) == true){
        ganaste();
        break;
      }
    }

    if (hacer == 2){
      MarcarM(asterisco);
      imprimeAsterisco(asterisco, fila, col);
      
      if (ganar1(mina, asterisco, fila, col)){
        ganaste();
        break;
      }
    }

    hacer = menu();
  }

}

int main(){

	inicio();

	int kkk, b;

	cout << "Que dimencion: "; cin >> kkk;

	while (kkk != 4){

		if (kkk == 1){
      Jugar(8, 8);
    }

    if (kkk == 2){
      Jugar(16, 16);
    }

    if (kkk==3){
      int f, c;
      cout << endl;
      cout << "Numero de filas "; cin >> f;
      cout << endl;
      cout << "Numero de columnas "; cin >> c;
      cout << endl;
      Jugar(f, c);
    }

    inicio();
    cout << "Que dimencion: "; cin >> kkk;
	}

  return 0;
}