#include<iostream>
#include<string>

using namespace std;

string retornarNomeString();
void retornarExibicao();

int main() {
    retornarExibicao();
    cout << retornarNomeString().length();
}

string retornarNomeString() {
    return "Phelipe";
}

void retornarExibicao() {
    cout << "Olá " << retornarNomeString() << endl;
}