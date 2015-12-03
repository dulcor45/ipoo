
#include <vector>

template<typename T> class Pila
{
	std::vector<T> miPila;
public:
	bool empty();
	int size();
	T top();
	void push(T val);
	void pop();
	std::vector<T> GetV();
	Pila<T> operator+ (Pila<T> nPil);
	Pila<T> operator-(Pila<T> nPil);
	void print();
};