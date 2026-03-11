// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica


#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero (distinto al primero): ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Los numeros deben ser distintos." << endl;
        return 1;
    }

    cout << "Serie generada: ";
    if (num1 > num2) {
        // Serie descendente
        for (int i = num1; i >= num2; i--) {
            cout << i << " ";
        }
    } else {
        // Serie ascendente
        for (int i = num1; i <= num2; i++) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}