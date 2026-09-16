#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int main() {

    char frase[255];

    fgets(frase,255,stdin);

    int tam = strlen(frase);

    for(int i = tam; i >= 0;i--) {
        cout << frase[i];
    }

    return 0;
}