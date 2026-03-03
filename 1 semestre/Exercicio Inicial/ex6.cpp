// 6. Leia três números reais, calcule e mostre a soma e sua respectiva média.
#include<iostream>
using namespace std;

int main() {
    double n1,n2,n3,result;
    cout << "Insira o primeiro número" << endl;
    cin >> n1;
    cout << "Insira o segundo número" << endl;
    cin >> n2;
    cout << "Insira o terceiro número" << endl;
    cin >> n3;
    result = (n1 + n2 + n3)/3;
    cout << "A média dos três números é " << result << endl;
    return 0;
}