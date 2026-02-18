// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015 LP.

// Carrera del estudiante: Ing. Mecatronica

// Fecha creación: 02/18/2026
//EJERCICIO 8
#include<bits\stdc++.h>
using namespace std;
int main (){
    int entra1,entra2,entra3,valor;
    
    cout<<"Ingrese el valor 1: ";
    cin>>entra1;
    cout<<"Ingrese el valor 2: ";
    cin>>entra2;
    cout<<"Ingrese el valor 3: ";
    cin>>entra3;
    cout << "Ingrese un entrada 4: ";
    cin>>valor;
    
    if(valor == entra1 || valor ==entra2 || valor == entra3)
    {
    	cout <<"coinside en uno de las anterioes entradas";
	}
 	else
	 {
	 	cout<<"no coinside con ninguna entrada";
		}   
}