#include<iostream>

using namespace std;

int main() {
    double jose = 1.50, pedro = 1.1;
    int contador = 0;

    while(pedro < jose) {
        jose = jose + 0.02;
        pedro = pedro + 0.03;
        contador++;
        cout << "=====================" << endl;
        cout << "   " << contador << " ano(s)" << endl;
        cout << "   " << jose  << " cm" << endl;
        cout << "   " << pedro  << " cm" << endl;
    }

    
    cout << "Pedro passará José em " << contador << " anos" << endl;

    return 0;
}