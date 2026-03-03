//17. Faça um programa para ler um valor real representando um depósito bancário em uma poupança 
// Em seguida, calcular e mostrar o valor corrigido após o primeiro mês com uma taxa de juros de 6% ao mês.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, totalbalance;
    cout << "Insira o valor do deposito" << endl;
    cin >> balance;
    totalbalance = balance * 1.06;
    cout << fixed << setprecision(2);
    cout << "O saldo total sera de " << totalbalance << " depois de um mes" << endl;
    return 0;
}