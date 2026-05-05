#include<iostream>

using namespace std;

int main() {
    float numeroInput,resultado;


    int soma = 0;
    int contador = 0;
    do {
        cout << "Digite o número" << endl;
        cin >> numeroInput;

        if(numeroInput > 0) {
            soma = soma + numeroInput;
            contador = contador + 1;
        }
    }while(numeroInput != -99);

    if(contador > 0) {
        resultado = (soma/contador);
        cout << "O resultado da divisão é " << resultado << endl;
    }
    return 0;
}