#include <iostream>

using namespace std;

void Busca(string s, char x)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == x)
		{
			cout << "Encontro la letra " << s[i] << " en la pocicion " << i << endl;
		}
	}
}

int main()
{
	string Nombre = "";
	char l;

	cout << "Nombre completo: "; 
	getline(cin, Nombre);

	cout << "Letra: "; cin >> l;

	Busca(Nombre, l);

	return 0;
}