// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 03/04/2026

#include <iostream>
#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time

using namespace std;

int main() {
    int n, caras = 0, cruces = 0;
    srand(time(0)); // Semilla para números aleatorios reales

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2; // Genera 0 o 1
        if (resultado == 0) {
            caras++;
        } else {
            cruces++;
        }
    }

    float porc_caras = (float)caras / n * 100;
    float porc_cruces = (float)cruces / n * 100;

    cout << "Resultados:" << endl;
    cout << "Caras: " << caras << " (" << porc_caras << "%)" << endl;
    cout << "Cruces: " << cruces << " (" << porc_cruces << "%)" << endl;

    return 0;
}