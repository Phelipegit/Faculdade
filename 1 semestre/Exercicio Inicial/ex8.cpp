// 8. Leia uma temperatura em graus Celsius e calcule e mostre o valor correspondente em graus Fahrenheit. °F = °C × 1.8 + 32
#include<iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Insira a temperatura em celsius";
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << "A temperatura em fahrenheit é " << fahrenheit << endl;
    return 0;
}