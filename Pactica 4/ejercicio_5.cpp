// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función booleana para verificar si es par
bool esPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    int num;
    
    cout << "--- VERIFICACION DE PARIDAD ---" << endl;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    
    if (esPar(num)) {
        cout << "Resultado: True (El numero es par)" << endl;
    } else {
        cout << "Resultado: False (El numero es impar)" << endl;
    }
    
    return 0;
}