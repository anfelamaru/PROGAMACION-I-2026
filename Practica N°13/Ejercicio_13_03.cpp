// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 22/05/2026
// Número de ejercicio: 3

#include <iostream>
#include <string>

using namespace std;

// Estructura Estudiante de Programación I
struct Alumno {
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

// Función para registrar los datos de los n alumnos
void registrarAlumnos(Alumno alumnos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nAlumno " << i + 1 << ":" << endl;
        cout << "Cedula: ";
        cin >> alumnos[i].cedula;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, alumnos[i].nombre);
        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cin.ignore();
        cout << "Profesion: ";
        getline(cin, alumnos[i].profesion);
        cout << "Lugar de Nacimiento: ";
        getline(cin, alumnos[i].lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, alumnos[i].direccion);
        cout << "Telefono: ";
        cin >> alumnos[i].telefono;
        cin.ignore();
    }
}

// Función para mostrar por pantalla los datos de todos los alumnos
void mostrarAlumnos(const Alumno alumnos[], int n) {
    cout << "\n--- Lista de Alumnos Registrados ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\n[Alumno " << i + 1 << "]" << endl;
        cout << "CI: " << alumnos[i].cedula << endl;
        cout << "Nombre completo: " << alumnos[i].nombre << " " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar Nacimiento: " << alumnos[i].lugar_nacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
}

int main() {
    int n;
    cout << "Cantidad de alumnos a registrar: ";
    cin >> n;
    cin.ignore();

    Alumno alumnos[n];
    registrarAlumnos(alumnos, n);
    mostrarAlumnos(alumnos, n);

    return 0;
}