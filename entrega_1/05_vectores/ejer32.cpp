/*
 * EJERCICIO 32: Vector sin elementos repetidos
 * 
 * Enunciado:
 * Se carga un vector X de N elementos enteros.
 * Escribir un algoritmo que devuelva un vector que tenga todos los elementos de X,
 * pero sin elementos repetidos.
 * 
 * Complejidad: O(n²) en peor caso - verifica existencia de cada elemento
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos elementos? ";
    cin >> n;
    
    vector<int> original(n);
    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "X[" << i << "]: ";
        cin >> original[i];
    }
    
    vector<int> sinRepetidos;
    for (int i = 0; i < n; i++) {
        bool yaEsta = false;
        for (int j = 0; j < (int)sinRepetidos.size(); j++) {
            if (original[i] == sinRepetidos[j]) {
                yaEsta = true;
                break;
            }
        }
        if (!yaEsta) {
            sinRepetidos.push_back(original[i]);
        }
    }
    
    cout << "\nVector sin repetidos: ";
    for (size_t i = 0; i < sinRepetidos.size(); i++) {
        cout << sinRepetidos[i];
        if (i + 1 < sinRepetidos.size()) cout << ", ";
    }
    cout << endl;
    
    return 0;
}
