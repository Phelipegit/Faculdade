#include<iostream>

using namespace std;

/*
2. Dadas duas matrizes reais Am×n, e Bn×p, calcular o produto de A por B.
*/

int main() {
    int mA[4][3],mB[3][5],mC[4][5];

    for(int i = 0; i < 4;i++) {
        for(int j = 0; j < 3;j++) {
            cout << "Preencha o valor na posição da matriz A" << endl;
            cin >> mA[i][j];
        }
    }

    for(int i = 0; i < 3;i++) {
        for(int j = 0; j < 5;j++) {
            cout << "Preencha o valor na posição da matriz B" << endl;
            cin >> mB[i][j];
        }
    }

    int acumulador = 0;


    for(int i = 0; i < 4;i++) {
        for(int z = 0; z < 5; z++) {
            acumulador = 0;
            for(int v = 0; v < 3;v++) {
                acumulador += (mA[i][v] * mB[v][z]);
            }
            mC[i][z] = acumulador;
        }
    }

    for(int i = 0; i < 4;i++) {
        for(int z = 0; z < 5;z++) {
            cout << mC[i][z] << " ";
        }

        cout << endl;
    }

    return 0;
}