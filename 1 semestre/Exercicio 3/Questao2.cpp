/*
Faça um programa que leia o tempo de serviço e o salário de um funcionário e calcule e mostre um
reajuste salarial de acordo com a seguinte situação: se o funcionário possui tempo de serviço
inferior a 10 anos, o reajuste será de 8%, caso contrário, o reajuste salarial será de 10%.
*/

#include<iostream>

using namespace std;

int main() {
    int tempoServico;
    float salario,newSalario;


    cout << "Digite o tempo de serviço em anos" << endl;
    cin >> tempoServico;

    cout << "Digite o seu salário" << endl;
    cin >> salario;

    if(tempoServico < 10) {
        newSalario = salario * 1.08;
    } else {
        newSalario = salario * 1.1;
    }

    cout << "Seu novo salário é " << newSalario << endl;

    return 0;
}