/*
Um posto está vendendo Gasolina com os seguintes descontos: até 20 litros, desconto de 4% por
litro e acima de 20 litros, desconto de 6% por litro. Faça um programa que leia o número de litros
vendidos de gasolina e mostre o valor a ser pago pelo cliente. Considere que o preço do litro da
gasolina é R$ 6,40.
*/

#include<iostream>
using namespace std;

int main() {
    const float litroGasolina = 6.40;
    float consumoGasolinaClient;
    float valorTotal;

    cout << "Insira a quantidade de gasolina vendida em litros" << endl;
    cin >> consumoGasolinaClient;

    if(consumoGasolinaClient <=20) {
        valorTotal = (litroGasolina * consumoGasolinaClient) * 0.96;
    } else {        
        valorTotal = (litroGasolina * consumoGasolinaClient) * 0.94;
    }

    cout << "O valor total é " << valorTotal << " R$" << endl;
    
    return 0;
}