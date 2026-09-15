#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {

    char frase[255];
    int contador = 0;
    gets(frase);

    int tam = strlen(frase);

    for(int i = 0; i < tam;i++) {
        if(frase[i] == ' ') {
            if(frase[i-1] == 'o') {
                contador++;
            }
        }

        if(frase[i + 1] == '\0') {
            if(frase[i] == 'o') {
                contador++;
            }
        }
    }

    cout << contador << endl;

    return 0;
}