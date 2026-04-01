// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 1

#include <iostream>
using namespace std;

// Función que intercambia dos valores en memoria usando paso por referencia
void IntercambiarValores(int &a, int &b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int main() {
    int x = 15;
    int y = 42;
    
    cout << "Antes de la funcion -> x: " << x << ", y: " << y << endl;
    IntercambiarValores(x, y);
    cout << "Despues de la funcion -> x: " << x << ", y: " << y << endl;
    
    return 0;
}