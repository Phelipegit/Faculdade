#include<iostream>

using namespace std;

int main() {
    int somaLinha = 0, somaColuna = 0;
    int mat[4][4];
    for(int i = 0; i < 4;i++) {
        for(int j = 0; j < 4;j++) {
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 4;i++) {
        somaLinha = 0;
        somaColuna = 0;
        for(int j = 0; j < 4;j++) {
            somaLinha += mat[i][j];
            somaColuna += mat[j][i];
        }
        cout << "A soma da linha " << i << " resulta em " << somaLinha << endl;
        cout << "A soma da coluna " << i << " resulta em " << somaColuna << endl;
    }
    return 0;
}