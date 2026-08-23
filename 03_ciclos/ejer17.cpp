/*
 * EJERCICIO 17: Mayor y menor con cantidad de apariciones
 * 
 * Enunciado:
 * Leer N números enteros. Se pide imprimir el mayor y el menor
 * y cuantas veces aparece cada uno.
 * 
 * Ejemplo:
 * Entrada: N=5, numeros: 3, 7, 7, 2, 7
 * Salida:
 * Mayor: 7 aparece 3 veces
 * Menor: 2 aparece 1 vez
 * 
 * Complejidad: O(n) - una pasada por n números
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos numeros? ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Cantidad invalida" << endl;
        return 0;
    }
    
    int numero, maximo, minimo, cantMax = 1, cantMin = 1;
    
    cout << "Ingrese el numero 1: ";
    cin >> numero;
    maximo = numero;
    minimo = numero;
    
    for (int i = 2; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        
        if (numero > maximo) {
            maximo = numero;
            cantMax = 1;
        } else if (numero == maximo) {
            cantMax++;
        }
        
        if (numero < minimo) {
            minimo = numero;
            cantMin = 1;
        } else if (numero == minimo) {
            cantMin++;
        }
    }
    
    cout << "\nMayor: " << maximo << " aparece " << cantMax << " veces" << endl;
    cout << "Menor: " << minimo << " aparece " << cantMin << " veces" << endl;
    
    return 0;
}
