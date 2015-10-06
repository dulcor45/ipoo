#include <string> 
#include <iostream> 
using namespace std; 
  
main() 
{ 
	string texto1, texto2 = "Hola que", texto3("Que tal"); 

	cout << texto2 << endl;
	cout << texto2.size()<< endl;
	cout << texto2[texto2.size()-1] << endl;

	cout << endl;
 	texto1 = texto2 + texto3 + " estas? "; 
	cout << texto1 << "\n"; 
	string subcadena (texto1, 2, 6); // 6 letras de texto1, desde la tercera 
	cout << subcadena << "\n"; 
	string subcadena2; 
	subcadena2 = texto1.substr(0, 5); // 5 letras de texto1, desde el comienzo 
	texto1.insert(5, "Juan "); // Inserto un texto en la posicion 6 
	cout << texto1 << "\n"; 
	texto2.replace(1, 2, "ad"); // Cambio 2 letras en la posicion 2 
	cout << texto2 << "\n"; 
	cout << texto1 << " La longitud de texto1 es " << texto1.size() << "\n"; 
	cout << "La tercera letra de texto1 es " << texto1[2] << " o bien " << texto1.at(2) << "\n"; 
 
 	if (texto2 == "Hada ") 
   		
   		cout << "Texto 2 es Hada\n"; 
}  