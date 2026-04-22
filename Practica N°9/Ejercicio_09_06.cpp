// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

void transponer(const vector<vector<int>>& A, vector<vector<int>>& T, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            T[j][i] = A[i][j];
        }
    }
}

void mostrar(const vector<vector<int>>& mat) {
    for (const auto& fila : mat) {
        for (int val : fila) cout << val << " ";
        cout << endl;
    }
}

int main() {
    int n = 3, m = 2;
    vector<vector<int>> A = {{1, 0}, {2, 4}, {3, 5}};
    vector<vector<int>> T(m, vector<int>(n));

    transponer(A, T, n, m);
    cout << "Matriz Transpuesta:" << endl;
    mostrar(T);

    return 0;
}