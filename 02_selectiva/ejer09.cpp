/*
 * EJERCICIO 9: Determinar si un numero M es divisible por N
 * 
 * Enunciado:
 * Determinar si un numero M es divisible por otro numero N.
 * 
 * Concepto: M es divisible por N si M % N == 0 (sin resto)
 * 
 * Ejemplo:
 * Entrada: M=15, N=3
 * Salida: Divisible
 * 
 * Complejidad: O(1) - solo comparaciones
 */

#include <iostream>
using namespace std;

int main() {
    int m, n;
    
    cout << "Ingrese M: ";
    cin >> m;
    
    cout << "Ingrese N: ";
    cin >> n;
    
    if (n != 0 && m % n == 0) {
        cout << "Divisible" << endl;
    } else if (n == 0) {
        cout << "No se puede: division por cero" << endl;
    } else {
        cout << "No divisible" << endl;
    }
    
    return 0;
}
