/*
 * EJERCICIO 19: Los 3 numeros mayores de una serie
 * 
 * Enunciado:
 * Dada una serie de números enteros terminada en cero,
 * imprimir los tres mayores.
 * 
 * Ejemplo:
 * Entrada: 5, 8, 3, 12, 9, 0
 * Salida: 12, 9, 8
 * 
 * Complejidad: O(n) - una pasada por n números
 * Mantenemos 3 máximos en orden
 */

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int mayor1 = numeric_limits<int>::min();
    int mayor2 = numeric_limits<int>::min();
    int mayor3 = numeric_limits<int>::min();
    int numero;
    
    cout << "Ingrese numeros (0 para terminar):" << endl;
    while (true) {
        cin >> numero;
        if (numero == 0) break;
        
        if (numero > mayor1) {
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = numero;
        } else if (numero > mayor2) {
            mayor3 = mayor2;
            mayor2 = numero;
        } else if (numero > mayor3) {
            mayor3 = numero;
        }
    }
    
    cout << "Tres mayores: ";
    if (mayor1 != numeric_limits<int>::min()) cout << mayor1 << " ";
    if (mayor2 != numeric_limits<int>::min()) cout << mayor2 << " ";
    if (mayor3 != numeric_limits<int>::min()) cout << mayor3;
    cout << endl;
    
    return 0;
}
