#include<iostream>

using namespace std;

/*
5. Faça um programa para ler um vetor de 10 números inteiros e, em seguida, calcular
e mostrar a quantidade de números que são pares.
*/

int main() {
    int vet[10],numPares = 0;

    for(int i = 0; i < 10; i++) {
        cout << "Insira um número na posição atual " << endl;
        cin >> vet[i];
    }

    for(int i = 0; i < 10;i++) {
        if(vet[i] % 2 == 0 ) {
            numPares++;
        }
    }

    cout << "A quantidade de números pares é " << numPares;

    return 0;
}