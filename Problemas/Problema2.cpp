#include <iostream>

using namespace std;

int fibo(int x)
{
	if (x<=1)
	{
		return 1;
	}

	else
	{
		return fibo(x-1)+fibo(x-2);
	}
}

int main()
{
	int a=1;
	int res=0;

	while (a<4000)
	{
		int f=fibo(a);
	
		if (f%2==0)
		{
			res+=f;
		}

		a+=1;
	}

	cout << "La respuesta es " << res << endl; 

	return 0;
}