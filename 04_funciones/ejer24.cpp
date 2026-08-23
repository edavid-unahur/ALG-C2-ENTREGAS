/*
 * EJERCICIO 24: Función que verifica si una cuadrática tiene raices reales
 * 
 * Enunciado:
 * Hacer una función que, dado los coeficientes de un polinomio de segundo grado
 * (3 números reales a, b, c), indique si tiene o no raices reales,
 * devolviendo un valor booleano.
 * 
 * Concepto: Discriminante = b² - 4ac
 * Si discriminante >= 0, hay raices reales
 * 
 * Ejemplo:
 * Entrada: a=1, b=5, c=6
 * Salida: true (discriminante = 25-24 = 1)
 * 
 * Complejidad: O(1) - solo un calculo
 */

#include <iostream>
using namespace std;

bool tieneRaicesReales(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;
    return discriminante >= 0;
}

int main() {
    double a, b, c;
    
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;
    
    if (tieneRaicesReales(a, b, c)) {
        cout << "La cuadratica TIENE raices reales" << endl;
    } else {
        cout << "La cuadratica NO tiene raices reales" << endl;
    }
    
    return 0;
}
