/*
 * EJERCICIO 29: Vector de números primos entre 2 y 200
 * 
 * Enunciado:
 * Desarrollar una función que devuelva en un vector los números primos entre 2 y 200.
 * Reutilizar la función "esPrimo" del ejercicio 27.
 * 
 * Complejidad: O(n√n) donde n=200 - revisar cada uno con esPrimo
 */

#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int numero) {
    if (numero < 2) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> primos;
    
    for (int i = 2; i <= 200; i++) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }
    
    cout << "Numeros primos entre 2 y 200: (" << primos.size() << " total)" << endl;
    for (size_t i = 0; i < primos.size(); i++) {
        cout << primos[i];
        if (i + 1 < primos.size()) cout << ", ";
    }
    cout << endl;
    
    return 0;
}
