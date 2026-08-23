/*
 * EJERCICIO 27: Función que determina si un número es primo
 * 
 * Enunciado:
 * Hacer una función que indique si un número es primo o no.
 * 
 * Concepto: Un numero es primo si solo es divisible por 1 y por sí mismo.
 * Optimizacion: Solo revisar hasta √n
 * 
 * Ejemplo:
 * Entrada: 17
 * Salida: Es primo
 * 
 * Complejidad: O(√n) - verifica divisores hasta raiz de n
 */

#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    
    for (int divisor = 2; divisor * divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (esPrimo(numero)) {
        cout << numero << " ES primo" << endl;
    } else {
        cout << numero << " NO es primo" << endl;
    }
    
    return 0;
}
