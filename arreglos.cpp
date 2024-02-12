#include <iostream>

using namespace std;

int main(){

    string names [5] = {"Grabiela","Juan", "Ivan", "Laura", "Samuel"};
    string names2 [5];

    for (int i = 0; i < names->length(); i++){
        cout << names[i] << endl;
    }

    for (int i = 0; i < 5; i++){
        cout << "Ingrese el nombre: " << endl;
        cin >> names2[i];
    }

    for (int i = 0; i < names2->length(); i++){
        cout << names2[i] << endl;
    }

    return 0;
}