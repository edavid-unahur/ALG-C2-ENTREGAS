/*
 * EJERCICIO 13: Imprimir 20 numeros consecutivos
 * 
 * Enunciado:
 * Imprimir por pantalla una lista de 20 números consecutivos,
 * comenzando con un número ingresado por teclado.
 * 
 * Ejemplo:
 * Entrada: 5
 * Salida: 5, 6, 7, 8, ... 24
 * 
 * Complejidad: O(n) donde n=20 - ciclo de 20 iteraciones
 */

#include <iostream>
using namespace std;

int main() {
    int inicio;
    
    cout << "Ingrese el numero inicial: ";
    cin >> inicio;
    
    cout << "20 numeros consecutivos:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << inicio + i << endl;
    }
    
    return 0;
}
