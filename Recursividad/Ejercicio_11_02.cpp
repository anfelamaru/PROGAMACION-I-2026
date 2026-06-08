// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Fecha creación: 04/05/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

// Función recursiva para calcular la potencia sin usar pow
int calcularPotencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; // Caso base: cualquier número elevado a 0 es 1
    }
    return base * calcularPotencia(base, exponente - 1); // Caso recursivo
}

int main() {
    int base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "Este programa solo maneja exponentes enteros no negativos." << endl;
    } else {
        cout << base << "^" << exponente << " = " << calcularPotencia(base, exponente) << endl;
    }

    return 0;
}