#include<iostream>

using namespace std;

int main() {
    int codigo;
    double salario, newSalario,diferencaSalario;

    cout << "Insira o código do cargo" << endl;
    cin >> codigo;

    cout << "Insira o salário do funcionário" << endl;
    cin >> salario;

    switch(codigo) {
        case 101:
            newSalario = salario * 1.1;
            break;
        case 102:
            newSalario = salario * 1.2;
            break;
        case 103:
            newSalario = salario * 1.3;
            break;
        default:
            newSalario = salario * 1.4;
            break;
    }

    diferencaSalario = newSalario - salario;

    cout << "O seu novo salário é de " << newSalario << endl;

    cout << "A diferença de salário é de " << diferencaSalario << endl;

    return 0;
}