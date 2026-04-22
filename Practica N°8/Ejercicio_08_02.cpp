// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void buscarComunes(const vector<string>& A, const vector<string>& B) {
    cout << "Clientes en comun: ";
    bool primero = true;
    for (const string& clienteA : A) {
        for (const string& clienteB : B) {
            if (clienteA == clienteB) {
                if (!primero) cout << ", ";
                cout << clienteA;
                primero = false;
            }
        }
    }
    cout << endl;
}

int main() {
    vector<string> listaA = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofia", "Luis"};

    buscarComunes(listaA, listaB);

    return 0;
}