// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Función para parsear cada línea, calcular promedios individuales y volcarlos al archivo de salida
void calcularPromediosEstudiantes(const string& entrada, const string& salida) {
    ifstream archivoIn(entrada);
    ofstream archivoOut(salida);

    if (!archivoIn.is_open()) {
        cout << "Error al abrir '" << entrada << "'." << endl;
        return;
    }

    string linea;
    while (getline(archivoIn, linea)) {
        if (linea.empty()) continue;

        stringstream ss(linea);
        string nombre;
        ss >> nombre; // El primer elemento siempre es el nombre del alumno

        double nota;
        double suma = 0;
        int contadorNotas = 0;

        while (ss >> nota) {
            suma += nota;
            contadorNotas++;
        }

        double promedio = (contadorNotas > 0) ? (suma / contadorNotas) : 0.0;
        archivoOut << nombre << " " << promedio << endl;
    }

    archivoIn.close();
    archivoOut.close();
    cout << "Archivo '" << salida << "' procesado y guardado de manera exitosa." << endl;
}

int main() {
    string entrada = "calificaciones.txt";
    string salida = "promedios.txt";
    calcularPromediosEstudiantes(entrada, salida);
    return 0;
}