// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica

// Fecha creación: 03/04/2026

//Ingeniero no me sale bien este codigo porque no me corre como debe ser

#include <iostream>
using namespace std;
int main() 
{
    int n, edad;
	int totalPanales = 0;

    cout << "Ingrese la cantidad de ninos en la guarderia: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Edad del nino " << i << " (1, 2 o 3 años): ";
        cin >> edad;

        if (edad == 1) 
		{
            totalPanales += 6;
        }
		 else if (edad == 2) 
		{
            totalPanales += 3;
        } 
		else if (edad == 3)
		{
            totalPanales += 2;
        } 
		else 
		{
            cout << "Edad no valida, no se sumaran pañales para este nino." << endl;
        }
    }

    cout << "-------------------------------------------" << endl;
    cout << "Consumo total de panales por dia: " << totalPanales << endl;

    return 0;
}