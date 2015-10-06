#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream doc;
	doc.open("sgsrgse");
	
	if (doc.is_open())
	{
		while (getline (doc, line))
			cout << line << endl;
		
		doc.close();	
	} 

	else 
	{
		cout << "No existe el archivo" << endl;
	}

	return 0;

}