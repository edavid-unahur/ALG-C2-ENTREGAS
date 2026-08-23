/*
 * EJERCICIO 1: Leer un numero por teclado e imprimirlo en pantalla
 * 
 * Enunciado:
 * Leer un numero desde el teclado e imprimir por pantalla con el cartel:
 * "Numero ingresado" = [valor]
 * 
 * Ejemplo:
 * Entrada: 42
 * Salida: "Numero ingresado" = 42
 * 
 * Complejidad: O(1) - operaciones constantes
 */

#include <iostream>
using namespace std;

int main() {
    // Declarar variable para guardar el numero
    double numero;
    
    // Pedirle al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    // Imprimir el numero con el cartel pedido
    cout << "\"Numero ingresado\" = " << numero << endl;
    
    return 0;
}
