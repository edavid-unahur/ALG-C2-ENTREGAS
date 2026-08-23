/*
 * EJERCICIO 10: Calculadora con 4 operaciones básicas
 * 
 * Enunciado:
 * Leer dos números y una opcion que puede ser:
 * '+' para suma, '-' para resta, '*' para multiplicacion o '/' para division
 * Realizar el cálculo según la opcion elegida.
 * 
 * Ejemplo:
 * Entrada: a=10, b=3, op='/'
 * Salida: Resultado: 3.33
 * 
 * Complejidad: O(1) - un switch con 4 casos simples
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    char operacion;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    cout << "Ingrese la operacion (+ - * /): ";
    cin >> operacion;
    
    switch (operacion) {
        case '+':
            cout << "Resultado: " << a + b << endl;
            break;
        case '-':
            cout << "Resultado: " << a - b << endl;
            break;
        case '*':
            cout << "Resultado: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << fixed << setprecision(2);
                cout << "Resultado: " << a / b << endl;
            } else {
                cout << "Error: no se puede dividir por cero" << endl;
            }
            break;
        default:
            cout << "Operacion no valida" << endl;
    }
    
    return 0;
}
