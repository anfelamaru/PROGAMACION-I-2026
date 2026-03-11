// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica



#include <iostream>

using namespace std;

int main() {
    int n;
    int suma = 0;

    cout << "Ingrese un numero entero positivo (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de 1 hasta " << n << " es: " << suma << endl;

    return 0;
}