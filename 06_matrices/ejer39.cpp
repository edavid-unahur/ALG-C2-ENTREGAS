/*
 * EJERCICIO 39: Minimo de cada fila de una matriz
 * 
 * Enunciado:
 * Escribir un algoritmo que construya un vector con los valores mínimos
 * de cada una de las filas de una matriz.
 * 
 * Complejidad: O(m*n) - recorre todos los elementos
 */

#include <iostream>
#include <vector>
#include <limits>
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
    
    cout << "\nMinimo de cada fila: ";
    for (int i = 0; i < m; i++) {
        double minimo = matriz[i][0];
        for (int j = 1; j < n; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
        cout << minimo;
        if (i + 1 < m) cout << ", ";
    }
    cout << endl;
    
    return 0;
}
