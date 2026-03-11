// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero del 1 al 10: ";
    cin >> num;

    if (num >= 1 && num <= 10) {
        cout << "\n--- TABLA DEL " << num << " ---" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << (num * i) << endl;
        }
    } else {
        cout << "El numero debe estar entre 1 y 10." << endl;
    }

    return 0;
}