// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <vector>
#include <iomanip> // Para alinear los decimales con setw()

using namespace std;

// Prototipo de la función
void mostrarVoltios(vector<double> v);

int main() {
    // 1. Inicialización del vector con los valores proporcionados
    // Usamos la lista de inicialización de C++11
    vector<double> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "--- Despliegue de Valores (Formato 3x3) ---" << endl;
    
    // 2. Llamada a la función para mostrar los datos
    mostrarVoltios(voltios);

    return 0;
}

// 3. Función para desplegar los valores en el formato solicitado
void mostrarVoltios(vector<double> v) {
    for (int i = 0; i < v.size(); i++) {
        // Mostramos el valor con un espacio
        cout << fixed << setprecision(2) << v[i] << " ";

        // Lógica para el salto de línea cada 3 elementos
        // (i + 1) porque el índice empieza en 0. Cuando es 3, 6 y 9, salta línea.
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
}