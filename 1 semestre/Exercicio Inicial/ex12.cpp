// 12. Leia três notas de um aluno e calcule e mostre a média final deste aluno.
// Considere que a média é ponderada e que o peso das notas é: 2, 3 e 5,respectivamente.
#include<iostream>
using namespace std;

int main() {
    double nota1,nota2,nota3,media;
    cout << "Insira a primeira nota" << endl;
    cin >> nota1;
    cout << "Insira a segunda nota" << endl;
    cin >> nota2;
    cout << "Insira a terceira nota" << endl;
    cin >> nota3;

    media = (2*nota1 + 3*nota2 + 5*nota3)/10;
    cout << "A média ponderada das notas é " << media << endl;
    return 0;
}