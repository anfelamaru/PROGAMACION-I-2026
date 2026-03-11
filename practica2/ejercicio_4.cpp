// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica


#include <iostream>

using namespace std;

int main() {
    int n;
    long long sumaTotal = 0;
    long long factorialActual = 1;

    cout << "Ingrese el limite de la serie de factoriales (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorialActual *= i; 
        sumaTotal += factorialActual;
    }

    cout << "La suma de factoriales hasta " << n << "! es: " << sumaTotal << endl;

    return 0;
}