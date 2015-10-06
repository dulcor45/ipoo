#include <iostream>
#include <cctype>

using namespace std;

void Mayuscula(char *palabra)
{
	int i = 0;
	while (palabra[i])
	{
		if (palabra[i] == ' ')
		{
			while(palabra[i])
			{
				palabra[i] = toupper(palabra[i]);
				i++;
			}
			break;
		}
		i++;
	}
}

int main()
{

	char palabra[] = "abc defghi";
	
	Mayuscula(palabra);
	cout << palabra << endl;
	
	return 0;
}