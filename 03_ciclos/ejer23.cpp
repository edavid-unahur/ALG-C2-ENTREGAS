/*
 * EJERCICIO 23: Media por lote y media total
 * 
 * Enunciado:
 * Leer N lotes de números reales (cada lote termina con 0).
 * Calcular la media individual de cada lote, junto con la media total
 * de todos los números ingresados.
 * 
 * Ejemplo:
 * Lote 1: 2, 4, 6, 0 -> Media: 4
 * Lote 2: 5, 5, 0 -> Media: 5
 * Media total de (2,4,6,5,5) = 4.4
 * 
 * Complejidad: O(n*m) donde n=lotes, m=promedio de numeros por lote
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cantidadLotes;
    
    cout << "¿Cuantos lotes? ";
    cin >> cantidadLotes;
    
    double sumaTotal = 0;
    int cantidadTotal = 0;
    
    for (int lote = 1; lote <= cantidadLotes; lote++) {
        cout << "\nLote " << lote << endl;
        double sumaLote = 0;
        int cantidadLote = 0;
        
        while (true) {
            double numero;
            cout << "Numero (0 termina lote): ";
            cin >> numero;
            
            if (numero == 0) break;
            
            sumaLote += numero;
            sumaTotal += numero;
            cantidadLote++;
            cantidadTotal++;
        }
        
        if (cantidadLote > 0) {
            cout << fixed << setprecision(2);
            cout << "Media lote " << lote << ": " << sumaLote / cantidadLote << endl;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << "\nMedia total: ";
    if (cantidadTotal > 0) {
        cout << sumaTotal / cantidadTotal << endl;
    } else {
        cout << "sin datos" << endl;
    }
    
    return 0;
}
