// 7. Leia uma temperatura em graus Fahrenheit e calcule e mostre o valor correspondente em graus Celsius.°C = (°F - 32)/1.8
#include<iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cout << "Insira a temperatura em fahrenheit" << endl;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32)/1.8;
    cout << "A temperatura em celsius é " << celsius << endl;
    return 0;
}