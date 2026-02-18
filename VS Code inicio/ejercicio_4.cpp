// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015 LP.

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 02/17/2026
//EJERCICIO 4
#include<iostream>
using namespace std;
int main (){
    float nota_practica, nota_teorica, nota_participacion, nota_total;
    cout <<"Ingrese la nota de la practica: (30%)"<<endl;
    cin>>nota_practica;
    cout <<"Ingrese la nota de teorica: (60%)"<<endl;
    cin>>nota_teorica;
    cout<<"Ingrese la nota de participacion: (10%)"<<endl;
    cin>>nota_participacion;

    nota_total=(nota_practica*0.30)+(nota_teorica*0.60)+(nota_participacion*0.10);
    
    cout <<"El promedio de la nota del estudiante es de: "<<nota_total;

}