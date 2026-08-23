/*
 * EJERCICIO 26: Programa que usa función para resolver cuadrática
 * 
 * Enunciado:
 * Hacer un programa principal donde se pida al usuario ingresar los coeficientes
 * de la cuadrática, e indicar si tiene o no raices, y cuáles son en caso de tener.
 * Utilizar la función definida.
 * 
 * Ejemplo:
 * Entrada: a=2, b=-7, c=3
 * Salida:
 * Raices: 3 y 0.5
 * 
 * Complejidad: O(1) - delegado a funcion
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Raices {
    bool tieneRaices;
    double raiz1;
    double raiz2;
};

Raices resolverCuadratica(double a, double b, double c) {
    Raices resultado;
    resultado.tieneRaices = false;
    resultado.raiz1 = 0;
    resultado.raiz2 = 0;
    
    if (a == 0) {
        return resultado;
    }
    
    double discriminante = b * b - 4 * a * c;
    if (discriminante < 0) {
        return resultado;
    }
    
    double raizDisc = sqrt(discriminante);
    resultado.raiz1 = (-b + raizDisc) / (2 * a);
    resultado.raiz2 = (-b - raizDisc) / (2 * a);
    resultado.tieneRaices = true;
    
    return resultado;
}

int main() {
    double a, b, c;
    
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "No es una ecuacion cuadratica (a debe ser != 0)" << endl;
        return 0;
    }
    
    Raices resultado = resolverCuadratica(a, b, c);
    
    cout << fixed << setprecision(2);
    if (resultado.tieneRaices) {
        cout << "Raices: " << resultado.raiz1 << " y " << resultado.raiz2 << endl;
    } else {
        cout << "No tiene raices reales" << endl;
    }
    
    return 0;
}
