
#include "Punto.h"

class Vector
{
	private:
		Punto Start, End;

	public:
		Vector();
		Vector(double a, double b, double c, double d);
		void Print();
		double Distance();
};
