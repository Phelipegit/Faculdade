#include<iostream>

using namespace std;

int main() {

    int opcao,n1,n2,result;

    cout << "101- Somar" << endl;
    cout << "102 - Subtrair" << endl;
    cout << "103 - Multiplicar" << endl;
    cout << "104 - Dividir" << endl;
    cin >> opcao;

    cout << "Digite o valor do n1" << endl;
    cin >> n1;

    cout << "Digite o valor do n2" << endl;
    cin >> n2;


    switch(opcao) {
        case 101:
            result = n1+n2;
            break;
        case 102:
            result = n1 - n2;
            break;
        case 103:
            result = n1 * n2;
            break;
        case 104:
            if(n2 == 0) {
                cout << "Valores inválidos" << endl;
                return 0;
            }
            result = n1/n2;
    }

    cout << "O resultado da operação é " << result << endl;

    return 0;
}