#include<iostream>
#include<vector>
using namespace std;
/*
3. Maior e menor elemento
Encontre o maior e o menor valor do vetor.
*/
int main() {
    int menorNumero,maiorNumero;
    bool primeiraVez = true;
    vector<int> vetor = {6,5,6,182,68,986,876,35};

    for(int i = 0; i < (int) vetor.size();i++) {
        if(primeiraVez) {
            menorNumero = vetor[i];
            maiorNumero = vetor[i];
            primeiraVez = false;
        }
        if(menorNumero > vetor[i]) {
            menorNumero = vetor[i];
        }
        if(maiorNumero < vetor[i]) {
            maiorNumero = vetor[i];
        }
    }

    cout << "O maior número é " << maiorNumero << endl;
    cout << "O menor número é " << menorNumero << endl;

    return 0;
}