/*
1. Faça um programa que leia quatro notas de um aluno, calcula e mostra a sua média
classificando-o de acordo uma das seguintes situações: se a média for maior ou igual a 6.0, o
aluno está aprovado, se a média for menor que 6.0 e maior ou igual a 3.0, o aluno está de
exame, e se a média for menor que 3.0, o aluno está reprovado.
*/

#include<iostream>
using namespace std;

int main() {
    double n1,n2,n3,n4,media;

    cout << "Insira a nota 1" << endl;
    cin >> n1;
    cout << "Insira a nota 2" << endl;
    cin >> n2;
    cout << "Insira a nota 3" << endl;
    cin >> n3;
    cout << "Insira a nota 4" << endl;
    cin >> n4;

    media = (n1 + n2 + n3 + n4)/4;

    if(media >= 6) {
        cout << "Aluno aprovado" << endl;
    } else if(media < 6 && media >= 3) {
        cout << "Aluno está de exame" << endl;
    } else {
        cout << "Aluno reprovado" << endl;
    }
    return 0;
}