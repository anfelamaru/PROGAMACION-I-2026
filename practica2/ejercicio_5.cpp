// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica



#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    
    int numeroSecreto = dis(gen);
    int intento = 0;
    int contadorIntentos = 0;

    cout << "--- JUEGO: ADIVINA EL NUMERO (1 al 100) ---" << endl;

    while (intento != numeroSecreto) {
        cout << "Ingresa tu numero: ";
        cin >> intento;
        contadorIntentos++;

        if (intento > numeroSecreto) {
            cout << "El numero secreto es MENOR." << endl;
        } else if (intento < numeroSecreto) {
            cout << "El numero secreto es MAYOR." << endl;
        } else {
            cout << "\n¡FELICIDADES! Adivinaste el numero." << endl;
            cout << "Te llevo " << contadorIntentos << " intento(s)." << endl;
        }
    }

    return 0;
}