// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

// Función para leer los datos de una matriz
void leerMatriz(vector<vector<int>>& mat, int filas, int columnas, char nombre) {
    cout << "Lectura de matriz " << nombre << " (" << filas << "x" << columnas << "):" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << nombre << "[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

// Función para multiplicar matrices: (NxM) * (MxN) = (NxN)
void multiplicarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& R, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            R[i][j] = 0; // Inicializar la posición
            for (int k = 0; k < m; k++) {
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Función para mostrar la matriz resultante
void mostrarMatriz(const vector<vector<int>>& mat, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    
    cout << "Ingrese el valor de N: ";
    cin >> n;
    cout << "Ingrese el valor de M: ";
    cin >> m;

    // Declaración de matrices usando vectores (C++17)
    vector<vector<int>> matrizA(n, vector<int>(m));
    vector<vector<int>> matrizB(m, vector<int>(n));
    vector<vector<int>> matrizResultado(n, vector<int>(n));

    // Llamada a funciones
    leerMatriz(matrizA, n, m, 'A');
    cout << endl;
    leerMatriz(matrizB, m, n, 'B');

    multiplicarMatrices(matrizA, matrizB, matrizResultado, n, m);

    cout << "\n--- Resultado de la multiplicacion (NxN) ---" << endl;
    mostrarMatriz(matrizResultado, n, n);

    return 0;
}