#include<iostream>

using namespace std;

int main() {

    float inputUser;

    cout << "Insira um número" << endl;
    cin >> inputUser;
    while(inputUser > 1) {
        inputUser = inputUser/2;
        if(inputUser > 1) {
            cout << inputUser << endl;
        }
    }
    return 0;
}