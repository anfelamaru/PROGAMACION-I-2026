// Materia: Programación I, Paralelo 4
// Autor: Angel José Amaru Llojlla
// Carnet: 9986015
// Fecha creación: 22/05/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>

using namespace std;

// Estructura Producto
struct Producto {
    string nombre;
    string codigo;
    double precio;
    int cantidad_en_inventario;
    string observaciones;
};

// Función para registrar productos e incluir alertas si hay stock crítico
void registrarInventario(Producto inventario[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nProducto " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, inventario[i].nombre);
        cout << "Codigo: ";
        getline(cin, inventario[i].codigo);
        cout << "Precio: ";
        cin >> inventario[i].precio;
        cout << "Cantidad en Inventario: ";
        cin >> inventario[i].cantidad_en_inventario;
        cin.ignore();

        if (inventario[i].cantidad_en_inventario < 5) {
            inventario[i].observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        } else {
            inventario[i].observaciones = "Stock estable.";
        }
    }
}

// Función para localizar el producto más costoso
void mostrarMasCaro(const Producto inventario[], int n) {
    if (n <= 0) return;
    int idxCaro = 0;
    for (int i = 1; i < n; i++) {
        if (inventario[i].precio > inventario[idxCaro].precio) {
            idxCaro = i;
        }
    }
    cout << "\n> Producto mas caro: " << inventario[idxCaro].nombre 
         << " (Codigo: " << inventario[idxCaro].codigo << ") - Precio: " << inventario[idxCaro].precio << endl;
}

// Función para consolidar la suma total de stocks
int calcularTotalStock(const Producto inventario[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += inventario[i].cantidad_en_inventario;
    }
    return total;
}

// Función adicional para listar observaciones críticas
void mostrarAdvertencias(const Producto inventario[], int n) {
    cout << "\n--- Alertas de Inventario ---" << endl;
    for (int i = 0; i < n; i++) {
        if (inventario[i].cantidad_en_inventario < 5) {
            cout << "! [" << inventario[i].nombre << "]: " << inventario[i].observaciones << endl;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de productos en inventario: ";
    cin >> n;
    cin.ignore();

    Producto tienda[n];
    registrarInventario(tienda, n);
    
    mostrarMasCaro(tienda, n);
    cout << "> Cantidad total de productos en inventario: " << calcularTotalStock(tienda, n) << " unidades." << endl;
    mostrarAdvertencias(tienda, n);

    return 0;
}