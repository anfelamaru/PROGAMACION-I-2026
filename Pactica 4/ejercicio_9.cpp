// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función para calcular el promedio de dos notas
double calcularPromedio(double nota1, double nota2) {
    return (nota1 + nota2) / 2.0;
}

int main() {
    double calificacion1, calificacion2;
    
    cout << "--- PROMEDIO DE CALIFICACIONES ---" << endl;
    cout << "Ingrese la primera nota: ";
    cin >> calificacion1;
    cout << "Ingrese la segunda nota: ";
    cin >> calificacion2;
    
    double promedio = calcularPromedio(calificacion1, calificacion2);
    
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    
    return 0;
}