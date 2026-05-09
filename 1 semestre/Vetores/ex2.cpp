#include<iostream>
#include<vector>
using namespace std;
/*
2. Soma e média
Calcule a soma e a média dos elementos de um vetor.
*/
int main() {
    int soma = 0;
    float media = 0;
    vector<int> vetor = {3,4,6,2,5,7,1};

    for(int i = 0; i < (int) vetor.size();i++) {
        soma += vetor[i];
    }

    media = (float)soma/(int) vetor.size();

    cout << "A soma dos vetores é " << soma << endl;
    cout << "A média dos vetores é " << media << endl; 


    return 0;
}