// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>

using namespace std;

void leerMatriz(vector<vector<int>>& mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void intercambiarFilas(vector<vector<int>>& mat, int n) {
    for (int j = 0; j < n; j++) {
        int temp = mat[0][j];
        mat[0][j] = mat[n - 1][j];
        mat[n - 1][j] = temp;
    }
}

void mostrarMatriz(const vector<vector<int>>& mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el orden de la matriz (n): ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    leerMatriz(matriz, n);
    cout << "\nMatriz original:\n";
    mostrarMatriz(matriz, n);

    intercambiarFilas(matriz, n);

    cout << "\nMatriz modificada (Fila 1 x Fila n):\n";
    mostrarMatriz(matriz, n);

    return 0;
}