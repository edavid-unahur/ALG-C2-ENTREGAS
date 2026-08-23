/*
 * EJERCICIO 33: Unión e intersección de dos vectores
 * 
 * Enunciado:
 * Se leen dos vectores A y B de N y M elementos respectivamente.
 * Construir un algoritmo que halle los vectores unión e intersección de A y B.
 * Previamente habrá que ordenarlos.
 * 
 * Union: todos los elementos (sin repetir)
 * Interseccion: solo los que aparecen en ambos
 * 
 * Complejidad: O(n log n + m log m) por el ordenamiento
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Cantidad elementos A: ";
    cin >> n;
    cout << "Cantidad elementos B: ";
    cin >> m;
    
    vector<int> a(n), b(m);
    
    cout << "Ingrese vector A:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }
    
    cout << "Ingrese vector B:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "B[" << i << "]: ";
        cin >> b[i];
    }
    
    // Ordenar y eliminar repetidos
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    
    // Unión
    vector<int> unionAB = a;
    for (int val : b) {
        if (find(unionAB.begin(), unionAB.end(), val) == unionAB.end()) {
            unionAB.push_back(val);
        }
    }
    sort(unionAB.begin(), unionAB.end());
    
    // Intersección
    vector<int> interseccionAB;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(),
                     back_inserter(interseccionAB));
    
    cout << "\nUnion: ";
    for (size_t i = 0; i < unionAB.size(); i++) {
        cout << unionAB[i];
        if (i + 1 < unionAB.size()) cout << ", ";
    }
    cout << endl;
    
    cout << "Interseccion: ";
    for (size_t i = 0; i < interseccionAB.size(); i++) {
        cout << interseccionAB[i];
        if (i + 1 < interseccionAB.size()) cout << ", ";
    }
    cout << endl;
    
    return 0;
}
