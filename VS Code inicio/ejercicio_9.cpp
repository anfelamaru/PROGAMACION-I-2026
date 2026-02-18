// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015 LP.

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 02/18/2026
//EJERCICIO 9
#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Introduce un número entero (entre 1 y 3999): ";
    cin >> numero;

    
    if (numero <= 0 || numero > 3999) {
        cout << "El número debe ser mayor a 0 y menor a 4000." << endl;
        return 1; 
    }

    cout << "El número en romano es: ";

    while (numero >= 1000) {
        cout << "M";
        numero -= 1000;
    }

    if (numero >= 900) {
        cout << "CM";
        numero -= 900;
    }

    if (numero >= 500) {
        cout << "D";
        numero -= 500;
    }
    
    if (numero >= 400) {
        cout << "CD";
        numero -= 400;
    }
    
    while (numero >= 100) {
        cout << "C";
        numero -= 100;
    }

    if (numero >= 90) {
        cout << "XC";
        numero -= 90;
    }
    
    if (numero >= 50) {
        cout << "L";
        numero -= 50;
    }

    if (numero >= 40) {
        cout << "XL";
        numero -= 40;
    }
    
    while (numero >= 10) {
        cout << "X";
        numero -= 10;
    }

    if (numero >= 9) {
        cout << "IX";
        numero -= 9;
    }
    
    if (numero >= 5) {
        cout << "V";
        numero -= 5;
    }
    if (numero >= 4) {
        cout << "IV";
        numero -= 4;
    }
    while (numero >= 1) {
        cout << "I";
        numero -= 1;
    }
    cout << endl;
    return 0;
}