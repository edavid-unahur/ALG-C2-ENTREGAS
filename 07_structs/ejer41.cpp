/*
 * EJERCICIO 41: Agenda de contactos
 * 
 * Enunciado:
 * Definir un vector "Agenda" que almacene datos de hasta 50 personas
 * y permita:
 * a) Cargar datos
 * b) Buscar telefono por nombre
 * c) Buscar nombre por telefono
 * d) Modificar telefono
 * e) Agregar contacto
 * f) Dar de baja
 * 
 * Complejidad: O(n) para búsquedas/modificaciones
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Persona {
    string nombre;
    string telefono;
};

const int MAX_AGENDA = 50;

int main() {
    vector<Persona> agenda;
    int opcion = -1;
    
    while (opcion != 0) {
        cout << "\n===== AGENDA =====" << endl;
        cout << "1. Cargar contactos" << endl;
        cout << "2. Buscar telefono por nombre" << endl;
        cout << "3. Buscar nombre por telefono" << endl;
        cout << "4. Modificar telefono" << endl;
        cout << "5. Agregar contacto" << endl;
        cout << "6. Dar de baja" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();
        
        if (opcion == 1) {
            agenda.clear();
            int cant;
            cout << "Cantidad de contactos: ";
            cin >> cant;
            cin.ignore();
            cant = min(cant, MAX_AGENDA);
            
            for (int i = 0; i < cant; i++) {
                Persona p;
                cout << "Nombre: ";
                getline(cin, p.nombre);
                cout << "Telefono: ";
                getline(cin, p.telefono);
                agenda.push_back(p);
            }
        }
        else if (opcion == 2) {
            string nombre;
            cout << "Nombre a buscar: ";
            getline(cin, nombre);
            
            bool encontrado = false;
            for (const auto& p : agenda) {
                if (p.nombre == nombre) {
                    cout << "Telefono: " << p.telefono << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No encontrado" << endl;
        }
        else if (opcion == 3) {
            string telefono;
            cout << "Telefono a buscar: ";
            getline(cin, telefono);
            
            bool encontrado = false;
            for (const auto& p : agenda) {
                if (p.telefono == telefono) {
                    cout << "Nombre: " << p.nombre << endl;
                    encontrado = true;
                }
            }
            if (!encontrado) cout << "No encontrado" << endl;
        }
        else if (opcion == 4) {
            string nombre;
            cout << "Nombre a modificar: ";
            getline(cin, nombre);
            
            for (auto& p : agenda) {
                if (p.nombre == nombre) {
                    cout << "Nuevo telefono: ";
                    getline(cin, p.telefono);
                    cout << "Actualizado" << endl;
                    break;
                }
            }
        }
        else if (opcion == 5) {
            if (agenda.size() >= MAX_AGENDA) {
                cout << "Agenda llena" << endl;
            } else {
                Persona p;
                cout << "Nombre: ";
                getline(cin, p.nombre);
                cout << "Telefono: ";
                getline(cin, p.telefono);
                agenda.push_back(p);
                cout << "Agregado" << endl;
            }
        }
        else if (opcion == 6) {
            string nombre;
            cout << "Nombre a dar de baja: ";
            getline(cin, nombre);
            
            auto it = remove_if(agenda.begin(), agenda.end(),
                               [&](const Persona& p) { return p.nombre == nombre; });
            if (it != agenda.end()) {
                agenda.erase(it, agenda.end());
                cout << "Dado de baja" << endl;
            }
        }
    }
    
    return 0;
}
