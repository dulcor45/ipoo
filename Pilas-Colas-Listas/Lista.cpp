
#include <iostream>
#include "Lista.h"

using namespace std;

template<typename T>
typename vector<T>::iterator Lista<T>::begin(){
	return miLista.begin();
}

template<typename T>
typename vector<T>::iterator Lista<T>::end(){
	return miLista.end();
}

template<typename T>
bool Lista<T>::empty(){
	if (miLista.empty()){
		return true;
	}
	return false;
}

template<typename T>
int Lista<T>::size(){
	return miLista.size();
}

template<typename T>
void Lista<T>::push_front(T val){
	miLista.insert(miLista.begin(),val);
}

template<typename T>
void Lista<T>::pop_front(){
	miLista.erase(miLista.begin());
}

template<typename T>
void Lista<T>::push_back(T val){
	miLista.push_back(val);
}

template<typename T>
void Lista<T>::pop_back(){
	miLista.pop_back();	
}

template<typename T>
void Lista<T>::insert(int pos, T val){
	miLista.insert(miLista.begin() + pos, val);
}

template<typename T>
void Lista<T>::erase (int pos){
	miLista.erase(miLista.begin() + pos);
}

template<typename T>
vector<T> Lista<T>::GetV()
{
	return miLista;
}

template<typename T>
Lista<T> Lista<T>::operator+ (Lista<T> nl){
	Lista<T> res;
	res.miLista.insert(res.begin(), miLista.begin(), miLista.end());
	res.miLista.insert(res.end(), nl.miLista.begin(), nl.miLista.end());
	return res;
}

template<typename T> // ARREGLAR
Lista<T> Lista<T>::operator- (Lista<T> nl){

	Lista<T> res;
	Lista<T> _Lista;
	_Lista.miLista = nl.GetV();

	for (int i = 0; i < miLista.size(); i++)
	{
		bool x = true;
		for (int j = 0; j < nl.size(); j++)
		{
			if (miLista[i] == _Lista.miLista[j])
			{		
				x = false;
				break;
			}
		}
		if (x)
			res.push_back(miLista[i]);
	}
	return res;
}

template<typename T>
void Lista<T>::print(){
	for(int i=0; i < miLista.size(); i++){
		cout << miLista[i] << " ";
	}
	cout << endl;
}

template class Lista<int>;