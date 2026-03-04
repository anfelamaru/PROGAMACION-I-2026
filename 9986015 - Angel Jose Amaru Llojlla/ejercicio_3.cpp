// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 03/04/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numero = rand() % 10 + 1; // Rango [1, 10]
    long long factorial = 1;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El numero generado es: " << numero << endl;
    cout << "Su factorial es: " << factorial << endl;

    return 0;
}