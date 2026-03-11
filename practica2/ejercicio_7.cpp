// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica


#include <iostream>

using namespace std;

int main() {
    int num;
    int sumaDivisores = 0;

    cout << "Ingrese un numero para verificar si es perfecto: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }

    if (sumaDivisores == num && num != 0) {
        cout << "El numero " << num << " ES PERFECTO." << endl;
    } else {
        cout << "El numero " << num << " NO ES PERFECTO." << endl;
    }

    return 0;
}