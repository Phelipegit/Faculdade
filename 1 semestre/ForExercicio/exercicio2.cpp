#include<iostream>

using namespace std;

int main() {
    //Declaração das variáveis
    int idadeUsuario,idadeMaior = -1;
    //Estrutura de repetição
    do {
        cout << "Insira a idade do usuário" << endl;
        //Captura do valor inserido pelo usuário
        cin >> idadeUsuario;

        //Verifica se idade é maior que 0
        if(idadeUsuario < 0) {
            cout << "Dados inválidos" << endl;
            continue;
        }
        //Condição para alterar o valor da variável idadeMaior
        if(idadeUsuario > idadeMaior && idadeUsuario != 0) {
            idadeMaior = idadeUsuario;
        }
    
    }while(idadeUsuario != 0);

    cout << "A maior idade é " << idadeMaior << endl;

    //Retorno da função main
    return 0;
}