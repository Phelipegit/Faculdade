// 11. Leia um valor de horas, minutos e segundos e calcule e mostre quantos segundos se passaram desde o início do dia.
#include<iostream>
using namespace std;

int main() {
    int horas,minutos,segundos,segundostotal;
    cout << "Insira a quantidade de horas" << endl;
    cin >> horas;
    cout << "Insira a quantidade de minutos" << endl;
    cin >> minutos;
    cout << "Insira a quantidade de segundos" << endl;
    cin >> segundos;
    segundostotal = (horas * 60 * 60) + (minutos * 60) + segundos;
    cout << "A quantidade de segundos total é " << segundostotal << endl;
    return 0;
}