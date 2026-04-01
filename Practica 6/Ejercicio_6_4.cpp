// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 4


#include <iostream>
using namespace std;

// Calcula el precio aplicando el impuesto (13% por defecto)
double CalcularPrecioTotal(double precioBase, double impuesto = 0.13) {
    return precioBase + (precioBase * impuesto);
}

int main() {
    double precio = 200.0;
    
    cout << "Precio Base: " << precio << " Bs." << endl;
    cout << "Precio Total con IVA por defecto (13%): " << CalcularPrecioTotal(precio) << " Bs." << endl;
    cout << "Precio Total con otro impuesto (Ej. 20%): " << CalcularPrecioTotal(precio, 0.20) << " Bs." << endl;
    
    return 0;
}