// Materia: Programación I, Paralelo 4
// Autor: Angel Jose Amaru Llojlla
// Fecha creación: 22/04/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

bool esValido(string correo) {
    size_t arrobaPos = correo.find('@');
    // Verifica que haya exactamente un '@' y que no sea el primer ni ultimo caracter
    if (arrobaPos == string::npos || arrobaPos == 0 || arrobaPos == correo.length() - 1) 
        return false;
    
    if (correo.find('@', arrobaPos + 1) != string::npos) 
        return false;

    // Verifica que haya al menos un '.' despues del '@'
    size_t puntoPos = correo.find('.', arrobaPos + 1);
    if (puntoPos == string::npos || puntoPos == arrobaPos + 1 || puntoPos == correo.length() - 1)
        return false;

    return true;
}

int main() {
    string email;
    cout << "Ingrese correo: ";
    cin >> email;

    if (esValido(email)) cout << "Correo electronico valido" << endl;
    else cout << "Correo electronico invalido" << endl;

    return 0;
}