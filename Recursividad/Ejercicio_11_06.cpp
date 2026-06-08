// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Fecha creación: 04/05/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;

// Función recursiva para verificar si dos vectores son iguales
bool sonVectoresIguales(int vec1[], int vec2[], int tamano, int indice = 0) {
    if (indice == tamano) {
        return true; // Caso base: se revisaron todos los elementos con éxito
    }
    if (vec1[indice] != vec2[indice]) {
        return false; // Si un elemento es diferente, ya no son iguales
    }
    return sonVectoresIguales(vec1, vec2, tamano, indice + 1); // Caso recursivo
}

int main() {
    int t1, t2;
    cout << "Tamaño del primer vector: ";
    cin >> t1;
    cout << "Tamaño del segundo vector: ";
    cin >> t2;

    if (t1 != t2) {
        cout << "Los vectores no son iguales (tienen tamaños diferentes)." << endl;
        return 0;
    }

    int v1[t1], v2[t2];
    cout << "--- Datos Primer Vector ---" << endl;
    for (int i = 0; i < t1; i++) {
        cout << "v1[" << i << "]: ";
        cin >> v1[i];
    }

    cout << "--- Datos Segundo Vector ---" << endl;
    for (int i = 0; i < t2; i++) {
        cout << "v2[" << i << "]: ";
        cin >> v2[i];
    }

    if (sonVectoresIguales(v1, v2, t1)) {
        cout << "Los vectores son estrictamente iguales." << endl;
    } else {
        cout << "Los vectores NO son iguales." << endl;
    }

    return 0;
}