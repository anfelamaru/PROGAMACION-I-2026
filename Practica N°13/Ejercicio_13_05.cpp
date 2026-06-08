// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 22/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

// Estructura Pelicula
struct Pelicula {
    string titulo;
    string director;
    int duracion; // en minutos
    int anio_estreno;
    string genero;
};

// Función para registrar las N películas
void registrarPeliculas(Pelicula pelis[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nPelicula " << i + 1 << ":" << endl;
        cout << "Titulo: ";
        getline(cin, pelis[i].titulo);
        cout << "Director: ";
        getline(cin, pelis[i].director);
        cout << "Duracion (minutos): ";
        cin >> pelis[i].duracion;
        cout << "Anio de estreno: ";
        cin >> pelis[i].anio_estreno;
        cin.ignore();
        cout << "Genero: ";
        getline(cin, pelis[i].genero);
    }
}

// Función para filtrar películas por género
void buscarPorGenero(const Pelicula pelis[], int n, const string &genBuscado) {
    cout << "\n--- Peliculas de Genero: " << genBuscado << " ---" << endl;
    bool bandera = false;
    for (int i = 0; i < n; i++) {
        if (pelis[i].genero == genBuscado) {
            cout << "- " << pelis[i].titulo << " (" << pelis[i].anio_estreno << ") Dir: " << pelis[i].director << endl;
            bandera = true;
        }
    }
    if (!bandera) cout << "No se encontraron peliculas de este genero." << endl;
}

// Función para filtrar películas por director
void buscarPorDirector(const Pelicula pelis[], int n, const string &dirBuscado) {
    cout << "\n--- Peliculas Dirigidas por: " << dirBuscado << " ---" << endl;
    bool bandera = false;
    for (int i = 0; i < n; i++) {
        if (pelis[i].director == dirBuscado) {
            cout << "- " << pelis[i].titulo << " [" << pelis[i].genero << "]" << endl;
            bandera = true;
        }
    }
    if (!bandera) cout << "No se encontraron peliculas de este director." << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de peliculas a registrar: ";
    cin >> n;
    cin.ignore();

    Pelicula pelis[n];
    registrarPeliculas(pelis, n);

    string gen, dir;
    cout << "\nIngrese el genero que desea buscar: ";
    getline(cin, gen);
    buscarPorGenero(pelis, n, gen);

    cout << "\nIngrese el director que desea buscar: ";
    getline(cin, dir);
    buscarPorDirector(pelis, n, dir);

    return 0;
}