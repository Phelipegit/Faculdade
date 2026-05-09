#include<iostream>
#include<vector>

using namespace std;
/*
Dado um vetor de notas, inverta a ordem e exiba 
a nota mais alta primeiro e a mais baixa por último.
*/
int main() {
    bool primeiraVez = true;
    float maiorNota = 0,menorNota = 0;
    vector<float> notas = {7.5, 4.0, 9.0, 6.5,3.5};

    int max = ((int) notas.size()) - 1;
    for(int i = 0; i < (int) notas.size()/2; i++) {
        float valorI = notas[i];
        notas[i] = notas[max];
        notas[max] = valorI;
        max--;
    }

    for(int i = 0;i < (int) notas.size();i++) {
        if(primeiraVez) {
            maiorNota = notas[i];
            menorNota = notas[i];
            primeiraVez = false;
        }

        if(maiorNota < notas[i]) {
            maiorNota = notas[i];
        }
        if(menorNota > notas[i]) {
            menorNota = notas[i];
        }
    }

    cout << "A maior nota é " << maiorNota << endl;

    cout << "A menor nota é " << menorNota << endl;

    for(int i = 0; i < (int) notas.size();i++) {
        cout << notas[i] << " ";
    }
    return 0;
}