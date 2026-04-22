// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void generarMatriz(vector<vector<int>>& mat, int n, int a, int b) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = a + rand() % (b - a + 1);
        }
    }
}

int sumaUltimaColumna(const vector<vector<int>>& mat, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += mat[i][n - 1];
    }
    return suma;
}

long long productoUltimaFila(const vector<vector<int>>& mat, int n) {
    long long prod = 1;
    for (int j = 0; j < n; j++) {
        prod *= mat[n - 1][j];
    }
    return prod;
}

void obtenerMayor(const vector<vector<int>>& mat, int n) {
    int mayor = mat[0][0];
    int fila = 0, col = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > mayor) {
                mayor = mat[i][j];
                fila = i;
                col = j;
            }
        }
    }
    cout << "Mayor valor: " << mayor << " en posicion [" << fila << "][" << col << "]" << endl;
}

double calcularDesviacion(const vector<vector<int>>& mat, int n) {
    double suma = 0, promedio, varianza = 0;
    int totalElementos = n * n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            suma += mat[i][j];
    
    promedio = suma / totalElementos;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            varianza += pow(mat[i][j] - promedio, 2);
            
    return sqrt(varianza / totalElementos);
}

int main() {
    srand(time(NULL));
    int n, a, b;
    cout << "Orden N, rango A y B: ";
    cin >> n >> a >> b;

    vector<vector<int>> matriz(n, vector<int>(n));
    generarMatriz(matriz, n, a, b);

    cout << "Suma ultima columna: " << sumaUltimaColumna(matriz, n) << endl;
    cout << "Producto ultima fila: " << productoUltimaFila(matriz, n) << endl;
    obtenerMayor(matriz, n);
    cout << "Desviacion estandar: " << calcularDesviacion(matriz, n) << endl;

    return 0;
}