#include<iostream>

using namespace std;

int main() {
    int numero, i = 1,resultado = 0;


    cout << "Insira um número inteiro positivo" << endl;
    cin >> numero;

    while(i <= numero) {
        resultado += i;
        cout << resultado << endl;
        i++;
    }

    cout << "O termo " << numero << " da sequência é " << resultado << endl;
    return 0;
}