/*
 * EJERCICIO 11: Menu de 4 opciones
 * 
 * Enunciado:
 * Formar un menu de 4 opciones y, al elegir una de ellas, 
 * saldrá un cartel diciendo que opcion se eligió o si fue incorrecta.
 * 
 * Ejemplo:
 * Menu:
 * 1. Opcion A
 * 2. Opcion B
 * 3. Opcion C
 * 4. Opcion D
 * Entrada: 2
 * Salida: Elegiste opcion 2
 * 
 * Complejidad: O(1) - un switch simple
 */

#include <iostream>
using namespace std;

int main() {
    int opcion;
    
    cout << "===== MENU =====" << endl;
    cout << "1. Opcion A" << endl;
    cout << "2. Opcion B" << endl;
    cout << "3. Opcion C" << endl;
    cout << "4. Opcion D" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion;
    
    switch (opcion) {
        case 1:
            cout << "Elegiste Opcion A" << endl;
            break;
        case 2:
            cout << "Elegiste Opcion B" << endl;
            break;
        case 3:
            cout << "Elegiste Opcion C" << endl;
            break;
        case 4:
            cout << "Elegiste Opcion D" << endl;
            break;
        default:
            cout << "Opcion incorrecta" << endl;
    }
    
    return 0;
}
