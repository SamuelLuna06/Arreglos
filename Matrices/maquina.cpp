#include <iostream>

using namespace std;

int main(){

    int f = 0;
    int c = 0;

    cout << "Ingrese el numero de filas de la maquina:" << endl;
    cin >> f;

    cout << "Ingrese el numero de columnas de la maquina:" << endl;
    cin >> c;

    string maquina [f] [c];

    for (int a = 0; a < f; a++){

        for (int e = 0; e < c; e++){
            cout << "Ingrese el nombre del producto y el valor: " << endl;
            cin >> maquina [a][e];
        }

        cout << endl;
    }

    for (int i = 0; i < f; i++){
        for (int o = 0; o < c; o++){
            cout << maquina[i][o];
        }
        cout << endl;
    }
    
    return 0;
}