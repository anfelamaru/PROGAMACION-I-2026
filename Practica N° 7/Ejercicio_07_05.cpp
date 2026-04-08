// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 5
#include <iostream>
#include <vector>

using namespace std;

// Prototipos
vector<int> leerVector(int n, string nombre);
vector<int> combinarVectores(vector<int> v1, vector<int> v2);
void mostrarVector(vector<int> v);

int main() {
    int n;

    cout << "Ingrese la dimension de los vectores (N): ";
    cin >> n;

    // 1. Leer los dos vectores
    vector<int> vectorA = leerVector(n, "A");
    vector<int> vectorB = leerVector(n, "B");

    // 2. Combinar los vectores en uno nuevo
    vector<int> vectorCombinado = combinarVectores(vectorA, vectorB);

    // 3. Mostrar resultados
    cout << "\nVector A: "; mostrarVector(vectorA);
    cout << "Vector B: "; mostrarVector(vectorB);
    
    cout << "\nEl vector combinado (dimension " << vectorCombinado.size() << ") es:" << endl;
    mostrarVector(vectorCombinado);

    return 0;
}

// Función para llenar un vector
vector<int> leerVector(int n, string nombre) {
    vector<int> v;
    int valor;
    cout << "\nIngresando datos para el Vector " << nombre << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> valor;
        v.push_back(valor);
    }
    return v;
}

// Función para combinar v1 y v2
vector<int> combinarVectores(vector<int> v1, vector<int> v2) {
    vector<int> resultado;

    // Primero agregamos todos los elementos del primer vector
    for (int i = 0; i < v1.size(); i++) {
        resultado.push_back(v1[i]);
    }

    // Luego agregamos todos los del segundo vector
    for (int i = 0; i < v2.size(); i++) {
        resultado.push_back(v2[i]);
    }

    return resultado;
}

// Función para imprimir el vector
void mostrarVector(vector<int> v) {
    cout << "[ ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << " ]" << endl;
}