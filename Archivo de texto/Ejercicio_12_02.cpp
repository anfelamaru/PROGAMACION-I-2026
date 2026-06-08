// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para contar palabras utilizando la lectura por flujos estándar (separa por espacios/saltos)
int contarPalabras(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo. Asegurate de que 'texto.txt' exista." << endl;
        return -1;
    }

    string palabra;
    int contador = 0;
    while (archivo >> palabra) {
        contador++;
    }
    archivo.close();
    return contador;
}

int main() {
    string archivo = "texto.txt";
    int totalPalabras = contarPalabras(archivo);

    if (totalPalabras != -1) {
        cout << "El archivo '" << archivo << "' contiene " << totalPalabras << " palabras." << endl;
    }
    return 0;
}