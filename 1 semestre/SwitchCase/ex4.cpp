#include<iostream>

using namespace std;

int main() {
    int codigo;
    double valorProduto,valorFinal;

    cout << "Insira o código do produto" << endl;
    cin >> codigo;

    cout << "Insira o valor do produto" << endl;
    cin >> valorProduto;



    switch(codigo) {
        case 1001:
            valorFinal = valorProduto * 0.78;
            break;
        case 1254:
            valorFinal = valorProduto * 0.7;
            break;
        case 1548:
            valorFinal = valorProduto * 0.68;
            break;
        case 1687:
            valorFinal = valorProduto * 0.63;
            break;
        case 1923:
            valorFinal = valorProduto * 0.6;
            break;
        default:
            cout << "Valores inválidos" << endl;
            return 0;
            break;                    
    }

    cout << "O valor final do produto é de " << valorFinal << " R$" << endl;

    return 0;
}