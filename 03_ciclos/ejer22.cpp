/*
 * EJERCICIO 22: Tabla de conversion Celsius-Fahrenheit
 * 
 * Enunciado:
 * La relación entre temperaturas Celsius y Fahrenheit: C = 5/9 * (F - 32)
 * Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit,
 * para valores entre 0ºF y 200ºF, a intervalos de 10º.
 * 
 * Ejemplo (parcial):
 * 0 F -> -17.78 C
 * 10 F -> -12.22 C
 * ...
 * 200 F -> 93.33 C
 * 
 * Complejidad: O(1) - 21 iteraciones (constante fija)
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    cout << "Fahrenheit -> Celsius" << endl;
    cout << "=====================" << endl;
    
    for (int fahrenheit = 0; fahrenheit <= 200; fahrenheit += 10) {
        double celsius = 5.0 / 9.0 * (fahrenheit - 32);
        cout << fahrenheit << " F -> " << celsius << " C" << endl;
    }
    
    return 0;
}
