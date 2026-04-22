// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 9

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool esPalindromo(string texto) {
    string procesado = "";
    // Limpiar el texto: quitar espacios y pasar a minuscula
    for (char c : texto) {
        if (isalpha(c)) {
            procesado += tolower(c);
        }
    }

    int i = 0, j = procesado.length() - 1;
    while (i < j) {
        if (procesado[i] != procesado[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string frase;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) cout << "Es palindromo" << endl;
    else cout << "No es palindromo" << endl;

    return 0;
}