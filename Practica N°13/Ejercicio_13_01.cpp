// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 22/05/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>

using namespace std;

// Estructura Libro
struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

// Función para registrar los datos de un libro
void registrarLibro(Libro &l) {
    cout << "Ingrese el titulo del libro: ";
    getline(cin, l.titulo);
    cout << "Ingrese el autor: ";
    getline(cin, l.autor);
    cout << "Ingrese el anio de publicacion: ";
    cin >> l.anio_publicacion;
    
    char opc;
    cout << "¿Esta disponible? (s/n): ";
    cin >> opc;
    l.disponible = (opc == 's' || opc == 'S');
    cin.ignore(); // Limpiar buffer
}

// Función para mostrar los datos de un libro
void mostrarLibro(const Libro &l) {
    cout << "\n--- Datos del Libro ---" << endl;
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio de Publicacion: " << l.anio_publicacion << endl;
    cout << "Estado: " << (l.disponible ? "Disponible" : "No disponible") << endl;
}

int main() {
    Libro miLibro;
    registrarLibro(miLibro);
    mostrarLibro(miLibro);
    return 0;
}