/*
2. Faça um programa que leia três números inteiros e que determina e mostra o menor deles.
Suponha que os três valores sejam diferentes.
*/

#include<iostream>
using namespace std;

int main() {
    int n1,n2,n3;
    cout << "Insira o número 1" << endl;
    cin >> n1;
    cout << "Insira o número 2" << endl;
    cin >> n2;
    cout << "Insira o número 3" << endl;
    cin >> n3;

    if(n1 < n2 && n1 < n3) {
        cout << "O numero menor e " << n1 << endl;
    } else if(n2 < n3 && n2 < n1) {
        cout << "O numero menor e " << n2 << endl;
    } else {
        cout << "O numero menor e " << n3 << endl;
    }
    return 0;
}