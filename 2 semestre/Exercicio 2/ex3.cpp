#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
    int qtdPalavras = 0;
    char frase[256];

    gets(frase);

    if(strlen(frase) > 0 ) {
        qtdPalavras++;
    }

    for(int i = 0; i < 255;i++) {
        if(frase[i] == ' ' && frase[i + 1] != '\0') {
            qtdPalavras++;
        } else {
            break;
        }
    }

    cout << qtdPalavras << endl;
}