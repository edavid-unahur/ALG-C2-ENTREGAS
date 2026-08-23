/*
 * EJERCICIO 25: Función que devuelve las raices reales de una cuadrática
 * 
 * Enunciado:
 * Hacer una función que devuelva las raices reales de un polinomio de segundo grado
 * y además indique si tiene o no raices reales.
 * 
 * Concepto: Usa la formula cuadrática
 * x = (-b ± √(b²-4ac)) / 2a
 * 
 * Ejemplo:
 * Entrada: a=1, b=-5, c=6
 * Salida: Raiz1: 3, Raiz2: 2
 * 
 * Complejidad: O(1) - solo calculos de formula
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void obtenerRaices(double a, double b, double c) {
    if (a == 0) {
        cout << "No es una cuadratica" << endl;
        return;
    }
    
    double discriminante = b * b - 4 * a * c;
    
    if (discriminante < 0) {
        cout << "No tiene raices reales (devolveria 0 y 0)" << endl;
        return;
    }
    
    double raizDisc = sqrt(discriminante);
    double raiz1 = (-b + raizDisc) / (2 * a);
    double raiz2 = (-b - raizDisc) / (2 * a);
    
    cout << fixed << setprecision(2);
    cout << "Raiz 1: " << raiz1 << endl;
    cout << "Raiz 2: " << raiz2 << endl;
}

int main() {
    double a, b, c;
    
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;
    
    obtenerRaices(a, b, c);
    
    return 0;
}
