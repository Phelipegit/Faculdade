#include<iostream>
#include<locale.h>

using namespace std;

//DECLARACAO STRUCT
struct Pessoa {
    float peso;
    int idade;
};

int main() {

    //DECLARACAO VARIAVEIS
    Pessoa pessoas[10];
    float somaIdades = 0;

    //FOR PARA CAPTURA DOS VALORES
    for(int i = 0; i < 10;i++) {
        cout << "Insira a idade" << endl;
        cin >> pessoas[i].idade;

        //SOMA DAS IDADES DAS 10 PESSOAS
        somaIdades += pessoas[i].idade;

        cout << "Insira o peso" << endl;
        cin >> pessoas[i].peso;
    }

    int qtdMaiorP = 0,qtdMaiorI = 0;

    //LOOP PARA CONDICIONAL
    for(int i = 0; i < 10;i++) {
        if(pessoas[i].peso > 90) qtdMaiorP++;

        if(pessoas[i].idade > 50) qtdMaiorI++;
    }

    //CALCULO MEDIA
    float qtdMediaI = (somaIdades/10);

    //EXIBICAO
    cout << "A média das 10 idades é " << qtdMediaI << endl;

    cout << "A quantidade de pessoas acima de 90 quilos é " << qtdMaiorP << endl;

    cout << "A quantidade de pessoas acima de 50 anos é " << qtdMaiorI << endl;

    return 0;
}