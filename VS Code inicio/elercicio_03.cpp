// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015 LP.

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 02/17/2026
//EJERCICIO 1 DE MULTIPLICACION
#include <iostream>
using namespace std;
int main ()
{
    int valor=0;
    int multiplicacion =0;
    system("cls");
    do
    {
        cout<<"ingrese el valor: ";
        cin>>valor;
        multiplicacion *= valor;
    } while (valor !=0);
    cout <<"el resultado de la suma es: "<<multiplicacion<<endl;
    return 0;
}