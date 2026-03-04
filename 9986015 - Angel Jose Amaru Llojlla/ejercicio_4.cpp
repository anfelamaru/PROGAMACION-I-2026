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
    int n, numero, suma = 0, mayor, menor;
    srand(time(0));

    cout << "Cuantos numeros desea generar?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        numero = rand() % 1000 + 1;
        suma += numero;

        // Para el primer número, inicializamos mayor y menor con su valor
        if (i == 0) {
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor) mayor = numero;
            if (numero < menor) menor = numero;
        }
    }

    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << (float)suma / n << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}