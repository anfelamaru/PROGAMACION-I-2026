// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función con ciclo para sumar de 1 hasta N
int sumatoriaNaturales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i; // Equivalente a: suma = suma + i;
    }
    return suma;
}

int main() {
    int n;
    
    cout << "--- SUMATORIA DE NATURALES ---" << endl;
    cout << "Ingrese un numero entero positivo (N): ";
    cin >> n;
    
    // Validación de número positivo
    if (n > 0) {
        int resultado = sumatoriaNaturales(n);
        cout << "La suma desde 1 hasta " << n << " es: " << resultado << endl;
    } else {
        cout << "Por favor, ingrese un numero mayor que 0." << endl;
    }
    
    return 0;
}