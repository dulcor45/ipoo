
#include <vector>

template<typename T>class Cola{
private:
	std::vector<T> miCola;
public:
	bool empty();
	int size();
	T front();
	T back();
	void push(T val); //back
	void pop(); //front
	Cola<T> operator+ (Cola<T> nc);
	Cola<T> operator- (Cola<T> nc);
	void print();
	
};