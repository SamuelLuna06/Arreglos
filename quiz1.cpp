#include <iostream>

using namespace std;

int main(){
    /*
    1.Crear 2 vectores de n cantidad de numeros que el usuario diligencie.
    Sumar los numeros diligenciados por le usuario en cada vector.
    Comparar los valores. Si son iguales que diga:"La suma es igual" y si no que diga "La suma es diferente".
    
    2.Crear un vector de n cantidad de minas que el usuario ingrese y al final debe mostrar cuantas minas hay.
    */

   int tamanoVector1 = 0;
   int tamanoVector2 = 0;
   int sumaVector1 = 0;
   int sumaVector2 = 0;
   int tamanoMinas = 0;
   int contMinas = 0;
   int vacioMinas = 0;

   cout << "Ingrese el tamano que desea para el primer vector: " << endl;
   cin >> tamanoVector1;
   cout << "Ahora ingrese el tamano que desea para el segundo vector: " << endl;
   cin >> tamanoVector2;

   int vector1 [tamanoVector1];
   int vector2 [tamanoVector2];

   for (int a = 0; a < tamanoVector1; a++){
        cout << "Ingrese los numeros que desea para el primer vector: " << endl;
        cin >> vector1[a];

        sumaVector1 += vector1[a];
    } 

    for (int e = 0; e < tamanoVector2; e++){
        cout << "Ahora ingrese los numeros que desea para el segundo vector: " << endl;
        cin >> vector2[e];

        sumaVector2 += vector2[e];
    }

    cout << sumaVector1 << endl; 
    cout << sumaVector2 << endl; 

    if (sumaVector1 == sumaVector2){
        cout << "La suma de los valores de los vectores es igual." << endl;
    }else if (sumaVector1 != sumaVector2){
        cout << "La suma de los valores de los vectores es diferente." << endl;
    }

   cout << "Ingrese el tamano que desea para el vector de minas: " << endl;
   cin >> tamanoMinas;

   int minas[tamanoMinas];

   for (int i = 0; i < tamanoMinas; i++){
        cout << "Si desea una mina en la posicion " << i << " escriba 1 de lo contrario escriba 0." << endl;
        cin >> minas[i];
    } 

    for (int o = 0; o < tamanoMinas; o++){
        if (minas[o] == 1){
            contMinas += 1;
        }else{
            vacioMinas += 1;
        }
    } 

    cout << "La cantidad de minas en el vector es de " << contMinas << "." << endl;

    return 0;
}