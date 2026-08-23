/*
 * EJERCICIO 21: Verificar orden de una secuencia
 * 
 * Enunciado:
 * Leer una serie de números reales y verificar si están ordenados
 * en forma ascendente, descendente o si no están ordenados.
 * 
 * Ejemplo:
 * Entrada: 1, 3, 5, 7, 9999 (marca de fin)
 * Salida: Orden ascendente
 * 
 * Complejidad: O(n) - una pasada por los números
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> valores;
    double numero;
    
    cout << "Ingrese numeros (9999 para terminar):" << endl;
    while (true) {
        cin >> numero;
        if (numero == 9999) break;
        valores.push_back(numero);
    }
    
    if (valores.size() < 2) {
        cout << "Necesita al menos 2 numeros" << endl;
        return 0;
    }
    
    bool ascendente = true;
    bool descendente = true;
    
    for (size_t i = 1; i < valores.size(); i++) {
        if (valores[i] < valores[i-1]) {
            ascendente = false;
        }
        if (valores[i] > valores[i-1]) {
            descendente = false;
        }
    }
    
    if (ascendente && descendente) {
        cout << "Todos iguales" << endl;
    } else if (ascendente) {
        cout << "Orden ascendente" << endl;
    } else if (descendente) {
        cout << "Orden descendente" << endl;
    } else {
        cout << "No esta ordenado" << endl;
    }
    
    return 0;
}
