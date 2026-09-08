#include <iostream>
#include <string>
using namespace std;

int main() {
    string actividades[3] = {"Ciberseguridad", "Bases de Datos", "Delitos Informaticos"};
    int asistencia[3]; // vector para asistentes por día
    int mayor = 0, diaMayor = 0;

    cout << "Ingrese la cantidad de asistentes a cada actividad:" << endl;

    // Cargar datos
    for (int d = 0; d < 3; d++) {
    cout << "Día " << d+1 << " - " << actividades[d] << " : ";
    cin >> asistencia[d];
    }

    // Mostrar tabla
    cout << "\n--- Tabla de asistencia ---" << endl;
    for (int d = 0; d < 3; d++) {
    cout << "Día " << d+1 << " (" << actividades[d] << ") : ";
    cout << asistencia[d] << " asistentes" << endl;
    }

    // Calcular día con mayor participación
    for (int d = 0; d < 3; d++) {
    if (asistencia[d] > mayor) {
    mayor = asistencia[d];
    diaMayor = d;
    }
    }

    cout << "\nEl dia con mayor participacion fue el Dia "
    << diaMayor+1 << " (" << actividades[diaMayor]
    << ") con " << mayor << " asistentes." << endl;

    return 0;
}