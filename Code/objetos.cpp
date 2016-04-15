
#include <string>
#include <iostream>

using namespace std;

class Fecha{
	private:
		int d,m,a;
	public:
		Fecha(int, int, int);
		void cambiarFecha(int,int,int);
		void imprimirFecha(void);
};


Fecha::Fecha(int dd, int mes, int an){
	d=dd;
	m=mes;
	a=an;
}

void Fecha::cambiarFecha(int dia, int mes, int an){
	d=dia;
	m=mes;
	a=an;
}

void Fecha::imprimirFecha(void){
	cout << "La fecha es " << d << "/" << m << "/" << a << endl;

}
//Opjetos

//atributos 
//metodos 
//propiedades
//eventos 

//todos los apributos sen private
//public

//private


// propiedad GET SET

//modificadores de dominio

int main(){

	Fecha martes(2,3,2015); //objeto martes 
	martes.imprimirFecha();
	martes.cambiarFecha(4,5,2015);

	martes.imprimirFecha();

	return 0;
}

