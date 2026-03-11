// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica


#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de productos vendidos en el dia (n): ";
    cin >> n;

    double sumaTotal = 0.0;
    double totalIVA = 0.0;

    for (int i = 1; i <= n; i++) {
        double precio;
        cout << "Ingrese el precio del producto " << i << ": Bs. ";
        cin >> precio;
        
        sumaTotal += precio;
        totalIVA += precio * 0.13; // IVA del 13% calculado por cada producto
    }

    // Aplicar descuento del 5% si el monto excede los 2500 Bs
    if (sumaTotal > 2500.0) {
        cout << "\nSe excedio los 2500 Bs. Se aplica un descuento del 5% sobre el total." << endl;
        sumaTotal -= (sumaTotal * 0.05);
    }

    cout << "\n--- REPORTE DEL DIA ---" << endl;
    cout << "Suma total de las ventas (Monto final a cobrar): Bs. " << sumaTotal << endl;
    cout << "Pago del IVA (13%) a Impuestos Nacionales: Bs. " << totalIVA << endl;

    return 0;
}