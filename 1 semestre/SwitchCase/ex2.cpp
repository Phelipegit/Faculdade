
#include<iostream>

using namespace std;

int main() {
    int codigo, quantidade;
    double valorTotal;

    cout << "Insira o código do produto" << endl;
    cin >> codigo;

    cout << "Insira a quantidade que deseja comprar do produto" << endl;
    cin >> quantidade;

    switch(codigo) {
        case 1001:
            valorTotal = quantidade * 12.32;
            break;
        case 1324:
            valorTotal = quantidade * 16.45;
            break;
        case 6548:
            valorTotal = quantidade * 22.37;
            break;        
        case 5987:
            valorTotal = quantidade * 25.32;
            break;
        case 7623:
            valorTotal = quantidade * 36.45;
            break;
        default:
            cout << "Valores inválidos" << endl;      
            return 0;
            break;
    }

    cout << "O valor final é de " << valorTotal << endl;

    return 0;
}