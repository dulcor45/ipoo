
#include <vector>

template<typename T> class Lista{
private:
	std::vector<T> miLista;
public:
	typename std::vector<T>::iterator begin();
	typename std::vector<T>::iterator end();
	bool empty();
	int size();
	void push_front(T val);
	void pop_front();
	void push_back(T val);
	void pop_back();
	void insert(int pos, T val);
	void erase (int pos);
	std::vector<T> GetV();
	Lista<T> operator+ (Lista<T> nl);
	Lista<T> operator- (Lista<T> nl);
	void print();
};