// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015 LP.

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 02/17/2026
//EJERCICIO 1  DE DIVICION
#include <iostream>
using namespace std;
int main ()
{
    int valor=0;
    int divicion=0;
    system("cls");
    do
    {
        cout<<"ingrese el valor: ";
        cin>>valor;
        divicion /= valor;
    } while (valor !=0);
    cout <<"el resultado de la suma es: "<<divicion<<endl;
    return 0;
}