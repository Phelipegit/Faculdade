#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
    char frase[101];
    char vogais[5] = {'a','e','i','o','u'};
    int qtdVogais[5] = {0,0,0,0,0};

    gets(frase);
    
    strlwr(frase);

    int tamanho = strlen(frase);

    for(int i = 0; i < tamanho;i++) {
        for(int z = 0; z < 5;z++) {
            if(frase[i] == vogais[z]) qtdVogais[z]++;
        }
    }

    for(int i = 0; i < 5;i++) {
        cout << "A vogal " << vogais[i] << " apareceu " << qtdVogais[i] << " vezes" << endl;
    }
    return 0;
}
