#include<iostream>

using namespace std;

/*
6. Faça um programa para ler um vetor de 10 números inteiros aleatórios e, em
seguida, determinar e mostrar o maior valor do vetor.
*/

int main() {
    int vet[10],maiorValor;

    for(int i = 0; i < 10; i++) {
        cout << "Insira o valor na posição atual" << endl;
        cin >> vet[i];
    }

    maiorValor = vet[0];

    for(int i = 0; i < 10; i++) {
        if(maiorValor < vet[i]) {
            maiorValor = vet[i];
        }
    }

    cout << "O maior valor do vetor é " << maiorValor << endl;

    return 0;
}