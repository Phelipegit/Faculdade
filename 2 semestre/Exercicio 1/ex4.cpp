#include<iostream>
#define VALORGASOLINA 6.70
#define VALORETANOL 4.90
using namespace std;

int main() {

    //DECLARACAO VARIAVEIS
    float litrosVendidos;
    char tipoCombustivel;
    float totalPago;

    //EXIBE E CAPTURA VALORES
    cout << "Insira o tipo de combust�vel: g para gasolina e e para etanol" << endl;
    cin >> tipoCombustivel;

    cout << "Insira o total de litros de combust�vel" << endl;
    cin >> litrosVendidos;

    //LÓGICA
    if(tipoCombustivel == 'g') {
            (litrosVendidos <= 20) ? (totalPago = (litrosVendidos * (VALORGASOLINA * 0.97))) : (totalPago = (litrosVendidos * (VALORGASOLINA * 0.95)));
    } else if(tipoCombustivel == 'e') {
        (litrosVendidos <= 20) ? (totalPago = (litrosVendidos * (VALORETANOL * 0.96))) : (totalPago = (litrosVendidos * (VALORETANOL * 0.94)));
    }

    //EXIBE VALOR TOTAL
    cout << "Valor total: "<< totalPago << endl;

    //RETORNO FUNCAO MAIN
    return 0;
}
