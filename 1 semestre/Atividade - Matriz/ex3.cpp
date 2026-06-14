#include<iostream>

using namespace std;

/*
Os elementos Aij de uma matriz inteira An×n representam os custos de transportes da
cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular o custo total
para cada itinerário:
*/

int main() {

    int mP[4][4],qtdI,qtdC,ValorFinal;

    for(int i = 0; i < 4;i++) {
        for(int j = 0; j < 4;j++) {
            cout << "Insira o valor na posição atual da matriz " << endl;
            cin >> mP[i][j];
        }
    }

    cout << "Insira a quantidade de itinerários" << endl;
    cin >> qtdI;

    for(int i = 0; i < qtdI; i++) {
        cout << "Insira o total de cidades para o itinerário " << i + 1 << endl;
        cin >> qtdC;

        int  vdtQtdC[qtdC];

        for(int z = 0; z < qtdC;z++) {
            cout << "Insira a cidade " << z +1 << endl;
            cin >> vdtQtdC[z];
        }

        int acumulador = 0;

        for(int i = 0; i < qtdC - 1;i++) {
            acumulador += mP[vdtQtdC[i]][vdtQtdC[i+1]];
        }

        ValorFinal = acumulador;
        acumulador = 0;

        cout << "O valor final do itinerário " << i + 1 << " é "  << ValorFinal << endl;
    }

    return 0;
}