#include<iostream>

using namespace std;

//Função principal
int main() {
    //Declaração de variáveis
    int numUser,numResultado = 0;
    //Estrutura de repetição com condição de parada 
    do {
        cout << "Digite um número" << endl;
        cin >> numUser;
        //Condicional para efetuar a adição na variável numResultado
        if(numUser % 5 == 0) {
            numResultado += numUser;
        }
    }while(numUser != 0);

    cout << "A soma de todos os números múltiplos de 5 é " << numResultado << endl;

    //Retorno da função main
    return 0;
}