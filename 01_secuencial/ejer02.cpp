/*
 * EJERCICIO 2: Leer dos números y hacer operaciones aritméticas
 * 
 * Enunciado:
 * Leer dos números por teclado e imprimir:
 * - La suma
 * - La resta (primero menos segundo)
 * - La multiplicación
 * - La división
 * 
 * Ejemplo:
 * Entrada: 10 y 3
 * Salida:
 * Suma: 13
 * Resta: 7
 * Multiplicación: 30
 * División: 3.33333
 * 
 * Complejidad: O(1) - solo 4 operaciones
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    cout << "\nResultados:" << endl;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    
    if (b != 0) {
        cout << "Division: " << fixed << setprecision(2) << a / b << endl;
    } else {
        cout << "Division: No se puede dividir por cero" << endl;
    }
    
    return 0;
}
