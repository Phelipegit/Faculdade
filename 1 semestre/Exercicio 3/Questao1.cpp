/*
Faça um programa que leia o valor do salário de uma pessoa e o valor de um financiamento
pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa
deverá escrever “Financiamento Concedido”, caso contrário ele deverá escrever “Financiamento
Negado”.
*/

#include<iostream>
using namespace std;

int main() {
    float salario, financiamento;

    cout << "Digite o seu salário" << endl;
    cin >> salario;

    cout << "Digite o seu financiamento proposto" << endl;
    cin >> financiamento;

    if(salario > 0 && financiamento/salario <= 5) {
        cout << "Financiamento concedido" << endl;
    } else {
        cout << "Financiamento recusado" << endl;
    }
    
    return 0;
}