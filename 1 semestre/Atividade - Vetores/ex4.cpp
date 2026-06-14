#include<iostream>

using namespace std;

/*
4. Faça um programa para ler um vetor de 10 números inteiros, como também, ler um
número inteiro x. A seguir, o programa deve calcular e mostrar quantas vezes o
número x aparece no vetor.
*/

int main() {
    int vet[10],numeroUser,vezes = 0;

    for(int i = 0; i < 10;i++) {
        cout << "Insira um número inteiro " << endl;
        cin >> vet[i];
    }

    cout << "Insira um número para verificar quantas vezes aparece no vetor " << endl;
    cin >> numeroUser;

    for(int i = 0; i < 10; i++) {
        if(vet[i] == numeroUser) {
            vezes++;
        }
    }

    cout << "A quantidade de vezes que o número " << numeroUser << " apareceu foi " << vezes << endl;


    return 0;
}