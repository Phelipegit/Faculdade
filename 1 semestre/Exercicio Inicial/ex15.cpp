//15. Leia um valor em segundos e calcule e mostre o valor correspondente em horas,minutos e segundos.
#include <iostream>
using namespace std;

int main() {
    int input = 0, horas = 0, minutos = 0, segundos = 0;
    cout << "Insira o valor em segundos" << endl;
    cin >> input;
    horas = input/3600;
    minutos = (input % 3600)/60;
    segundos = (input % 60);
    cout << horas << endl;
    cout << minutos << endl;
    cout << segundos << endl;
    return 0;
}