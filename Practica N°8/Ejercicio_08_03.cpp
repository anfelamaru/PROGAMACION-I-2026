// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void calcularEstadisticas(const vector<int>& notas) {
    int r = 0, reg = 0, b = 0, e = 0;
    int n = notas.size();

    for (int nota : notas) {
        if (nota <= 59) r++;
        else if (nota <= 79) reg++;
        else if (nota <= 89) b++;
        else e++;
    }

    cout << "Reprobados: " << (r * 100) / n << "%" << endl;
    cout << "Regulares: " << (reg * 100) / n << "%" << endl;
    cout << "Buenos: " << (b * 100) / n << "%" << endl;
    cout << "Excelentes: " << (e * 100) / n << "%" << endl;
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Cantidad de estudiantes: ";
    cin >> n;

    vector<int> calificaciones(n);
    cout << "Calificaciones: ";
    for (int i = 0; i < n; i++) {
        calificaciones[i] = rand() % 101;
        cout << calificaciones[i] << " ";
    }
    cout << "\n\n";

    calcularEstadisticas(calificaciones);

    return 0;
}