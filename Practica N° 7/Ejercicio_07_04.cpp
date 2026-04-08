// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 4
#include <iostream>
#include <vector>

using namespace std;

// Prototipos
vector<double> leerVector(int n, string nombre);
vector<double> multiplicarVectores(vector<double> v1, vector<double> v2);
void mostrarVector(vector<double> v);

int main() {
    int n;

    cout << "Ingrese la dimension de los vectores (N): ";
    cin >> n;

    // 1. Leer los dos vectores
    vector<double> vectorA = leerVector(n, "A");
    vector<double> vectorB = leerVector(n, "B");

    // 2. Calcular la multiplicacion
    vector<double> resultado = multiplicarVectores(vectorA, vectorB);

    // 3. Mostrar el resultado
    cout << "\nEl vector resultante de la multiplicacion es:" << endl;
    mostrarVector(resultado);

    return 0;
}

// Función para llenar un vector desde teclado
vector<double> leerVector(int n, string nombre) {
    vector<double> v;
    double valor;
    cout << "\nLlenando Vector " << nombre << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> valor;
        v.push_back(valor);
    }
    return v;
}

// Función que multiplica elemento por elemento y retorna un nuevo vector
vector<double> multiplicarVectores(vector<double> v1, vector<double> v2) {
    vector<double> res;
    for (int i = 0; i < v1.size(); i++) {
        res.push_back(v1[i] * v2[i]);
    }
    return res;
}

// Función para imprimir el vector en pantalla
void mostrarVector(vector<double> v) {
    cout << "[ ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << " ]" << endl;
}