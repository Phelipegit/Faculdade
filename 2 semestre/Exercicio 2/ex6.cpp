#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cctype>
using namespace std;

int main() {
    char frase[255];

    fgets(frase,255,stdin);

    int tam = strlen(frase);

    frase[0] = toupper(frase[0]);

    for(int i = 0; i < tam;i++) {
        if(frase[i] == '\0') break;

        if(frase[i] == ' ') frase[i + 1] = toupper(frase[i + 1]);
    }

    cout << frase << endl;


    return 0;
} 