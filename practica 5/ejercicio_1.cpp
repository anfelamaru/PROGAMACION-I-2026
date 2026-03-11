// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026


#include <iostream>
#include <random>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de productos vendidos en el dia (n): ";
    cin >> n;

    double sumaTotal = 0.0;
    double totalIVA = 0.0;

    // Configuración para generar números aleatorios entre 20 y 50
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(20.0, 50.0);

    for (int i = 0; i < n; i++) {
        double precio = dis(gen);
        sumaTotal += precio;
        totalIVA += precio * 0.13; // 13% de IVA
    }

    // Aplicar descuento del 5% si excede los 2500 Bs
    if (sumaTotal > 2500.0) {
        cout << "\nSe excedio los 2500 Bs. Se aplica un descuento del 5%." << endl;
        sumaTotal -= (sumaTotal * 0.05);
    }

    cout << "\n--- REPORTE DEL DIA ---" << endl;
    cout << "Suma total de las ventas: Bs. " << sumaTotal << endl;
    cout << "Pago del IVA (13%) a Impuestos Nacionales: Bs. " << totalIVA << endl;

    return 0;
}