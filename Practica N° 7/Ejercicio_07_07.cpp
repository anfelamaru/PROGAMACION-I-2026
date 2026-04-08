// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 7
#include <iostream>
#include <vector>

using namespace std;

// Prototipos
void llenarVector(vector<int> &v);
void mostrarVector(vector<int> v);

int main() {
    // Declaramos el vector (inicialmente vacío)
    vector<int> datos;

    cout << "--- Registro de Numeros ---" << endl;
    cout << "Ingrese hasta 10 numeros positivos (un negativo para terminar):" << endl;

    // 1. Llamada a la función de llenado
    llenarVector(datos);

    // 2. Mostrar solo lo que se introdujo
    cout << "\nLos elementos guardados son:" << endl;
    mostrarVector(datos);

    return 0;
}

// Función para rellenar el vector con lógica de parada
void llenarVector(vector<int> &v) {
    int numero;
    
    // El ciclo corre mientras el tamaño sea menor a 10
    for (int i = 0; i < 10; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numero;

        // Si el número es negativo, rompemos el ciclo inmediatamente
        if (numero < 0) {
            cout << "-> Numero negativo detectado. Finalizando entrada..." << endl;
            break; 
        }

        // Si es positivo, lo agregamos al vector
        v.push_back(numero);
    }
}

// Función para mostrar solo los elementos introducidos
void mostrarVector(vector<int> v) {
    if (v.empty()) {
        cout << "[ El vector esta vacio ]" << endl;
    } else {
        cout << "[ ";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << (i == v.size() - 1 ? "" : ", ");
        }
        cout << " ]" << endl;
        cout << "Total de elementos: " << v.size() << endl;
    }
}