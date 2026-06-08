// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Fecha creación: 04/05/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

// Función recursiva para hallar el enésimo término de Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0; // Casos base
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // Caso recursivo
}

int main() {
    int n;
    cout << "Introduce la posicion (n) para la secuencia de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "La posicion debe ser mayor o igual a 0." << endl;
    } else {
        cout << "El termino " << n << " de Fibonacci es: " << fibonacci(n) << endl;
    }

    return 0;
}