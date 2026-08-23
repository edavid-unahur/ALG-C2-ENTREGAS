/*
 * EJERCICIO 40: Definir struct Persona
 * 
 * Enunciado:
 * Definir un struct Persona, donde se pueda almacenar su nombre
 * y el número de teléfono.
 * 
 * Complejidad: O(1) - solo definicion y asignacion
 */

#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string telefono;
};

int main() {
    Persona persona;
    
    cout << "Nombre: ";
    getline(cin, persona.nombre);
    
    cout << "Telefono: ";
    getline(cin, persona.telefono);
    
    cout << "\nPersona cargada:" << endl;
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Telefono: " << persona.telefono << endl;
    
    return 0;
}
