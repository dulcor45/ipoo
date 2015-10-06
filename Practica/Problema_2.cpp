
#include <iostream>
#include <string>

using namespace std;

void no_repetitions(string &palabra)
{

	for (int i = 0; i < palabra.length(); i++)
	{ 													 /* .length() te da el tamaño del string */
		char Letra = palabra[i];
		for (int j = i+1; j < palabra.length(); j++)
		{
			if (Letra == palabra[j])
				palabra.erase(palabra.begin()+j);
		}
	}
}

int main()
{
	string Palabra = "";
	cout << "Frace: "; 
	getline(cin, Palabra);

	no_repetitions(Palabra);

	cout << "Nueva frace: " << Palabra << endl;

	return 0;
}