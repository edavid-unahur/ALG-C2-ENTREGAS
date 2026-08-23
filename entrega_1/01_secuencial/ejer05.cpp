/*
 * EJERCICIO 5: Calcular perímetro y superficie de un rectángulo
 * 
 * Enunciado:
 * Leer la base y altura de un rectángulo y calcular:
 * - Perímetro: 2 * (base + altura)
 * - Superficie: base * altura
 * 
 * Ejemplo:
 * Entrada: base=8, altura=5
 * Salida:
 * Perímetro: 26
 * Superficie: 40
 * 
 * Complejidad: O(1) - dos operaciones simples
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double base, altura;
    
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    
    double perimetro = 2 * (base + altura);
    double superficie = base * altura;
    
    cout << fixed << setprecision(2);
    cout << "\nPerimetro: " << perimetro << endl;
    cout << "Superficie: " << superficie << endl;
    
    return 0;
}
