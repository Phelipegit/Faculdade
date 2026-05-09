#include<iostream>
#include<vector>

using namespace std;
/*
4. Inverter o vetor
Inverta a ordem dos elementos sem usar funções prontas.
*/
int main() {
    vector<int> vetor = {5,3,2,1,6,7,8,4};

    int imax = (int) (vetor.size() -1);

    for(int i = 0;i < (int) vetor.size()/2;i++) {
        int vetorI = vetor[i];
        vetor[i] = vetor[imax];
        vetor[imax] = vetorI;
        imax--;
    }

    for(int i = 0; i < (int) vetor.size();i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}