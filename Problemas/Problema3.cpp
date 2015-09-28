#include <iostream>

using namespace std;

int main()
{
	int x=1;
	int con=0;

	while (con<=10)
	{
		for (int i = 0; i <= 10; ++i)
		{
			if (x%i!=0)
			{
				con=0;
				x+=1;
				break;
			}
			else
			{
				con+=1;
			}
		}
	}
	cout << x << endl;

	return 0;
}