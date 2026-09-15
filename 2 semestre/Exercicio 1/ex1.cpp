#include<iostream>
#include<locale.h>
#define VALOR 6.70
using namespace std;

int main() {

    setlocale(LC_ALL,"Portuguese");
    //DECLARACAO VARIAVEIS
    float odometroI,odometroF,litrosCombustivel,totalRecebido;

    //EXIBICAO E CAPTURA DE VALORES
    cout << "Insira a marca��o do od�metro no in�cio do dia " << endl;
    cin >> odometroI;

    cout << "Insira a marca��o do od�metro no final do dia " << endl;
    cin >> odometroF;

    cout << "Insira o total de combust�vel gasto" << endl;
    cin >> litrosCombustivel;

    cout << "Insira o valor recebido pelos passageiros" <<endl;
    cin >> totalRecebido;

    //LOGICA
    cout << "A m�dia de consumo em Km/L � " << ((odometroF - odometroI)/litrosCombustivel) << endl;

    cout << "Lucro l�quido do dia:" << (totalRecebido - (litrosCombustivel * VALOR)) << endl;


    return 0;
}
