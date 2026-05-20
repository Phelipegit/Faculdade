#include<iostream>

using namespace std;

//Função principal
int main() {
    //Declaração das variáveis
    float numResultado = 0.0, alturaPessoa;

    //Estrutura FOR
    for(int i = 1; i <= 10; i++) {
        cout << "Insira a altura da pessoa " << i << endl;
        //Captura do valor digitado pelo usuário
        cin >> alturaPessoa;
        //Estrutura condicional para incrementar a variável numResultado
        if(alturaPessoa > 1.80) {
            numResultado += 1;
        }
    }

    cout << numResultado << " possui(em) altura maior que 1.80m" << endl;
    //Retorno da função main
    return 0;
}