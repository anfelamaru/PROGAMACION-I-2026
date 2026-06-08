// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 13/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para actualizar el precio reescribiendo los datos a través de un archivo temporal
void actualizarPrecio(const string& nombreArchivo) {
    ifstream archivoLectura(nombreArchivo);
    if (!archivoLectura.is_open()) {
        cout << "El archivo '" << nombreArchivo << "' no existe. Crea uno primero." << endl;
        return;
    }

    string productoBuscar;
    double nuevoPrecio;
    cout << "Ingresa el nombre del producto a actualizar: ";
    cin >> productoBuscar;
    cout << "Ingresa el nuevo precio: ";
    cin >> nuevoPrecio;

    ofstream archivoTemporal("temporal.txt");
    string producto;
    double precio;
    bool encontrado = false;

    // Leer par por par del archivo original
    while (archivoLectura >> producto >> precio) {
        if (producto == productoBuscar) {
            precio = nuevoPrecio;
            encontrado = true;
        }
        archivoTemporal << producto << " " << precio << endl;
    }

    archivoLectura.close();
    archivoTemporal.close();

    // Reemplazar el archivo original con el temporal modificado
    remove(nombreArchivo.c_str());
    rename("temporal.txt", nombreArchivo.c_str());

    if (encontrado) {
        cout << "Precio actualizado con éxito." << endl;
    } else {
        cout << "El producto no se encuentra o no existe." << endl;
    }
}

int main() {
    string archivo = "productos.txt";
    actualizarPrecio(archivo);
    return 0;
}