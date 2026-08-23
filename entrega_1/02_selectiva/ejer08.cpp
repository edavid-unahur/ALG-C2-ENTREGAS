/*
 * EJERCICIO 8: Determinar si un numero es par o impar
 * 
 * Enunciado:
 * Escribir un programa que determine si un numero entero es par o impar.
 * 
 * Concepto: Un numero es par si es divisible por 2 (resto 0)
 * 
 * Ejemplo:
 * Entrada: 8
 * Salida: Par
 * 
 * Complejidad: O(1) - una operación modulo
 */

#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    if (numero % 2 == 0) {
        cout << "Par" << endl;
    } else {
        cout << "Impar" << endl;
    }
    
    return 0;
}
