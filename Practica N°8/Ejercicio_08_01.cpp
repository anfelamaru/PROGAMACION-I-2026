// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarAleatorios(const vector<string>& nom, const vector<string>& ape, const vector<int>& ed, int n) {
    for (int i = 0; i < n; i++) {
        int r1 = rand() % 10;
        int r2 = rand() % 10;
        int r3 = rand() % 10;
        cout << i + 1 << ".- " << nom[r1] << " " << ape[r2] << " tiene " << ed[r3] << " años." << endl;
    }
}

int main() {
    srand(time(NULL));
    vector<string> nombres = {"Juan", "Maria", "Pedro", "Ana", "Luis", "Carla", "Jose", "Elena", "Diego", "Paula"};
    vector<string> apellidos = {"Perez", "Gomez", "Lopez", "Mamani", "Rojas", "Flores", "Sosa", "Vargas", "Ruiz", "Silva"};
    vector<int> edades = {18, 20, 25, 30, 22, 19, 40, 35, 28, 31};

    int n;
    cout << "Cuantas veces desea realizar la seleccion?: ";
    cin >> n;

    mostrarAleatorios(nombres, apellidos, edades, n);

    return 0;
}