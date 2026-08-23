/*
 * EJERCICIO 42: Sistema de gondola de supermercado
 * 
 * Enunciado:
 * Definir un vector "Gondola" donde se almacenen datos de hasta 50 productos.
 * Cada producto tiene: nombre, código de barras, precio, si está en oferta.
 * Si está en oferta, aplicar 10% de descuento.
 * 
 * Menu:
 * a) Cargar productos
 * b) Buscar por nombre
 * c) Buscar por código
 * d) Modificar precio
 * e) Quitar producto
 * f) Contar productos en oferta
 * g) Pasar a Chango (carrito) y calcular monto y ahorro
 * 
 * Complejidad: O(n) para búsquedas/modificaciones
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Producto {
    string nombre;
    string codigoBarras;
    double precio;
    bool enOferta;
};

const int MAX_GONDOLA = 50;

double calcularPrecioFinal(const Producto& p) {
    return p.enOferta ? p.precio * 0.9 : p.precio;
}

int main() {
    vector<Producto> gondola;
    int opcion = -1;
    
    while (opcion != 0) {
        cout << "\n===== GONDOLA =====" << endl;
        cout << "1. Cargar productos" << endl;
        cout << "2. Buscar por nombre" << endl;
        cout << "3. Buscar por codigo" << endl;
        cout << "4. Modificar precio" << endl;
        cout << "5. Quitar producto" << endl;
        cout << "6. Contar en oferta" << endl;
        cout << "7. Pasar a Chango" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        if (opcion == 1) {
            gondola.clear();
            int cant;
            cout << "Cantidad de productos: ";
            cin >> cant;
            cin.ignore();
            cant = min(cant, MAX_GONDOLA);
            
            for (int i = 0; i < cant; i++) {
                Producto p;
                cout << "Nombre: ";
                getline(cin, p.nombre);
                cout << "Codigo barras: ";
                getline(cin, p.codigoBarras);
                cout << "Precio: ";
                cin >> p.precio;
                
                string oferta;
                cout << "Oferta (s/n): ";
                cin.ignore();
                getline(cin, oferta);
                p.enOferta = (oferta[0] == 's' || oferta[0] == 'S');
                
                gondola.push_back(p);
            }
        }
        else if (opcion == 2) {
            string nombre;
            cout << "Nombre a buscar: ";
            getline(cin, nombre);
            
            bool encontrado = false;
            for (const auto& p : gondola) {
                if (p.nombre == nombre) {
                    cout << fixed << setprecision(2);
                    cout << "Precio: " << calcularPrecioFinal(p) << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No encontrado" << endl;
        }
        else if (opcion == 3) {
            string codigo;
            cout << "Codigo a buscar: ";
            getline(cin, codigo);
            
            bool encontrado = false;
            for (const auto& p : gondola) {
                if (p.codigoBarras == codigo) {
                    cout << fixed << setprecision(2);
                    cout << "Nombre: " << p.nombre << endl;
                    cout << "Precio: " << calcularPrecioFinal(p) << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No encontrado" << endl;
        }
        else if (opcion == 4) {
            string nombre;
            cout << "Producto a modificar: ";
            getline(cin, nombre);
            
            for (auto& p : gondola) {
                if (p.nombre == nombre) {
                    cout << "Nuevo precio: ";
                    cin >> p.precio;
                    cout << "Actualizado" << endl;
                    break;
                }
            }
        }
        else if (opcion == 5) {
            string nombre;
            cout << "Producto a quitar: ";
            getline(cin, nombre);
            
            auto it = remove_if(gondola.begin(), gondola.end(),
                               [&](const Producto& p) { return p.nombre == nombre; });
            if (it != gondola.end()) {
                gondola.erase(it, gondola.end());
                cout << "Quitado" << endl;
            }
        }
        else if (opcion == 6) {
            int cant = 0;
            for (const auto& p : gondola) {
                if (p.enOferta) cant++;
            }
            cout << "Productos en oferta: " << cant << endl;
        }
        else if (opcion == 7) {
            double monto = 0, ahorro = 0;
            for (const auto& p : gondola) {
                double precioFinal = calcularPrecioFinal(p);
                monto += precioFinal;
                ahorro += p.precio - precioFinal;
            }
            
            cout << fixed << setprecision(2);
            cout << "Monto a abonar: $" << monto << endl;
            cout << "Ahorro total: $" << ahorro << endl;
        }
    }
    
    return 0;
}
