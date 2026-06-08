// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
//Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para registrar múltiples estudiantes
void registrarEstudiantes(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::app); // Abre en modo append para añadir registros
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para registrar." << endl;
        return;
    }

    int n;
    cout << "¿Cuántos estudiantes deseas registrar?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string nombre;
        int edad;
        double promedio;

        cin.ignore();
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;

        archivo << "Nombre: " << nombre << endl;
        archivo << "Edad: " << edad << endl;
        archivo << "Promedio: " << promedio << endl;
    }
    archivo.close();
    cout << "\nRegistros guardados correctamente." << endl;
}

// Función para leer y estructurar visualmente el archivo
void mostrarEstudiantes(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo de lectura." << endl;
        return;
    }

    string linea;
    cout << "\n--- Registros de Estudiantes Almacenados ---" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    string archivo = "estudiantes.txt";
    registrarEstudiantes(archivo);
    mostrarEstudiantes(archivo);
    return 0;
}