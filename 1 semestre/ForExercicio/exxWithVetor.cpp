#include<iostream>
#include<vector>
using namespace std;

int main() {
    int resultadoUser;
    vector<int> vetor(6);

    for(int i = 1; i <= 15; i++) {
        cout << "Insira o resultado " << i << endl;
        cin >> resultadoUser;
        vetor[resultadoUser -1] += 1;
    }

    for(int i = 1; i <= 5;i++) {
        cout << "A quantidade de vezes que saiu o número " << i << " é " << vetor[i] << endl;
    }

    return 0;
}