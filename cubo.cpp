#include <iostream>

using namespace std;

#include "fun.h"

int main(){

    int x;
    int y;
    int *Pt;

    cout << "1 para cuadrado, 2 para cubo, 3 para fibonacci y 0 para salir " << endl; cin >> x;

    while (x!=0){
        if (x==1){
            cout << "numero " << endl; cin >> y;
            Pt = &y;
            cuadrado(Pt);
            cout << y << endl;
            }
        else if (x==2){
            cout << "numero "<< endl; cin >> y;
            Pt = &y;
            cubo(Pt);
            cout << y << endl;
            }

        else if (x==3){
            cout << "numero "<< endl; cin >> y;
            cout << fibo(y) << endl;
            }
        cout << "1 para cuadrado, 2 para cubo, 3 para fibonacci y 0 para salir " << endl; cin >> x;
        }
    return 0;
}

void cuadrado(int *x){
    *x=*x * *x;    
}

void cubo(int *x){
    int res = *x;
    cuadrado(x);
    *x =res * *x;
    

}

int fibo(int x){
    if (x==0 || x==1){
        return 1;
        }
    else {
        return fibo(x-2)+ fibo(x-1);
        }
    }





