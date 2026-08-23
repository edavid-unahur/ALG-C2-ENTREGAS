/*
 * EJERCICIO 28: Funciones para MCD y MCM
 * 
 * Enunciado:
 * Escribir una función que devuelva el máximo común divisor (MCD)
 * y el mínimo común múltiplo (MCM) entre dos enteros.
 * 
 * Concepto:
 * MCD: Euclides - gcd(a,b) = gcd(b, a%b) hasta que b=0
 * MCM: (a*b) / MCD(a,b)
 * 
 * Ejemplo:
 * Entrada: 12, 18
 * Salida: MCD: 6, MCM: 36
 * 
 * Complejidad MCD: O(log(min(a,b))) - Algoritmo de Euclides
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int mcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    
    return a;
}

int mcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs(a / mcd(a, b) * b);
}

int main() {
    int a, b;
    
    cout << "Ingrese primer entero: ";
    cin >> a;
    cout << "Ingrese segundo entero: ";
    cin >> b;
    
    cout << "MCD(" << a << ", " << b << ") = " << mcd(a, b) << endl;
    cout << "MCM(" << a << ", " << b << ") = " << mcm(a, b) << endl;
    
    return 0;
}
