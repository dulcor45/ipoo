
template <typename T>
class Punto 
{
private:
	T x, y;

public:
	Punto();
	Punto(T _X, T _Y);
	T Get_X();
	T Get_Y();
	void Print();
};