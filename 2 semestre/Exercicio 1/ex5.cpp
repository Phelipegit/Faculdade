
#include<iostream>
#include<locale.h>
using namespace std;

int main() {

    //DECLARACAO VARIAVEIS
    int diaVencimento,diaPagamento;

    float valorPrestacao,valorTotal;

    setlocale(LC_ALL,"Portuguese");

    //EXIBE E CAPTURA VALORES
    cout << "Insira o dia do vencimento " << endl;
    cin >> diaVencimento;

    cout << "Insira o dia do pagamento " << endl;
    cin >> diaPagamento;

    cout << "Insira o valor da prestação" << endl;
    cin >> valorPrestacao;

    //LOGICA
    if(diaPagamento <= diaVencimento) {
        valorTotal = (valorPrestacao * 0.9);
        cout << "Pagamento está em dia" << endl;
    } else if(diaPagamento - diaVencimento <= 5) {
        valorTotal = valorPrestacao;
        cout << "Pagamento sem desconto" << endl;
    } else {
        cout << "Juros de 2% a cada dia atrasado" << endl;
        valorTotal = valorPrestacao + ((valorPrestacao * 0.02) * ((diaPagamento - diaVencimento) -5));
    }

    //EXIBE
    cout << "Valor total da prestação: " << valorTotal << endl;

    //RETORNO FUNCAO PRINCIPAL
    return 0;
}