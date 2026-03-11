// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026


#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de vendedoras (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double sueldoBasico, montoTotalVendido;
        
        cout << "\n--- VENDEDORA " << i << " ---" << endl;
        cout << "Ingrese el sueldo basico (segun antiguedad): Bs. ";
        cin >> sueldoBasico;
        cout << "Ingrese el monto total vendido en el mes: Bs. ";
        cin >> montoTotalVendido;

        // Cálculo de comisión (10% del total vendido)
        double comision = montoTotalVendido * 0.10;
        double sueldoTotal = sueldoBasico + comision;

        cout << "-> Comision extra recibida: Bs. " << comision << endl;
        cout << "-> Sueldo total a cancelar: Bs. " << sueldoTotal << endl;
    }

    return 0;
}