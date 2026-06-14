#include<iostream>

using namespace std;

/*
1. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos,
determinar o produto de A por V.
*/

int main() {

    int m[4][3],v[3],vResultado[4];

    for(int i = 0; i < 4;i++) {
        for(int z = 0; z < 3;z++) {
            cout << "Insira o valor na posição atual da matriz" << endl;
            cin >> m[i][z];
        }
    }

    for(int i = 0; i < 3;i++) {
        cout << "Insira o valor na posição atual do vetor";
        cin >> v[i];
    }

    int acumulador = 0;

    for(int i = 0; i < 4;i++) {
        acumulador = 0;
        for(int z = 0; z < 3;z++) {
            acumulador += m[i][z] * v[z];
        }
        vResultado[i] = acumulador;
    }

    for(int i = 0; i < 4;i++) {
        cout << vResultado[i] << " ";
    }

    return 0;
}