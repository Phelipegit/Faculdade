#include<iostream>
#include<list>
using namespace std;

class main22 {
    private:
        int numero;
        char opcao;

    public:

        main22(int numero, char opcao) {
            this->numero = numero;
            this->opcao = opcao;
        }

        int getNumero() {
            return this->numero;
        }

        char getOpcao() {
            return this->opcao;
        }
};


int main() {
    list<main22> lista;
    int soma = 0;

    main22 num1;



    for(int n : lista) {
        cout << n << endl;
    }

    cout << "Valor somado é de " << soma << endl;

    return 0;
}