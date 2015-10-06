
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

void ssort(int* p, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (p[j] > p[j+1])
			{
				int x = p[j];
				p[j] = p[j+1];
				p[j+1] = x;
			}		
		}
	}
}

int main() 
{
  	int array[400000];

 	srand (time(NULL));
	for (int i = 0; i < 400000; i++)
	{
		array[i]=rand()%101;
	} 	

  	int elements = sizeof(array) / sizeof(array[0]); 
  	
  	/* ssort(array, 400000) */

  	sort(array, array + elements);
  	
  	cout << endl << endl << elements << endl << endl;
  	
  	return 0;
}