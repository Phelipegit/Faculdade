#include<iostream>
#include<vector>
using namespace std;
/*
1. Preenchimento e exibição
Crie um vetor de 5 inteiros, peça ao usuário para preencher e exiba os valores.
*/
int main() {
    vector<int> vetor(5);

    for(int i = 0; i < 5; i++) {
        cout << "Insira o número na posição " << i << endl;
        cin >> vetor[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}