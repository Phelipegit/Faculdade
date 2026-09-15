#include<iostream>

using namespace std;

int main() {

    //DECLARACAO DE VARIAVEIS
    int vet[10];
    int somaP = 0,somaI = 0;
    //INICIO FOR
    for(int i = 0; i < 10;i++) {
        //CAPTURA DE VALOR
        cin >> vet[i];
        //CONDICIONAL
        if(vet[i] % 2 == 0) {
            somaP += vet[i];
        }else {
            somaI += vet[i];
        }
    }

    //EXIBICAO
    cout << "A soma dos números pares é " << somaP << endl;

    cout << "A soma dos números ímpares é " << somaI << endl;

    //RETORNO FUNCAO MAIN
    return 0;
}