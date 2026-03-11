// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026
#include <iostream>

using namespace std;

// Constante global para Pi
const double PI = 3.141592653589793;

// Función que calcula el volumen
double calcularVolumenCilindro(double radio, double altura) {
    return PI * radio * radio * altura;
}

int main() {
    double radio, altura;
    
    cout << "--- VOLUMEN DE UN CILINDRO ---" << endl;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    
    double volumen = calcularVolumenCilindro(radio, altura);
    cout << "El volumen del cilindro es: " << volumen << endl;
    
    return 0;
}