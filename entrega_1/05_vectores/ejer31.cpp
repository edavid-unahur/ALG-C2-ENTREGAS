/*
 * EJERCICIO 31: Análisis de calificaciones de examen de inglés
 * 
 * Enunciado:
 * Por cada alumno que rindió un examen de inglés se lee el número de padrón
 * y la nota obtenida. Se desea saber:
 * - La cantidad de alumnos que rindieron el examen
 * - El porcentaje de alumnos que obtuvieron cada nota (0-10)
 * 
 * Complejidad: O(n) donde n es cantidad de alumnos
 */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<int> conteoNotas(11, 0);
    int padron, nota;
    
    cout << "Ingrese padron y nota (padron 0 termina):" << endl;
    while (true) {
        cout << "Padron: ";
        cin >> padron;
        if (padron == 0) break;
        
        cout << "Nota (0-10): ";
        cin >> nota;
        
        if (nota >= 0 && nota <= 10) {
            conteoNotas[nota]++;
        }
    }
    
    int total = 0;
    for (int i = 0; i <= 10; i++) {
        total += conteoNotas[i];
    }
    
    cout << "\n=== ESTADISTICAS ===" << endl;
    cout << "Total de alumnos: " << total << endl;
    cout << fixed << setprecision(2);
    for (int nota = 0; nota <= 10; nota++) {
        double porcentaje = total > 0 ? 100.0 * conteoNotas[nota] / total : 0;
        cout << "Nota " << nota << ": " << porcentaje << "%" << endl;
    }
    
    return 0;
}
