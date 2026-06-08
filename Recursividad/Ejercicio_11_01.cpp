// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Fecha creación: 04/05/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

// Función recursiva para sumar los dígitos de un número
int sumarDigitos(int n) {
    if (n == 0) {
        return 0; // Caso base
    }
    return (n % 10) + sumarDigitos(n / 10); // Caso recursivo
}

int main() {
    int numero;
    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, introduce un numero positivo." << endl;
    } else {
        cout << "La suma de los digitos de " << numero << " es: " << sumarDigitos(numero) << endl;
    }

    return 0;
}