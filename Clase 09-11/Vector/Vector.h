
#include "Punto.h"

class Vector
{
	private:
		Punto<float> Start, End;

	public:
		Vector();
		Vector(double a, double b, double c, double d);
		void Print();
		double Distance();
};