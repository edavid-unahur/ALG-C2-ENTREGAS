/*
 * EJERCICIO 34: Evaluar un polinomio
 * 
 * Enunciado:
 * Si los números de un vector representan los coeficientes de un polinomio
 * (de grado no mayor a 10), escribir un algoritmo que calcule la evaluación
 * de ese polinomio con un número que elige el usuario.
 * 
 * P(x) = a0 + a1*x + a2*x² + ... + an*xⁿ
 * Usamos Horner: P(x) = a0 + x*(a1 + x*(a2 + ... ))
 * 
 * Complejidad: O(n) donde n es el grado del polinomio
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int grado;
    cout << "¿Grado del polinomio? ";
    cin >> grado;
    
    vector<double> coef(grado + 1);
    cout << "Ingrese coeficientes (de menor a mayor grado):" << endl;
    for (int i = 0; i <= grado; i++) {
        cout << "a" << i << ": ";
        cin >> coef[i];
    }
    
    double x;
    cout << "\n¿Valor de x para evaluar? ";
    cin >> x;
    
    // Horner
    double resultado = coef[grado];
    for (int i = grado - 1; i >= 0; i--) {
        resultado = resultado * x + coef[i];
    }
    
    cout << fixed << setprecision(2);
    cout << "P(" << x << ") = " << resultado << endl;
    
    return 0;
}
