#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int res = 0;

	while (x < 1000)
	{
		if (x % 3 == 0)
		{
			res+=x;
		}

		else if (x % 5 == 0)
		{
			res+=x;
		}

		x+=1;
	}

	cout << res << endl;

	return 0;
}