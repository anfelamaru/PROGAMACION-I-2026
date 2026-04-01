// Materia: Programación I, Paralelo 4
// Fecha creación: 01/04/2026
// // Autor: Angel Jose Amaru Lllojlla
// Número de ejercicio: 6

#include <iostream>
using namespace std;

// Extrae las horas, minutos y segundos del total de segundos
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int segTotales = 7385; // Ejemplo: 2 horas, 3 minutos, 5 segundos
    int h = 0, m = 0, s = 0;
    
    calcularTiempo(segTotales, h, m, s);
    
    cout << segTotales << " segundos equivalen a:" << endl;
    cout << h << " horas, " << m << " minutos, " << s << " segundos." << endl;
    
    return 0;
}