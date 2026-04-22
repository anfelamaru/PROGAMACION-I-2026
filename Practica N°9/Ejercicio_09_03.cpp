// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

const int FILAS = 3;
const int COLSM = 4;

void mostrarMatriz(char mat[FILAS][COLSM]) {
    cout << "a) Mostrar matriz" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLSM; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void mostrarLibres(char mat[FILAS][COLSM]) {
    int filasLibres = 0, colsLibres = 0;
    for (int i = 0; i < FILAS; i++) {
        bool tieneZombie = false;
        for (int j = 0; j < COLSM; j++) {
            if (mat[i][j] == 'X') tieneZombie = true;
        }
        if (!tieneZombie) filasLibres++;
    }
    for (int j = 0; j < COLSM; j++) {
        bool tieneZombie = false;
        for (int i = 0; i < FILAS; i++) {
            if (mat[i][j] == 'X') tieneZombie = true;
        }
        if (!tieneZombie) colsLibres++;
    }
    cout << "b) filas libres: " << filasLibres << "\n   columnas libres: " << colsLibres << endl;
}

void coordenadasZombies(char mat[FILAS][COLSM]) {
    vector<int> fZombies, cZombies;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLSM; j++) {
            if (mat[i][j] == 'X') {
                fZombies.push_back(i);
                cZombies.push_back(j);
            }
        }
    }
    cout << "c) Posiciones en la matriz:" << endl;
    for (size_t k = 0; k < fZombies.size(); k++) {
        cout << fZombies[k] << " -- " << cZombies[k] << endl;
    }
}

int contarZombies(char mat[FILAS][COLSM]) {
    int cont = 0;
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLSM; j++)
            if (mat[i][j] == 'X') cont++;
    return cont;
}

void verificarEntrada(char mat[FILAS][COLSM]) {
    int contPrimeraCol = 0;
    for (int i = 0; i < FILAS; i++) {
        if (mat[i][0] == 'X') contPrimeraCol++;
    }
    if (contPrimeraCol >= 2) cout << "e) no es posible entrar al complejo!" << endl;
    else cout << "e) es posible entrar al complejo!" << endl;
}

int main() {
    // Ejemplo de inicializacion constante del caso 1 de la imagen
    char mapa[FILAS][COLSM] = {
        {'X', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'X', '0', '0', '0'}
    };

    mostrarMatriz(mapa);
    mostrarLibres(mapa);
    coordenadasZombies(mapa);
    cout << "d) total muertos vivientes: " << contarZombies(mapa) << endl;
    verificarEntrada(mapa);
    
    // Inciso f (No requiere funcion)
    int total = FILAS * COLSM;
    cout << "f) espacio libre: " << total - contarZombies(mapa) << endl;

    return 0;
}