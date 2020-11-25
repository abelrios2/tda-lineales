/**
 * @file main.cpp
 * @brief programa principal para probar la pila (vector dinamico)
 * @author Salvador Romero Cortés
 * @author Abel Ríos González
 */
#include <iostream>
#include <Pila_max_VD.h>
using namespace std;

int main(){

    Pila_max p1;
    srand(time(NULL));

    cout << "\nCola 1:\nElemento Máximo";
    for (int i=0; i < 10; i++){
        int numero = rand() % 10 + 1;
        p1.poner(numero);
        cout << p1.tope();
    }
    cout << " <-- Máximo";
    cout << "\n   ^\n   |\n  Tope" << endl;

    Pila_max p2(p1);
    cout << "\nCola 1 (orden inverso de entrada | orden natural de la pila):\nElemento Máximo";
    cout << "\n  Tope\n   ^\n   |";
    for (int i=0; i < 10; i++){
        cout << p2.tope();
        if (i==0)
            cout << " <-- Máximo";
        p2.quitar();
    }
    cout << endl;
    return 0;

}

