#include<iostream>

using namespace std;

int main() {

    int numero = 0;
    do {
        if(numero % 2 == 0) {
            cout << numero << endl;
        }
        numero++;
    }while(numero <= 10);

    return 0;
}