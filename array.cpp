#include <iostream>

using namespace std;

int main (){

    int a[10], b[10], c[20];

    for (int i=0; i<20; i++){

        if (i<10){
            cout << "numero: "; cin >> a[i];
            c[i]=a[i];
            }

        else {
            cout << "numero: "; cin >> b[i-10];
            c[i]=b[i-10];
            }
        }

    for (int i=0; i<20; i++){

        cout << c[i]<< endl;
        }

    return 0;
}






    //int numero [9];
    //int *p;

    //for (int i=0; i<10; i++){
      //  p = &numero[i];

        //numero[i] = i+1;

        //cout << *p << "\n";
        //}
