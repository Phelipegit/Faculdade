/*
Faça um programa que leia a quantidade atual em estoque, quantidade máxima em estoque e
quantidade mínima em estoque de um produto. O programa deve calcular e mostrar a quantidade
média ((quantidade média = quantidade máxima + quantidade mínima)/2). Se a quantidade em
estoque for maior ou igual a quantidade média escrever a mensagem “Não efetuar compra”, senão
escrever a mensagem “Efetuar compra”.
*/

#include<iostream>
using namespace std;

int main() {
    int qtdatual, qtdmax, qtdmin,qtdmedia;

    cout << "Insira a quantidade atual em estoque" << endl;
    cin >> qtdatual;

    cout << "Insira a quantidade máxima em estoque" << endl;
    cin >> qtdmax;

    cout << "Insira a quantidade mínima em estoque" << endl;
    cin >> qtdmin;

    qtdmedia = (qtdmax + qtdmin)/2;

    if(qtdatual >= qtdmedia) {
        cout << "Não efetuar compra" << endl;
    } else {
        cout << "Efetuar compra" << endl;
    }

    return 0;
}