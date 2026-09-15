#include<iostream>
#include<locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL,"Portuguese");

    //DECLARACAO VARIAVEIS
    float qtdPes;

    //CAPTURA VALOR
    cin >> qtdPes;

    float qtdPolegadas,qtdJardas,qtdMilhas;

    //LOGICA
    qtdPolegadas = (qtdPes * 12);

    qtdJardas = (qtdPes/3);

    qtdMilhas = ((qtdPes/3)/1760);

    //EXIBICACAO
    cout << "A convers�o para polegadas � " << qtdPolegadas << endl;

    cout << "A convers�o para jardas � " << qtdJardas << endl;

    cout << "A convers�o para milhas � " << qtdMilhas << endl;

    //RETORNO FUNCAO MAIN
    return 0;
}
