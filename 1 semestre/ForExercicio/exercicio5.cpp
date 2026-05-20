#include<iostream>

using namespace std;

//Função principal
int main() {

    //Declaração de variáveis
    int resultadoUsuario,r1 = 0,r2 = 0,r3 = 0,r4 = 0,r5 = 0,r6 = 0;

    //Estrutura de repetição
    for(int i = 1; i <= 15; i++) {
        cout << "Insira o valor do resultado " << i << endl;
        //Captura de valor do usuário
        cin >> resultadoUsuario;

        //Estrutura de condicional 
        switch(resultadoUsuario) {
            case 1:
                r1 += 1;
                break;
            case 2:
                r2 += 1;
                break;
            case 3:
                r3 += 1;
                break;
            case 4:
                r4 += 1;
                break;
            case 5:
                r5 += 1;
                break;
            case 6:
                r6 += 1;
                break;
            default:
                cout << "Valor inválido" << endl;
                i--;                        
        }
    }

    //Exibição para o usuário
    cout << "Lado 1 : " << r1 << endl;
    cout << "Lado 2 : " << r2 << endl;
    cout << "Lado 3 : " << r3 << endl;
    cout << "Lado 4 : " << r4 << endl;
    cout << "Lado 5 : " << r5 << endl;
    cout << "Lado 6 : " << r6 << endl;

    //Retorno da função principal
    return 0;
}