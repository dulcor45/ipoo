
#include <iostream>

using namespace std;

bool pal(string x){

	int y=0;
	int z=0;

	z=x.size()-1;

	if (x.size()%2==1){
		y=(x.size()/2)+1;
	}
	else{
		y=x.size()/2;
	}
	
	for (int i=0; i<=y; i++){
		if (x[i]==x[z]){
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

	if (pal (x)){
		cout << "Es palindromo" << endl;
	}

	else {
		cout << "No es palindromo" << endl;
	}

	return 0;
}