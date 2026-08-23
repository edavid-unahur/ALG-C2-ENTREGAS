/*
 * EJERCICIO 4: Calcular superficie y volumen de una esfera
 * 
 * Enunciado:
 * Dado el radio R de una esfera, calcular e imprimir:
 * - Superficie: 4 * π * R²
 * - Volumen: (4/3) * π * R³
 * 
 * Ejemplo:
 * Entrada: 5
 * Salida:
 * Superficie: 314.16
 * Volumen: 523.60
 * 
 * Complejidad: O(1) - solo 2 cálculos
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double radio;
    
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    
    double superficie = 4 * M_PI * radio * radio;
    double volumen = (4.0 / 3.0) * M_PI * radio * radio * radio;
    
    cout << fixed << setprecision(2);
    cout << "\nSuperficie: " << superficie << endl;
    cout << "Volumen: " << volumen << endl;
    
    return 0;
}
