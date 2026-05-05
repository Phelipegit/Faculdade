#include<iostream>

using namespace std;

int main() {
    int contador = 0,numero;
    while(contador < 10) {
        cout << "Insira um número" << endl;
        cin >> numero;
        if(numero % 3 == 0) {
            cout << "O número " << numero << " é divisível por 3" << endl; 
        } else {
            cout << "O número " << numero << " não é divisível por 3" << endl;
        }
        contador++;
    }

    return 0;
}