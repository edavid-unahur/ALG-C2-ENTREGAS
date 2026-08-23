/*
 * EJERCICIO 38: Determinar si una matriz es identidad
 * 
 * Enunciado:
 * Escribir un algoritmo que determine si una matriz cuadrada ingresada
 * es la matriz identidad. Optimizar el código.
 * 
 * Concepto: Matriz identidad tiene 1 en diagonal, 0 en el resto
 * I[i][j] = 1 si i==j, 0 si i!=j
 * 
 * Optimizacion: Al primer error, cortar
 * 
 * Complejidad: O(n²) en peor caso, O(1) si no es identidad
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
    
    bool esIdentidad = true;
    
    for (int i = 0; i < n && esIdentidad; i++) {
        for (int j = 0; j < n && esIdentidad; j++) {
            if ((i == j && matriz[i][j] != 1) || 
                (i != j && matriz[i][j] != 0)) {
                esIdentidad = false;
            }
        }
    }
    
    cout << "\n";
    if (esIdentidad) {
        cout << "SI es matriz identidad" << endl;
    } else {
        cout << "NO es matriz identidad" << endl;
    }
    
    return 0;
}
