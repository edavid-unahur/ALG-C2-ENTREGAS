/*
 * EJERCICIO 3: Leer un nombre y saludar
 * 
 * Enunciado:
 * Leer el nombre de una persona por teclado e imprimirlo con un saludo.
 * 
 * Ejemplo:
 * Entrada: Juan
 * Salida: Hola, Juan
 * 
 * Complejidad: O(n) donde n es la longitud del nombre, pero mínima
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    
    cout << "Hola, " << nombre << endl;
    
    return 0;
}
