// Materia: Programación I, Paralelo 4

// Autor:Angel Jose Amaru LLojlla

// Carnet: 9986015

// Carrera del estudiante: ingenieria Mecatronica

// Fecha creación: 11/03/2026


#include <iostream>

using namespace std;

int main() {
    double horasTrabajadas, tarifaHora, tarifaBonificacion;
    double salarioBase = 0.0, salarioBonificacion = 0.0;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora regular: Bs. ";
    cin >> tarifaHora;

    if (horasTrabajadas > 8) {
        cout << "Ingrese la tarifa de bonificacion por cada hora extra: Bs. ";
        cin >> tarifaBonificacion;
        
        salarioBase = 8 * tarifaHora;
        double horasExtra = horasTrabajadas - 8;
        salarioBonificacion = horasExtra * tarifaBonificacion;
    } else {
        salarioBase = horasTrabajadas * tarifaHora;
    }

    double salarioTotal = salarioBase + salarioBonificacion;

    cout << "\n--- REPORTE DE SALARIO ---" << endl;
    cout << "a. Salario base del trabajador: Bs. " << salarioBase << endl;
    cout << "b. Salario por bonificacion: Bs. " << salarioBonificacion << endl;
    cout << "-> SALARIO TOTAL: Bs. " << salarioTotal << endl;

    return 0;
}