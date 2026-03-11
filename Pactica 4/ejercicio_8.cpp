
// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función para contar los dígitos de un número entero positivo
int contarDigitos(int numero) {
    int contador = 0;
    
    // Caso especial: si el número ingresado es 0, tiene 1 dígito
    if (numero == 0) {
        return 1;
    }
    
    // Ciclo de divisiones sucesivas
    while (numero > 0) {
        numero = numero / 10; // También se puede escribir como: numero /= 10;
        contador++;
    }
    
    return contador;
}

int main() {
    int num;
    
    cout << "--- CONTADOR DE DIGITOS ---" << endl;
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    
    // Verificamos que el número sea positivo
    if (num >= 0) {
        int totalDigitos = contarDigitos(num);
        cout << "El numero tiene " << totalDigitos << " digito(s)." << endl;
    } else {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
    }
    
    return 0;
}