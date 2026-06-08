// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Fecha creación: 04/05/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;

// Función recursiva para el Máximo Común Divisor (Algoritmo de Euclides)
int calcularMCD(int a, int b) {
    if (b == 0) {
        return a; // Caso base
    }
    return calcularMCD(b, a % b); // Caso recursivo
}

int main() {
    int num1, num2;
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << calcularMCD(num1, num2) << endl;

    return 0;
}