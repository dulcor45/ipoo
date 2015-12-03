
#include <iostream>

using namespace std;

bool pal(string* caca){

	int y=0;
	int z=0;

	z=caca->size()-1;

	if (caca->size()%2==1){
		y=(caca->size()/2)+1;
	}
	else{
		y=caca->size()/2;
	}
	
	for (int i=0; i<=y; i++){
		if (*(caca+i)==*(caca+z)){
			z-=1;
		}
		else {
			return false;
		}
	}

	return true;

}

int main(){
	
	string x;



	cout << "Palabra: "; cin >> x;

	string* caca;

	caca=&x;


	if (pal (caca)){
		cout << "Es palindromo" << endl;
	}

	else {
		cout << "No es palindromo" << endl;
	}

	return 0;
}

atoi
ctoi