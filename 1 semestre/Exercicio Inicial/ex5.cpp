// 5. Leia dois números reais e calcule e mostre a respectiva média.
#include <iostream>
using namespace std;

int main() {
    double n1,n2, result;
    cout << "Insira o primeiro número" << endl;
    cin >> n1;
    cout << "Insira o segundo número" << endl;
    cin >> n2;
    result = (n1 + n2)/2;
    cout << "A média dos números é " << result << endl;
    return 0;
}