// 3. Leia dois números inteiros e calcule e mostre a soma de seus quadrados.
#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cout << "Insira o primeiro número" << endl;
    cin >> n1;
    cout << "insira o segundo número" << endl;
    cin >> n2;  
    int resultado = (n1*n1) + (n2*n2);
    cout << "A soma dos quadrados é " << resultado << endl;
    return 0;
}