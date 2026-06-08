// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Fecha creación: 04/05/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

// Función recursiva para sumar los elementos de un vector
int sumarVector(int vec[], int tamano) {
    if (tamano == 0) {
        return 0; // Caso base
    }
    return vec[tamano - 1] + sumarVector(vec, tamano - 1); // Caso recursivo
}

int main() {
    int n;
    cout << "Introduce el numero de elementos del vector: ";
    cin >> n;

    int vec[n];
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> vec[i];
    }

    cout << "La suma de los elementos del vector es: " << sumarVector(vec, n) << endl;

    return 0;
}