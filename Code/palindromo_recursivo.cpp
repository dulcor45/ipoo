#include <string>
#include <iostream>

using namespace std;

bool pal(string str, int x, int y){

	if (x==y){
		return true;
	}

	if (x==y-1){
		if (str[x]==str[y]){
			return true;
		}
	}

	if (str[x]==str[y]){
		return pal(str, x+1, y-1);
	}

	else {
		return false;
	}

}

int main(){
	
	string str;
	int x, y;

	cout << "Palabra: "; cin >> str;

	x=0;
	y=str.size()-1;

	if (pal (str, x, y)){
		cout << "Es palindromo" << endl;
	}

	else {
		cout << "No es palindromo" << endl;
	}

	return 0;
}