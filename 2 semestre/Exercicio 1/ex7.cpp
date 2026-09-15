#include<iostream>

using namespace std;

//FUNCAO PRINCIPAL DO ARQUIVO
int main() {

    int codigoCliente,tipoConta;
    float valorInvestido, jurosResultanteM;
    float somaTotalInvestido = 0,somaTotalJuros = 0;
    //LOOP
    do {
        //CAPTURA DE VALORES
        cout << "Informe o código do cliente" << endl;
        cin >> codigoCliente;

        //CONDICAO PARA PARAR O LOOP
        if(codigoCliente <= 0 ) break;

        cout << "Informe o tipo de investimento" << endl;
        cin >> tipoConta;

        cout << "Informe o valor de investimento" << endl;
        cin >> valorInvestido;

        //CONDICIONAL CALCULAR JUROSRESULTANTE
        if(tipoConta == 1) {
            jurosResultanteM = (valorInvestido * 0.015);
        } else if(tipoConta == 2) {
            jurosResultanteM = (valorInvestido * 0.02);
        } else {
            jurosResultanteM = (valorInvestido * 0.04);
        }

        //EXIBICACAO
        cout << "O rendimento mensal será de " << jurosResultanteM << endl;
        somaTotalInvestido += valorInvestido;
        somaTotalJuros += jurosResultanteM;
    }while(codigoCliente > 0);

    //EXIBICAO
    cout << "Total investido: " << somaTotalInvestido << endl;
    cout << "Total juros: " << somaTotalJuros << endl;
    return 0;
}