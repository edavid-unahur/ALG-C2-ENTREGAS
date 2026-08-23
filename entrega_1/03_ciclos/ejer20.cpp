/*
 * EJERCICIO 20: Salario máximo y mínimo de una lista
 * 
 * Enunciado:
 * Dada una serie de nombres con sus salarios respectivos,
 * determinar el salario máximo, el mínimo y la persona que percibe cada uno.
 * 
 * Ejemplo:
 * Entrada:
 * Juan 2000
 * Maria 3500
 * Pedro 1500
 * FIN
 * 
 * Salida:
 * Maximo: Maria cobra 3500
 * Minimo: Pedro cobra 1500
 * 
 * Complejidad: O(n) - una pasada por los nombres
 */

#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string nombre, nombreMax, nombreMin;
    double salario;
    double maxSalario = numeric_limits<double>::lowest();
    double minSalario = numeric_limits<double>::max();
    bool tengoDatos = false;
    
    cout << "Ingrese nombre y salario (FIN para terminar):" << endl;
    while (true) {
        cin >> nombre;
        if (nombre == "FIN") break;
        
        cin >> salario;
        tengoDatos = true;
        
        if (salario > maxSalario) {
            maxSalario = salario;
            nombreMax = nombre;
        }
        if (salario < minSalario) {
            minSalario = salario;
            nombreMin = nombre;
        }
    }
    
    if (tengoDatos) {
        cout << "\nMaximo: " << nombreMax << " cobra " << maxSalario << endl;
        cout << "Minimo: " << nombreMin << " cobra " << minSalario << endl;
    } else {
        cout << "No se ingresaron datos" << endl;
    }
    
    return 0;
}
