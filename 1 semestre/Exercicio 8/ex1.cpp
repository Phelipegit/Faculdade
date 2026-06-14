    #include<iostream>

    using namespace std;

    int main() {
        int m[5][5], numUser;

        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5;j++) {
                cout << "Insira o número na posição atual" << endl;
                cin >> m[i][j];
            }
        }

        cout << "Insira um número inteiro aleatório" << endl;
        cin >> numUser;

        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5;j++) {
                m[i][j] *= numUser;
            }
        }

        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5;j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }