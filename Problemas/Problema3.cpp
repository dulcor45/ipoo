#include <iostream>

using namespace std;

int main()
{
	int x=0;
	int con=0;

	while (con!=20)
	{
		con=0;
		x+=20;
		for (int i = 1; i <= 20; i++)
		{
			if (x%i==0)
			{
				con+=1;
			}

			else 
			{
				break;
			}
		
		}
	}

	cout << "La respuesta es " << x << endl;

	return 0;
}
