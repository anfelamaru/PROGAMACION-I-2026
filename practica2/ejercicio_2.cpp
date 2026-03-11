// Materia: Programación I, Paralelo 4

// Autor: Angel Jose Amaru Llojlla

// Carnet: 9986015

// Carrera del estudiante: Ingenieria Mecatronica



using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    int sumaTotal = 0, sumaPares = 0, sumaImpares = 0, sumaPrimos = 0;

    cout << "Ingrese numeros entre 0 y 100 (Ingrese 0 para terminar):" << endl;

    while (true) {
        cin >> num;
        if (num == 0) break;
        
        if (num >= 0 && num <= 100) {
            sumaTotal += num;
            if (num % 2 == 0) sumaPares += num;
            else sumaImpares += num;
            
            if (esPrimo(num)) sumaPrimos += num;
        } else {
            cout << "Numero fuera de rango. Intente nuevamente." << endl;
        }
    }

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "- Suma de todos los numeros ingresados: " << sumaTotal << endl;
    cout << "- Suma de todos los numeros pares: " << sumaPares << endl;
    cout << "- Suma de todos los numeros impares: " << sumaImpares << endl;
    cout << "- Suma de todos los numeros primos: " << sumaPrimos << endl;

    return 0;
}