// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void generarSecuencia(vector<vector<int>>& mat, int n) {
    for (int i = 0; i < n; i++) {
        int valor = 1 + (i * 2);
        for (int j = 0; j < n; j++) {
            mat[i][j] = valor++;
        }
    }
}

void imprimirMatriz(const vector<vector<int>>& mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    vector<vector<int>> matriz(n, vector<int>(n));
    generarSecuencia(matriz, n);
    imprimirMatriz(matriz, n);
    return 0;
}