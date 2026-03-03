// 4. Leia dois números reais e calcule e mostre o respectivo produto.
#include<iostream>
using namespace std;

int main() {
    int n1,n2, result;
    cout << "Insira o primeiro número" << endl;
    cin >> n1;
    cout << "Insira o segundo número" << endl;
    cin >> n2;
    result = n1 * n2;
    cout << "O respectivo produto é " << result << endl;
    return 0;
}