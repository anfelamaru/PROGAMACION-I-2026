// Materia: Programación I, Paralelo 4
// Autor:  Angel Jose Amaru Llojlla
// Fecha creación: 08/04/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath> // Para elevar al cuadrado

using namespace std;

// Prototipos de funciones
void calcularYMostrar(vector<int> calif);
double calcularSuma(vector<int> v);

int main() {
    int n, temp;
    vector<int> calificaciones;

    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;

    // Entrada de datos
    for (int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> temp;
        calificaciones.push_back(temp);
    }

    // Procesamiento y salida
    if (!calificaciones.empty()) {
        calcularYMostrar(calificaciones);
    }

    return 0;
}

// Función para obtener la suma (útil para el promedio)
double calcularSuma(vector<int> v) {
    double suma = 0;
    for (int x : v) {
        suma += x;
    }
    return suma;
}

void calcularYMostrar(vector<int> calif) {
    int n = calif.size();
    double suma = calcularSuma(calif);
    double promedio = suma / n;
    
    vector<double> desviacion;
    double sumaDesviacionesCuadradas = 0;

    // Calcular desviaciones y preparar varianza
    for (int i = 0; i < n; i++) {
        double d = calif[i] - promedio;
        desviacion.push_back(d);
        sumaDesviacionesCuadradas += pow(d, 2);
    }

    double varianza = sumaDesviacionesCuadradas / n;

    // Despliegue de resultados
    cout << fixed << setprecision(2);
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Suma Total: " << suma << endl;
    cout << "Promedio:   " << promedio << endl;
    
    cout << "\nCalificacion\tDesviacion" << endl;
    for (int i = 0; i < n; i++) {
        cout << calif[i] << "\t\t" << desviacion[i] << endl;
    }

    cout << "\nVarianza de los datos: " << varianza << endl;
}