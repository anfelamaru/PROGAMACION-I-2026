// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet : 9986015
// Fecha creación: 22/05/2026
// Número de ejercicio: 2

#include <iostream>
#include <string>

using namespace std;

// Estructura Atleta
struct Atleta {
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo; // en segundos
};

// Función para registrar los N atletas
void registrarAtletas(Atleta atletas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nAtleta " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, atletas[i].nombre);
        cout << "Pais: ";
        getline(cin, atletas[i].pais);
        cout << "Edad: ";
        cin >> atletas[i].edad;
        cout << "Mejor tiempo (en segundos): ";
        cin >> atletas[i].mejor_tiempo;
        cin.ignore();
    }
}

// Función para buscar y mostrar al atleta con el mejor tiempo (menor cantidad de segundos)
void mostrarMejorAtleta(const Atleta atletas[], int n) {
    if (n <= 0) return;
    
    int indiceMejor = 0;
    for (int i = 1; i < n; i++) {
        if (atletas[i].mejor_tiempo < atletas[indiceMejor].mejor_tiempo) {
            indiceMejor = i;
        }
    }
    
    cout << "\n--- Atleta con el Mejor Tiempo ---" << endl;
    cout << "Nombre: " << atletas[indiceMejor].nombre << endl;
    cout << "Pais: " << atletas[indiceMejor].pais << endl;
    cout << "Tiempo: " << atletas[indiceMejor].mejor_tiempo << " segundos." << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore();

    Atleta atletas[n];
    registrarAtletas(atletas, n);
    mostrarMejorAtleta(atletas, n);

    return 0;
}