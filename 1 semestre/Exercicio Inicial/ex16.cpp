// 16. Faça um programa que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:
// D = R + S / 2  ONDE  R = (A+B)^2  e S = (B+C)^2
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int a,b,c,s,r;
    double d;
    cout << "Insira o A" << endl;
    cin >> a;
    cout << "Insira o B" << endl;
    cin >> b;
    cout << "Insira o c" << endl;
    cin >> c;
    if(a < 0 || b < 0 || c < 0) {
        cout << "Números apenas positivos podem estar presentes" << endl;
        return 0;
    }
    r = (a+b) * (a+b);
    s = (b+c) * (b+c);
    d = (r + s)/2.0;
    cout << "O resultado da operação é" << d << endl;
    return 0;
}