// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026

#include <iostream>

using namespace std;

// Función que calcula el área del triángulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

int main() {
    double base, altura;
    
    cout << "--- AREA DE UN TRIANGULO ---" << endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    
    double area = calcularAreaTriangulo(base, altura);
    cout << "El area del triangulo es: " << area << endl;
    
    return 0;
}