#include <iostream>

using namespace std;

int main(){

    string calculadora [5] [3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}, {"+", "0", "-"}, {"*", "=", "√"}};

    for (int a = 0; a < 5; a++){
        for (int e = 0; e < 3; e++){
            cout << calculadora[a][e];
        }
        cout << endl;
    }
    
    return 0;
}