/*
 * EJERCICIO 35: Suma de dos matrices
 * 
 * Enunciado:
 * Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B.
 * La dimensión de las matrices de M × N se lee como dato.
 * 
 * C[i][j] = A[i][j] + B[i][j]
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
    
    vector<vector<double>> a(m, vector<double>(n));
    vector<vector<double>> b(m, vector<double>(n));
    
    cout << "\nIngrese matriz A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    
    cout << "\nIngrese matriz B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }
    
    cout << "\nMatriz suma (A+B):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
