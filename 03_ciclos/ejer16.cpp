/*
 * EJERCICIO 16: Max y min de una serie de numeros
 * 
 * Enunciado:
 * Dada una serie de números reales, determinar el valor máximo, el mínimo
 * y las posiciones en que se encontraban en la serie.
 * El programa debe ir preguntando si hay más números.
 * 
 * Ejemplo:
 * Entrada: 5, 2, 8, 3 (y responder "no")
 * Salida:
 * Maximo: 8 en posicion 3
 * Minimo: 2 en posicion 2
 * 
 * Complejidad: O(n) - una pasada por los datos
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    double numero;
    double maximo, minimo;
    int posicion = 1, posMaximo, posMinimo;
    
    cout << "Ingrese el primer numero: ";
    cin >> numero;
    
    maximo = numero;
    minimo = numero;
    posMaximo = 1;
    posMinimo = 1;
    
    while (true) {
        cout << "¿Hay mas numeros? (s/n): ";
        string respuesta;
        cin >> respuesta;
        
        if (respuesta[0] == 'n' || respuesta[0] == 'N') {
            break;
        }
        
        cout << "Ingrese el siguiente numero: ";
        cin >> numero;
        posicion++;
        
        if (numero > maximo) {
            maximo = numero;
            posMaximo = posicion;
        }
        if (numero < minimo) {
            minimo = numero;
            posMinimo = posicion;
        }
    }
    
    cout << "\nMaximo: " << maximo << " en posicion " << posMaximo << endl;
    cout << "Minimo: " << minimo << " en posicion " << posMinimo << endl;
    
    return 0;
}
