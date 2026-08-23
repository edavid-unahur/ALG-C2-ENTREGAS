/*
 * EJERCICIO 12: Convertir segundos a dias, horas, minutos y segundos
 * 
 * Enunciado:
 * Pasar un periodo expresado en segundos a un periodo expresado en:
 * dias, horas, minutos y segundos.
 * 
 * Conversiones:
 * 1 minuto = 60 segundos
 * 1 hora = 3600 segundos
 * 1 dia = 86400 segundos
 * 
 * Ejemplo:
 * Entrada: 90061 segundos
 * Salida: 1 dia, 1 hora, 1 minuto, 1 segundo
 * 
 * Complejidad: O(1) - solo divisiones y modulos
 */

#include <iostream>
using namespace std;

int main() {
    int totalSegundos;
    
    cout << "Ingrese cantidad de segundos: ";
    cin >> totalSegundos;
    
    int dias = totalSegundos / 86400;
    int resto = totalSegundos % 86400;
    
    int horas = resto / 3600;
    resto = resto % 3600;
    
    int minutos = resto / 60;
    int segundos = resto % 60;
    
    cout << "\nConversion:" << endl;
    cout << dias << " dias, ";
    cout << horas << " horas, ";
    cout << minutos << " minutos, ";
    cout << segundos << " segundos" << endl;
    
    return 0;
}
