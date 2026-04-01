// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 5

#include <iostream>
using namespace std;

// Area de un cuadrado (1 parametro double)
double calcularArea(double lado) {
    return lado * lado;
}

// Area de un rectangulo (2 parametros double)
double calcularArea(double base, double altura) {
    return base * altura;
}

// Area de un circulo (parametros float)
double calcularArea(float radio, float PI) {
    return PI * radio * radio;
}

int main() {
    cout << "Area del Cuadrado (lado 4): " << calcularArea(4.0) << endl;
    cout << "Area del Rectangulo (base 4, altura 5): " << calcularArea(4.0, 5.0) << endl;
    cout << "Area del Circulo (radio 3, PI 3.14159): " << calcularArea(3.0f, 3.14159f) << endl;
    
    return 0;
}