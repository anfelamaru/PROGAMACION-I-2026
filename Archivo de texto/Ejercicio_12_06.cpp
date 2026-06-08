// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
//Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para filtrar registros basándose en un límite térmico dado
void filtrarTemperaturas(const string& entrada, const string& salida, double limite) {
    ifstream archivoIn(entrada);
    ofstream archivoOut(salida);

    if (!archivoIn.is_open()) {
        cout << "Error al abrir el archivo de entrada '" << entrada << "'." << endl;
        return;
    }

    string ciudad;
    double temp;
    cout << "\n--- Ciudades filtradas superiores a " << limite << "°C ---" << endl;

    while (archivoIn >> ciudad >> temp) {
        if (temp > limite) {
            archivoOut << ciudad << " " << temp << endl;
            cout << ciudad << " " << temp << endl;
        }
    }

    archivoIn.close();
    archivoOut.close();
    cout << "\nArchivo '" << salida << "' generado exitosamente." << endl;
}

int main() {
    string entrada = "temperaturas.txt";
    string salida = "altas_temperaturas.txt";
    double N;

    cout << "Ingresa el valor limite de temperatura (N°C): ";
    cin >> N;

    filtrarTemperaturas(entrada, salida, N);
    return 0;
}