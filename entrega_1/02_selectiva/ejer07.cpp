/*
 * EJERCICIO 7: Encontrar el mayor de dos números
 * 
 * Enunciado:
 * Leer dos números reales e imprimir el mayor de ellos.
 * 
 * Ejemplo:
 * Entrada: 10 y 7
 * Salida: Mayor: 10
 * 
 * Complejidad: O(1) - solo una comparación
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a, b;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    cout << "Mayor: " << max(a, b) << endl;
    
    return 0;
}
