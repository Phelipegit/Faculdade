#include<iostream>

using namespace std;


//Função main
int main() {
    //Declaração de variáveis
    int numUsuario,numResultado = 0;

    cout << "Insira um número ";
    //Captura de valor do usuário
    cin >> numUsuario;

    //Estrutura de repetição até N 
    for(int i = 1; i <= numUsuario; i++) {
        numResultado += (2 * i);
    }

    //Exibição da mensagem
    cout << "A soma total dos números pares é " << numResultado << endl;
    
    //Retorno da função main
    return 0;
}