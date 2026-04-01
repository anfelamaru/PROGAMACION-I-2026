// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 3


#include <iostream>
using namespace std;

// Modifica el primer parametro (copia) y el segundo (original)
void ModificarValores(int a, int &b) {
    a = a * 2;
    b = b + 10;
    cout << "  (Dentro de la funcion) a: " << a << ", b: " << b << endl;
}

int main() {
    int valor1 = 10;
    int valor2 = 10;
    
    cout << "Antes de la funcion -> valor1: " << valor1 << ", valor2: " << valor2 << endl;
    ModificarValores(valor1, valor2);
    cout << "Despues de la funcion -> valor1: " << valor1 << ", valor2: " << valor2 << endl;
    // Solo valor2 debe haber cambiado
    
    return 0;
}