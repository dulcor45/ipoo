
#include "Lista.h"
#include "Pila.h"
#include "Cola.h"
#include <iostream>

using namespace std;

int main() {
	//Lista
	Lista<int> lista1, lista2, lista3;
	
	for(int i=0; i<5; i++)
		lista1.push_back(i);

	for (int i=0; i<5; i++)
		lista2.push_back(100);
	
	lista3.push_back(3);
	lista3.push_back(4);
	lista3.push_back(66);
	
	cout << "Pruebas Lista: " << endl;
	
	cout << "lista1 esta vacia? " << lista1.empty() << endl;
	cout << lista1.size() << endl;
	lista1.push_front(4);
	lista1.push_back(5);

	cout << "La lista1+2 es: " << endl;
	lista1 = lista1 + lista2;

	lista1.pop_back();
	lista1.pop_front();
	lista1.insert(5,66);
	lista1.erase(3);
	lista1.print();
	lista3.print();

	cout << "La pila1-3 es: " << endl;
	lista1 = lista1 - lista3;
	lista1.print();
	
	cout << endl << endl;
	//Pila
	
	Pila<int> pila1, pila2, pila3;
	
	cout << "Pruebas Pila: " << endl;
	
	for(int i=0; i<5; i++){
		pila1.push(i);
		pila2.push(i+2);
	}
	
	cout << "Pila1 esta vacia? " << pila1.empty() << endl;
	cout << "La pila1 es: " << endl;
	pila1.print();

	cout << "top de la pila1: " << pila1.top() << endl;
	
	cout << "La pila2 es: " << endl;
	pila2.print();

	cout << "La pila2.pop() es: " << endl;
	pila2.pop();
	pila2.print();
	
	cout << "La pila1+2 es: " << endl;
	pila1 = pila1 + pila2;
	pila1.print();
	
	cout << "La pila3 es: " << endl;
	pila3.push(4);
	pila3.print();

	cout << "La pila1-3 es: " << endl;
	pila1 = pila1 - pila3;
	pila1.print();

	cout << "Tamano pila1: " << pila1.size() << endl;
	
	cout << endl << endl;
	//cola
	
	Cola<int> cola1, cola2, cola3;
	
	cout << "Pruebas Cola: " << endl;
	
	for(int i=0; i<5; i++){
		cola1.push(i);
		cola2.push(i+2);
	}
	cola3.push(3);

	cout << "La cola 1 esta vacia? " << cola1.empty() << endl;
	cout << "Front y back de la cola1: " << cola1.front() << " " << cola1.back() << endl;
	
	cout << "La cola 1 es: " << endl;
	cola1.print();

	cout << "La cola 2 es: " << endl;
	cola2.print();

	cola2.pop();
	cout << "La cola 2.pop() es: " << endl;
	cola2.print();

	cola1 = cola1 + cola2;
	cout << "La cola 1+2 es: " << endl;
	cola1.print();
	
	//cola1 = cola1 - cola3;
	//cola1.print();
	return 0;
}