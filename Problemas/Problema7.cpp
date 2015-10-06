#include <iostream>

using namespace std;

bool pal(int num)
{
	int x = 0;
	int y = 0;
	x = num;
	while (x>0)
	{
		y += (x%10);

		if (x >= 10)
		{
			y *= 10;
		}

		x /= 10;
	}
	
	if (y == num)
	{
		return true;
	}

	else
	{ 
		return false;
	}
}



int main()
{
	int res=0;
	int a;

	for (int i = 900; i <= 1000; i++)
	{
		for (int j = 900; j <= 1000; j++)
		{
			
			a=i*j;

			if (pal(a))
			{
				res=a;
			}
		}
	}

	cout << res << endl;

	return 0;
}
