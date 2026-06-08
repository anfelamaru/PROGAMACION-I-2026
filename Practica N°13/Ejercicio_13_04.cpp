// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet : 9986015
// Fecha creación: 22/05/2026
// Número de ejercicio: 4

#include <iostream>
#include <string>

using namespace std;

// Estructura Empleado UCB
struct EmpleadoUCB {
    string nombre;
    string genero;
    double salario;
};

// Función para leer los datos de los N trabajadores
void registrarEmpleados(EmpleadoUCB emp[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nTrabajador " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, emp[i].nombre);
        cout << "Genero: ";
        getline(cin, emp[i].genero);
        cout << "Salario: ";
        cin >> emp[i].salario;
        cin.ignore();
    }
}

// Función para calcular e imprimir extremos de salario
void mostrarExtremosSalarios(const EmpleadoUCB emp[], int n) {
    if (n <= 0) return;

    int indiceMayor = 0, indiceMenor = 0;

    for (int i = 1; i < n; i++) {
        if (emp[i].salario > emp[indiceMayor].salario) {
            indiceMayor = i;
        }
        if (emp[i].salario < emp[indiceMenor].salario) {
            indiceMenor = i;
        }
    }

    cout << "\n=========================================" << endl;
    cout << "   EMPLEADO CON MAYOR SALARIO" << endl;
    cout << "Nombre: " << emp[indiceMayor].nombre << endl;
    cout << "Genero: " << emp[indiceMayor].genero << endl;
    cout << "Salario: " << emp[indiceMayor].salario << endl;
    cout << "=========================================" << endl;
    cout << "   EMPLEADO CON MENOR SALARIO" << endl;
    cout << "Nombre: " << emp[indiceMenor].nombre << endl;
    cout << "Genero: " << emp[indiceMenor].genero << endl;
    cout << "Salario: " << emp[indiceMenor].salario << endl;
    cout << "=========================================" << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de trabajadores: ";
    cin >> n;
    cin.ignore();

    EmpleadoUCB emp[n];
    registrarEmpleados(emp, n);
    mostrarExtremosSalarios(emp, n);

    return 0;
}