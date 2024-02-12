#include <iostream>

using namespace std;

int main(){

    int f = 0;

    cout << "Cuantas frutas desea ingresar?" << endl;
    cin >> f;

    string frutas [f];

    for (int i = 0; i < f; i++){
        cout << "Ingrese el nombre de la fruta: " << endl;
        cin >> frutas[i];
    }

    for (int i = 0; i < f; i++){
        cout << frutas[i] << endl;
    }

    return 0;
}