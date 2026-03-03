// 13. Calcule e mostre o número de lâmpadas necessárias para iluminar um determinado cômodo de uma residência. Dados de entrada: a potência da
// lâmpada utilizada (em watts), as dimensões (largura e comprimento, em metros)
// do cômodo. Considere que a potência necessária é de 20 watts por metro quadrado.
#include <iostream>
using namespace std;

double calc(double potencia) {
    return potencia/20;
}

double result(double z, double area) {
    return area/z;
}

int main() {
    double potencia,largura,comprimento,area, number;
    cout << "Insira a potência da lâmpada" << endl;
    cin >> potencia;
    cout << "Insira a largura do campo" << endl;
    cin >> largura;
    cout << "Insira o comprimento do campo" << endl;
    cin >> comprimento;
    area = largura * comprimento;
    number = result(calc(potencia), area);
    cout << "O número de lâmpadas é " << number << endl;
    return 0;
}
