/*
 * EJERCICIO 14: Calcular factorial de N
 * 
 * Enunciado:
 * Leer un numero N y calcular su factorial.
 * 
 * Concepto: N! = 1 * 2 * 3 * ... * N
 * 
 * Ejemplo:
 * Entrada: 5
 * Salida: Factorial: 120 (1*2*3*4*5)
 * 
 * Complejidad: O(n) - ciclo que corre n veces
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Ingrese N: ";
    cin >> n;
    
    long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    
    cout << "Factorial de " << n << " = " << factorial << endl;
    
    return 0;
}
