#include<iostream>

using namespace std;

int main() {
    int codigo;
    double salario, newSalario, diferencaSalario;

    cout << "Insira seu salário" << endl;
    cin >> salario;

    cout << "Insira o turno" << endl;
    cout << "1 - Turno Manhã" << endl;
    cout << "2 - Turno Tarde" << endl;
    cout << "3 - Turno Noite" << endl;
    cin >> codigo;

    switch(codigo) {
        case 1:
            if(salario > 2000) {
                newSalario = salario * 1.1;
            } else {
                newSalario = salario * 1.2;
            }
            break;
        case 2:
            if(salario > 2000) {
                newSalario = salario * 1.08;
            } else {
                newSalario = salario * 1.15;
            }
            break;
        case 3:
            if(salario > 2000) {
                newSalario = salario * 1.12;
            } else {
                newSalario = salario * 1.25;
            }
            break;
        default:
            cout << "Valores inválidos" << endl;
            return 0;    
    }

    diferencaSalario = newSalario - salario;

    cout << "O seu novo salário é de " << newSalario << endl;
    cout << "A diferença foi de " << diferencaSalario << endl;

    return 0;
}