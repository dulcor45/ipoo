
#include <iostream>
#include "Cola.h"

template<typename T>
bool Cola<T>::empty(){
	return miCola.empty();
}

template<typename T>
int Cola<T>::size(){
	return miCola.size();
}

template<typename T>
T Cola<T>::front(){
	return miCola.front();
}

template<typename T>
T Cola<T>::back(){
   return miCola.back();
}

template<typename T>
void Cola<T>::push(T val){
	miCola.push_back(val);
}

template<typename T>
void Cola<T>::pop(){
	miCola.erase(miCola.begin());
}


template<typename T>
Cola<T> Cola<T>::operator+(Cola<T> nc){
	Cola<T> tmp;
	tmp.miCola = miCola;
	tmp.miCola.insert(tmp.miCola.end(), nc.miCola.begin(), nc.miCola.end());
	return tmp;
}

template<typename T>
Cola<T> Cola<T>::operator-(Cola<T> nc){
	Cola<T> tmp;
	tmp.miCola = miCola;
	typename std::vector<T>::iterator it, it2, end, end2, itTmp;
	it = tmp.miCola.begin();
	it2 = nc.miCola.begin();
	end = tmp.miCola.end();
	end2 = nc.miCola.end();

	while (it != end){
		while (it2 != end2){
			if (*it == *it2){
				it = tmp.miCola.erase(it);
				end = tmp.miCola.end();
				it2 = nc.miCola.begin();
			}
            else
				++it2;
	}
		++it;
		it2 = nc.miCola.begin();
	}
	return tmp;
}

template<typename T>
void Cola<T>::print(){
	for(int i=0; i < miCola.size(); i++){
		std::cout << miCola[i] << " ";
	}
	std::cout << std::endl;
}

template class Cola<int>;