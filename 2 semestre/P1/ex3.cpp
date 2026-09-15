#include<iostream>

using namespace std;

int main() {

    int mat[4][4];
    int somaDiagonaP = 0,somaDiagonaS = 0;
    for(int i = 0; i < 4;i++) {
        for(int j = 0; j < 4;j++) {
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 4;i++) {
        somaDiagonaP += mat[i][i];
    }

    for(int i = 0; i < 4;i++) {
        for(int j = 0; j < 4;j++) {
            if(i == (3 - j)) {
                somaDiagonaS += mat[i][j];
            }
        }
    }

    cout << somaDiagonaP << endl;
    cout << somaDiagonaS << endl;



    return 0;
}