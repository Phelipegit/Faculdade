#include<iostream>

using namespace std;

/*
2. Faça um programa para ler, em um vetor, a idade de 10 pessoas e depois calcular e
mostrar quantas pessoas são “maior de idade” e quantas pessoas são “menor de
idade”.
*/

int main() {
    int vetIdade[10],maiorIdade = 0,menorIdade = 0;

    for(int i = 0; i < 10;i++) {
        cout << "Insira a idade da pessoa" << endl;
        cin >> vetIdade[i];
    }

    for(int i = 0; i < 10;i++) {
        if(vetIdade[i] >= 18) {
            maiorIdade++;
        } else {
            menorIdade++;
        }
    }

    cout << "A quantidade de pessoas maiores de idade é " << maiorIdade << endl;

    cout << "A quantidade de pessoas menores de idade é " << menorIdade << endl;

    return 0;
}