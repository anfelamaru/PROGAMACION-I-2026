// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
//Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para buscar una subcadena exacta dentro de cada palabra del archivo
int buscarPalabra(const string& nombreArchivo, const string& objetivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo 'datos.txt'." << endl;
        return -1;
    }

    string palabra;
    int contador = 0;
    while (archivo >> palabra) {
        // Remueve signos de puntuación básicos si están pegados a la palabra para mayor precisión
        if (!palabra.empty() && (palabra.back() == '.' || palabra.back() == ',' || palabra.back() == '!')) {
            palabra.pop_back();
        }
        if (palabra == objetivo) {
            contador++;
        }
    }
    archivo.close();
    return contador;
}

int main() {
    string archivo = "datos.txt";
    string objetivo;

    cout << "Ingresa la palabra exacta que deseas buscar: ";
    cin >> objetivo;

    int ocurrencias = buscarPalabra(archivo, objetivo);
    if (ocurrencias != -1) {
        cout << "La palabra '" << objetivo << "' aparece " << ocurrencias << " veces en el archivo." << endl;
    }
    return 0;
}