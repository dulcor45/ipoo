
#include <iostream>

using namespace std;


int** crearAsterisco(int f, int c){

    int k=0;
    int** m = new int*[f];
    for(int i=0; i<f;i++){
        (*(m+i)) = new int[c];
    }
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            *((*(m+i))+j) = k;
            k++;
        }
    }
    return m;
}

void imprimeAsterisco(int** m, int f, int c){
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout << m[i][j]; //*((*(m+i))+j)
        }
        cout << endl;
    }
}

int main (){
	int f=4;
	int c=4;

	int** asterisco = crearAsterisco(f, c);
    imprimeAsterisco(asterisco, f, c);

return 0;
}
