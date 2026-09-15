#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {

    int vet[10],maiorNumero = 0,qtdVezes = 0;

    for(int i = 0; i < 10;i++) {
        cin >> vet[i];
    }

    maiorNumero = vet[0];

    for(int i = 0; i < 10;i++) {
        if(maiorNumero < vet[i]) {
            maiorNumero = vet[i];
        }
    }

    for(int i = 0; i < 10;i++) {
        if(maiorNumero == vet[i]) {
            qtdVezes++;
        }
    }

    cout << "Maior numero e " << maiorNumero << endl;
    cout << "apareceu " << qtdVezes << " vezes" << endl;

    return 0;
}