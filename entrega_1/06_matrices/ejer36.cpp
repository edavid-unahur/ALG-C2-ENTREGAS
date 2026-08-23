/*
 * EJERCICIO 36: Suma de filas de una matriz
 * 
 * Enunciado:
 * Escribir un algoritmo que halle un vector cuyos elementos son
 * la suma de los elementos de cada fila de una matriz.
 * 
 * Complejidad: O(m*n) - recorre todos los elementos
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "Filas: ";
    cin >> m;
    cout << "Columnas: ";
    cin >> n;
    
    vector<vector<double>> matriz(m, vector<double>(n));
    
    cout << "Ingrese matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << "\nSuma por fila: ";
    for (int i = 0; i < m; i++) {
        double suma = 0;
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
        cout << suma;
        if (i + 1 < m) cout << ", ";
    }
    cout << endl;
    
    return 0;
}
