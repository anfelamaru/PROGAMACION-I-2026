// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Función que realiza la conversión por referencia
void convertirDivisas(double cantidadBs, double tcOficial, double tcParalelo, double &dolOficial, double &dolParalelo) {
    dolOficial = cantidadBs / tcOficial;
    dolParalelo = cantidadBs / tcParalelo;
}

int main() {
    double bolivianos, tcOficial, tcParalelo;
    double dolaresOficial = 0, dolaresParalelo = 0;
    
    cout << "--- CONVERSION DE DIVISAS ---" << endl;
    cout << "Monto en Bolivianos: ";
    cin >> bolivianos;
    cout << "Tipo de cambio Oficial: ";
    cin >> tcOficial;
    cout << "Tipo de cambio Paralelo: ";
    cin >> tcParalelo;
    
    // Llamada a la función
    convertirDivisas(bolivianos, tcOficial, tcParalelo, dolaresOficial, dolaresParalelo);
    
    cout << "\nEquivalente a TC Oficial ($us): " << dolaresOficial << endl;
    cout << "Equivalente a TC Paralelo ($us): " << dolaresParalelo << endl;
    
    return 0;
}