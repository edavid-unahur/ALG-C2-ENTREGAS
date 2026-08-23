/*
 * EJERCICIO 15: Serie de numeros con suma parcial
 * 
 * Enunciado:
 * Leer una serie de números reales, terminando cuando se ingrese 0.
 * Imprimir cada dato a medida que se lo ingresa junto con la suma parcial.
 * 
 * Ejemplo:
 * Entrada: 5, 3, 2, 0
 * Salida:
 * Numero: 5, Suma: 5
 * Numero: 3, Suma: 8
 * Numero: 2, Suma: 10
 * 
 * Complejidad: O(n) donde n es cantidad de números ingresados
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numero, suma = 0;
    
    cout << "Ingrese numeros (0 para terminar):" << endl;
    while (true) {
        cin >> numero;
        if (numero == 0) break;
        
        suma += numero;
        cout << fixed << setprecision(2);
        cout << "Numero: " << numero << ", Suma parcial: " << suma << endl;
    }
    
    return 0;
}
