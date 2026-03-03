// Leia o raio de um círculo e calcule e mostre a sua área. Área = Π×R^2
#include<iostream>
using namespace std;

int main() {
    double raio,area;
    cout << "Insira o raio" << endl;
    cin >> raio;
    area = 3.14 * (raio * raio);
    cout << "A área do círculo é " << area << endl;
    return 0;
}