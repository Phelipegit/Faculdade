#include<iostream>

using namespace std;

int main() {

    //DECLARACAO VARIAVEL
    float indicePoluicao;

    //CAPTURA DE VALORES
    cin >> indicePoluicao;

    //LÓGICA E EXIBE
    cout << "Classifica��o: ";
    (indicePoluicao < 35) ? cout << "agrad�vel" << endl : (indicePoluicao >= 35 && indicePoluicao <= 60) ? cout << "desagrad�vel" << endl : cout << "perigoso" << endl;

    //RETORNO DA FUNCAO MAIN
    return 0;
}
