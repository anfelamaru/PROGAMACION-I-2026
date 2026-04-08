// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 1

/*1. Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
c. Una lista de 30 caracteres alfanuméricos.
d. Una lista de 100 años en número entero (entre 1990 y 2025)
e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip> // Para limitar los decimales en el cout

using namespace std;

// Prototipos
int GenerarAleatorioInt(int LimInferior, int LimSuperior);
double GenerarAleatorioDouble(double LimInferior, double LimSuperior);
char GenerarAleatorioChar();

// Funciones para crear las listas
void crearListaInt(int cuantos, int LimInferior, int LimSuperior) {
    vector<int> Lista;
    for (int i = 0; i < cuantos; i++) {
        Lista.push_back(GenerarAleatorioInt(LimInferior, LimSuperior));
        cout << Lista[i] << (i == cuantos - 1 ? "" : ", ");
    }
    cout << endl << "-------------------" << endl;
}

void crearListaDouble(int cuantos, double LimInferior, double LimSuperior) {
    vector<double> Lista;
    cout << fixed << setprecision(2); // Para mostrar 2 decimales
    for (int i = 0; i < cuantos; i++) {
        Lista.push_back(GenerarAleatorioDouble(LimInferior, LimSuperior));
        cout << Lista[i] << "V" << (i == cuantos - 1 ? "" : ", ");
    }
    cout << endl << "-------------------" << endl;
}

void crearListaChar(int cuantos) {
    vector<char> Lista;
    for (int i = 0; i < cuantos; i++) {
        Lista.push_back(GenerarAleatorioChar());
        cout << Lista[i] << (i == cuantos - 1 ? "" : ", ");
    }
    cout << endl << "-------------------" << endl;
}

int main() {
    srand(time(NULL));
    char opcion;

    while (true) {
        cout << "\n--- MENU DE LISTAS ---" << endl;
        cout << "a. 100 Voltajes (20.00 - 220.00)" << endl;
        cout << "b. 50 Temperaturas (0.00 - 100.00)" << endl;
        cout << "c. 30 Caracteres Alfanumericos" << endl;
        cout << "d. 100 Anios (1990 - 2025)" << endl;
        cout << "e. 32 Velocidades (10.00 - 300.00)" << endl;
        cout << "f. 1000 Distancias (1.00 - 1000.00)" << endl;
        cout << "s. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 's') break;

        switch (opcion) {
            case 'a': crearListaDouble(100, 20.0, 220.0); break;
            case 'b': crearListaDouble(50, 0.0, 100.0); break;
            case 'c': crearListaChar(30); break;
            case 'd': crearListaInt(100, 1990, 2025); break;
            case 'e': crearListaDouble(32, 10.0, 300.0); break;
            case 'f': crearListaDouble(1000, 1.0, 1000.0); break;
            default: cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}

// Implementación de generadores
int GenerarAleatorioInt(int LimInferior, int LimSuperior) {
    return (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
}

double GenerarAleatorioDouble(double LimInferior, double LimSuperior) {
    // Genera un decimal entre 0 y 1 y lo escala al rango deseado
    double escala = (double)rand() / RAND_MAX; 
    return LimInferior + escala * (LimSuperior - LimInferior);
}

char GenerarAleatorioChar() {
    // Escoge entre números (48-57), Mayúsculas (65-90) o Minúsculas (97-122) en ASCII
    int tipo = rand() % 3;
    if (tipo == 0) return GenerarAleatorioInt(48, 57);  // Números
    if (tipo == 1) return GenerarAleatorioInt(65, 90);  // Mayúsculas
    return GenerarAleatorioInt(97, 122);               // Minúsculas
}

