#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {

    char frase[16];
    bool isPalindromo = true;

    gets(frase);

    strlwr(frase);

    int tamanho = strlen(frase);

    for(int i = 0; i < tamanho;i++) {
        if(frase[i] != frase[(tamanho - 1) - i]) {
            isPalindromo = false;
            break;
        }
    }

    cout << "A palavra é " << isPalindromo << endl;

    return 0;
}