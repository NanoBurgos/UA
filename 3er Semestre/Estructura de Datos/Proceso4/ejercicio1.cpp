#include <iostream>
using namespace std;

int main() {
    float costos[5]; // Vector para almacenar los costos
    float suma = 0; // Acumulador
    float promedio;

    cout << "Ingrese el costo de los tratamientos de 5 pacientes:" << endl;
    for (int i = 0; i < 5; i++) {
    cout << "Paciente " << i+1 << ": Gs";
    cin >> costos[i];
    suma += costos[i];
    }

    promedio = suma / 5;

    cout << "\n--- Reporte de costos ---" << endl;
    for (int i = 0; i < 5; i++) {
    cout << "Paciente " << i+1 << ": Gs" << costos[i] << endl;
    }

    cout << "Costo total: Gs" << suma << endl;
    cout << "Costo promedio: Gs" << promedio << endl;

    return 0;
}