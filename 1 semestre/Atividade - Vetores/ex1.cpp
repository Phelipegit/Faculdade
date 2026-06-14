#include<iostream>

using namespace std;

/*
1. Faça um programa para ler, em um vetor, o peso de 10 pessoas e depois calcular e
mostrar o menor peso dentre todos que foram lidos.
*/

int main() {
    float vet[10],menorPeso;

    for(int i = 0; i < 10;i++) {
        cout << "Insira o peso da pessoa " << endl;
        cin >> vet[i];
    }

    menorPeso = vet[0];

    for(int i = 0; i < 10;i++) {
        if(menorPeso > vet[i]) {
            menorPeso = vet[i];
        }
    }

    cout << "O menor peso entre as 10 pessoas é " << menorPeso << endl;

    return 0;
}