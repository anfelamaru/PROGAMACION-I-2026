// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 2

#include <iostream>
#include <cmath>
using namespace std;

// Función con parametro por defecto para la altura
double CalcularVolumen(double radio, double altura = 10.0) {
    const double PI = acos(-1.0); // Constante Pi
    return PI * pow(radio, 2) * altura;
}

int main() {
    double r = 5.0;
    
    cout << "Volumen (solo con radio, altura por defecto 10): " << CalcularVolumen(r) << endl;
    cout << "Volumen (con radio 5 y altura 15): " << CalcularVolumen(r, 15.0) << endl;
    
    return 0;
}