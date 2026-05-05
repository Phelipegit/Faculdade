#include<iostream>

using namespace std;

int main() {
    int frequencia;
    float nota;

    cout << "Insira a frequência do aluno" << endl;
    cin >> frequencia;

    if(frequencia >= 75) {

        cout << "Insira a nota do aluno" << endl;
        cin >> nota;

        if(nota >= 7) {
            cout << "Aluno aprovado" << endl;
        } else if(nota > 5 && nota < 7) {
            cout << "Aluno em recuperação" << endl;
        } else {
            cout << "Aluno reprovado" << endl;
        }
    } else {
        cout << "Aluno reprovado por frequência" << endl;
    }


    return 0;
}