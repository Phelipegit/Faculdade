#include<iostream>

using namespace std;

int main() {
    int n1,n2,resultado = 0,i = 0;

    cout << "Insira o valor de n1 " << endl;
    cin >> n1;

    cout << "Insira o valor de n2 " << endl;
    cin >> n2;

    if(n1 >= 0 && n2 >= 0) {
        while(i < n2) {
            resultado = resultado + n1;
            cout << resultado << endl;
            i++;
        }
    }

    cout << "O resultado final é " << resultado << endl;

    return 0;
}