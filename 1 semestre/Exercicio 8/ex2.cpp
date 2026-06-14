#include<iostream>

using namespace std;

int main() {
    int m[5][5],somaTotal = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5;j++) {
            cout << "Insira um número na posição atual" << endl;
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < 5;i++) {
        for(int j = 0; j < 5; j++) {
            if(i == j) {
                somaTotal += m[i][j];
            }
        }
    }

    cout << "A soma total da diagonal principal é " << somaTotal << endl;

    return 0;
}