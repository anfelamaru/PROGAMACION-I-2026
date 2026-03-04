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
    int n, numero, contadorPrimos = 0;
    srand(time(0));

    cout << "Ingrese la cantidad de numeros (N): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        numero = rand() % 10000 + 1;
        cout << numero << " ";

        // Lógica para verificar si es primo
        if (numero < 2) continue; // El 1 no es primo
        
        bool esPrimo = true;
        for (int j = 2; j * j <= numero; j++) {
            if (numero % j == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            contadorPrimos++;
        }
    }

    cout << "\n\nTotal de numeros primos encontrados: " << contadorPrimos << endl;

    return 0;
}