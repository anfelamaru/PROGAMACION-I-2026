// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para guardar una lista de nombres en el archivo
void guardarNombres(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para escritura." << endl;
        return;
    }

    int cantidad;
    cout << "¿Cuántos nombres deseas ingresar?: ";
    cin >> cantidad;
    cin.ignore(); // Limpiar el buffer de entrada

    for (int i = 0; i < cantidad; i++) {
        string nombre;
        cout << "Ingresa el nombre " << i + 1 << ": ";
        getline(cin, nombre);
        archivo << nombre << endl;
    }
    archivo.close();
    cout << "Nombres guardados exitosamente." << endl;
}

// Función para leer y mostrar los nombres del archivo
void leerNombres(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para lectura." << endl;
        return;
    }

    string nombre;
    cout << "\n--- Lista de Nombres en el Archivo ---" << endl;
    while (getline(archivo, nombre)) {
        cout << nombre << endl;
    }
    archivo.close();
}

int main() {
    string archivo = "nombres.txt";
    guardarNombres(archivo);
    leerNombres(archivo);
    return 0;
}