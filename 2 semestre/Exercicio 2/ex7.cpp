#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int contador = 0;
    char frase[255];

    fgets(frase,255,stdin);

    int tam = strlen(frase);

    for(int i = 0; i < tam - 1;i++) {
        if(frase[i] == ' ') {
            continue;
        } else {
            contador++;
        }
    }

    cout << contador << endl;
    return 0;
}