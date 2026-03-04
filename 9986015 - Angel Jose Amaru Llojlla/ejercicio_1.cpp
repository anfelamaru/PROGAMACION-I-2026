//1. Simular el lanzamiento de un dado n veces y determinar la frecuencia de 
//repetici�n de las caras pares.

#include <bits\stdc++.h>
using namespace std;
int main ()
{
	int n;
    int cara_obtenida;
    int cuenta_pares = 0;

    // Configurar el generador de n�meros aleatorios con el tiempo actual
    srand(time(0));

    // Entrada de datos
    cout << "Ingrese la cantidad de lanzamientos (n): ";
    cin >> n;

    // Proceso de simulaci�n
    for (int i = 0; i < n; i++) {
        // Generar un n�mero entre 1 y 6
        cara_obtenida = 1 + (rand() % 6);

        // Verificar si es par (2, 4 o 6)
        if (cara_obtenida % 2 == 0) {
            cuenta_pares++;
        }
    }

    // Salida de resultados
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Lanzamientos realizados: " << n << endl;
    cout << "Cantidad de veces que salio par: " << cuenta_pares << endl;

    return 0;
}
