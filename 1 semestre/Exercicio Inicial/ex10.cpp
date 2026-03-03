//10. Leia um valor de conta de um restaurante representando o gasto realizado pelo cliente. 
// O programa deve calcular e mostrar o valor total a ser pago, considerando que o restaurante cobra 10% para o garçom.
#include<iostream>
using namespace std;

int main() {
    double conta, contatotal;
    cout << "Insira o valor da conta do restaurante" << endl;
    cin >> conta;
    contatotal = conta * 1.1;
    cout << "O valor da conta total é " << contatotal << endl;
    return 0;
}
