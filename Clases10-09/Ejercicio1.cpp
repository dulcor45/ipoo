
#include <iostream>
using namespace std;

void imprimirtodo(int** z, int f, int c){
    for (int y=0; y<f; y++){

        for (int x=0; x<c; x++){

            cout<< *((*(z+y))+x);
        }
    cout<< endl;
    }

    cout << *((*0)+0) << endl;
}


int main() {

	int arr[4];
	cout << "Please enter 4 integers:" << endl;

	for(int i = 0; i < 4; i++){
		cin >> arr[i];
	}

	cout << "Values in array are now:";

	for(int i = 0; i < 4; i++){
		cout << "  " << arr[i];
	}

	cout << endl;

    return 0;
}
