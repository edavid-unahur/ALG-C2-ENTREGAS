/*
 * EJERCICIO 18: Multiplicación por sumas sucesivas
 * 
 * Enunciado:
 * Leer A y B (enteros). Calcular C = A x B mediante sumas sucesivas.
 * Imprimir el resultado.
 * 
 * Concepto: A * B es sumar A, B veces
 * Ejemplo: 3 * 4 = 3 + 3 + 3 + 3 = 12
 * 
 * Ejemplo:
 * Entrada: A=3, B=4
 * Salida: 3 * 4 = 12
 * 
 * Complejidad: O(|B|) - un ciclo de B iteraciones
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    
    cout << "Ingrese A: ";
    cin >> a;
    
    cout << "Ingrese B: ";
    cin >> b;
    
    int resultado = 0;
    int veces = abs(b);
    int signo = (a < 0 && b >= 0) || (a >= 0 && b < 0) ? -1 : 1;
    
    for (int i = 0; i < veces; i++) {
        resultado += abs(a);
    }
    
    resultado *= signo;
    cout << a << " * " << b << " = " << resultado << endl;
    
    return 0;
}
