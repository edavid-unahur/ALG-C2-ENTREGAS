/*
 * EJERCICIO 30: Suma de vectores y producto escalar
 * 
 * Enunciado:
 * Dados dos vectores A y B de N elementos cada uno, se desean calcular:
 * a) El vector suma
 * b) El producto escalar
 * 
 * Vector suma: [a0+b0, a1+b1, ...]
 * Producto escalar: a0*b0 + a1*b1 + ... + an*bn
 * 
 * Complejidad: O(n) - una pasada por los n elementos
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos elementos? ";
    cin >> n;
    
    vector<double> a(n), b(n);
    
    cout << "Ingrese vector A:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }
    
    cout << "Ingrese vector B:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "B[" << i << "]: ";
        cin >> b[i];
    }
    
    cout << "\nVector suma (A+B): ";
    for (int i = 0; i < n; i++) {
        cout << a[i] + b[i];
        if (i + 1 < n) cout << ", ";
    }
    cout << endl;
    
    double productoEscalar = 0;
    for (int i = 0; i < n; i++) {
        productoEscalar += a[i] * b[i];
    }
    cout << "Producto escalar (A·B): " << productoEscalar << endl;
    
    return 0;
}
