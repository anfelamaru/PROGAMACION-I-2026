// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 7

#include <iostream>
using namespace std;

// Acumula la nueva nota e incrementa el contador
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main() {
    double suma = 0.0;
    int cantidad = 0;
    int N;
    
    cout << "¿Cuantas notas deseas ingresar?: ";
    cin >> N;
    
    // Se llama a la funcion N veces
    for(int i = 0; i < N; i++) {
        double notaActual;
        cout << "Ingresa la nota " << (i + 1) << ": ";
        cin >> notaActual;
        agregarNota(suma, cantidad, notaActual);
    }
    
    if(cantidad > 0) {
        cout << "---------------------------------" << endl;
        cout << "Suma total de notas: " << suma << endl;
        cout << "Cantidad de notas ingresadas: " << cantidad << endl;
        cout << "Promedio: " << (suma / cantidad) << endl;
    } else {
        cout << "No se ingresaron notas." << endl;
    }
    
    return 0;
}