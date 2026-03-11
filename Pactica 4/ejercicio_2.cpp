// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función que determina el mayor de tres números
int obtenerMayor(int num1, int num2, int num3) {
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    return mayor;
}

int main() {
    int n1, n2, n3;
    
    cout << "--- MAYOR DE 3 NUMEROS ---" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
    
    int mayor = obtenerMayor(n1, n2, n3);
    cout << "El numero mayor es: " << mayor << endl;
    
    return 0;
}