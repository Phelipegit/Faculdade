#include<iostream>

using namespace std;

/*
3. Faça um programa para ler um vetor de 10 números inteiros e depois exibi-lo em
ordem inversa.
*/

int main() {
    int vet[10];

    for(int i = 0; i < 10;i++) {
        cout << "Insira um número aleatório" << endl;
        cin >> vet[i];
    }

    for(int i = 0; i < 10;i++) {
        cout << vet[i] << " ";
    }


    cout << endl;

    cout << "Vetor ordem inversa" << endl;

    for(int i = 9; i > -1;i--) {
        cout << vet[i] << " ";
    }

    return 0;
}