/*
 * EJERCICIO 37: Traza de una matriz cuadrada
 * 
 * Enunciado:
 * Escribir un programa que calcule la traza de una matriz cuadrada.
 * 
 * Concepto: La traza es la suma de los elementos de la diagonal principal
 * traza = M[0][0] + M[1][1] + ... + M[n-1][n-1]
 * 
 * Complejidad: O(n) donde n es la dimensión
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Dimension de matriz cuadrada: ";
    cin >> n;
    
    vector<vector<double>> matriz(n, vector<double>(n));
    
    cout << "Ingrese matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    double traza = 0;
    for (int i = 0; i < n; i++) {
        traza += matriz[i][i];
    }
    
    cout << "\nTraza de la matriz: " << traza << endl;
    
    return 0;
}
