// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 6
#include <iostream>
#include <vector>

using namespace std;

// Prototipos de funciones
void pedirDatos(vector<int> &v, string nombre);
vector<int> sumarVectores(vector<int> v1, vector<int> v2);
void mostrarVector(vector<int> v, string nombre);

int main() {
    // Declaración de los tres vectores con tamaño inicial de 5
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    // 1. Pedir valores para vector1 y vector2
    pedirDatos(vector1, "vector1");
    pedirDatos(vector2, "vector2");

    // 2. Calcular vector3 = vector1 + vector2
    vector3 = sumarVectores(vector1, vector2);

    // 3. Mostrar los resultados
    cout << "\n--- RESULTADOS ---" << endl;
    mostrarVector(vector1, "Vector 1");
    mostrarVector(vector2, "Vector 2");
    mostrarVector(vector3, "Vector 3 (Suma)");

    return 0;
}

// Función para pedir datos al usuario
// Usamos '&' (referencia) para modificar el vector original
void pedirDatos(vector<int> &v, string nombre) {
    int valor;
    cout << "Ingrese 5 valores para " << nombre << ":" << endl;
    for (int i = 0; i < 5; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> valor;
        v.push_back(valor);
    }
    cout << endl;
}

// Función que realiza la suma y retorna el nuevo vector
vector<int> sumarVectores(vector<int> v1, vector<int> v2) {
    vector<int> resultado;
    for (int i = 0; i < 5; i++) {
        resultado.push_back(v1[i] + v2[i]);
    }
    return resultado;
}

// Función para mostrar el vector
void mostrarVector(vector<int> v, string nombre) {
    cout << nombre << ": [ ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << " ]" << endl;
}