#include<iostream>

using namespace std;

int main() {
    char vetVog[5] = {'a','e','i','o','u'};
    char carac;
    bool isVogal = false;

    cin >> carac;

    for(int i = 0; i < 5;i++) {
        if(vetVog[i] == carac) {
            isVogal = true;
        }
    }
    
    cout << isVogal << endl;
    return 0;
}