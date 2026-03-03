//14. Calcule e mostre a quantidade de latas de tintas necessárias e o custo para pintar uma determinada área, cujo comprimento e a largura são informados. Sabe-se que:
// A lata de tinta custa R$ 25,00
// Cada lata contém 3.6 litros
// Cada litro pinta 13 m2
#include <iostream>
#include <math.h>
using namespace std;

double latas(double area) {
    return  round(area/46.8);
}

double precototal(double unidade) {
    return unidade*25;
}


int main() {
    double largura,comprimento,area;
    cout << "Insira a largura" << endl;
    cin >> largura;
    cout << "Insira o comprimento" << endl;
    cin >> comprimento;
    area = largura * comprimento;
    cout << "A quantidade de tintas necessárias é " << latas(area) << endl;
    cout << "O preço total é de R$" << precototal(latas(area));
    return 0;
}
