// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función para calcular la distancia en MRU
double calcularDistancia(double velocidad, double tiempo) {
    // La fórmula es distancia = velocidad * tiempo
    return velocidad * tiempo;
}

int main() {
    double velocidad, tiempo;
    
    cout << "--- CALCULO DE DISTANCIA (MRU) ---" << endl;
    cout << "Ingrese la velocidad constante (ej. m/s): ";
    cin >> velocidad;
    cout << "Ingrese el tiempo transcurrido (ej. s): ";
    cin >> tiempo;
    
    // Validamos que el tiempo no sea negativo
    if (tiempo >= 0) {
        double distancia = calcularDistancia(velocidad, tiempo);
        cout << "La distancia recorrida es: " << distancia << endl;
    } else {
        cout << "El tiempo no puede ser negativo." << endl;
    }
    
    return 0;
}