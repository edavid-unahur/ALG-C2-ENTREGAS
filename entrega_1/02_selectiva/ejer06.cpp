/*
 * EJERCICIO 6: Determinar si un numero es positivo, negativo o cero
 * 
 * Enunciado:
 * Leer un numero real y determinar si es mayor, menor o igual a cero.
 * 
 * Ejemplo:
 * Entrada: -5
 * Salida: Menor que cero
 * 
 * Complejidad: O(1) - solo comparaciones simples
 */

#include <iostream>
using namespace std;

int main() {
    double numero;
    
    cout << "Ingrese un numero real: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << "Mayor que cero" << endl;
    } else if (numero < 0) {
        cout << "Menor que cero" << endl;
    } else {
        cout << "Igual a cero" << endl;
    }
    
    return 0;
}
