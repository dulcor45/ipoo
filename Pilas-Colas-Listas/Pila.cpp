
#include <iostream>
#include <vector>

#include "Pila.h"

using namespace std;

template<typename T>
bool Pila<T>::empty(){
	if (miPila.empty()){
		return true;
	}
	return false;
}

template<typename T>
int Pila<T>::size(){
	return miPila.size();
}

template<typename T>
T Pila<T>::top(){
	return miPila.back();
}

template<typename T>
void Pila<T>::push(T val){
	miPila.push_back(val);
}

template<typename T>
void Pila<T>::pop(){
	miPila.pop_back();
}

template<typename T>
vector<T> Pila<T>::GetV()
{
	return miPila;
}

template<typename T>
Pila< T > Pila<T>::operator + (Pila< T > nPil)
{
	Pila<T> res;
	res.miPila = miPila;
	int i = nPil.size() - 1;
	
	for(i; i>=0; i--){
		T vres = nPil.miPila[i];
		res.miPila.push_back(vres);
	}
	return res;
}

template<typename T>
Pila< T > Pila<T>::operator - (Pila< T > nPil){

	Pila<T> res;
	Pila<T> _Pila;
	_Pila.miPila = nPil.GetV();

	for (int i = 0; i < miPila.size(); i++)
	{
		bool x = true;
		for (int j = 0; j < nPil.size(); j++)
		{
			if (miPila[i] == _Pila.miPila[j])
			{		
				x = false;
				break;
			}
		}
		if (x)
			res.push(miPila[i]);
	}
	return res;
}

template<typename T>
void Pila<T>::print(){
	for(int i=0; i < miPila.size(); i++){
		std::cout << miPila[i] << " ";
	}
	std::cout << std::endl;
}
template class Pila<int>;