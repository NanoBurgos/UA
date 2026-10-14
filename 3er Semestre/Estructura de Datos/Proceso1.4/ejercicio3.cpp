#include <iostream>
using namespace std;

int main() {
    int parcial1, parcial2, finalExam, total;
    int calificacion;

    cout << "Ingrese la nota del primer parcial (0-25): ";
    cin >> parcial1;
    cout << "Ingrese la nota del segundo parcial (0-25): ";
    cin >> parcial2;
    cout << "Ingrese la nota del examen final (0-50): ";
    cin >> finalExam;

    // Validación de rangos
    if (parcial1 > 25 || parcial2 > 25 || finalExam > 50) {
    cout << "Error: puntajes fuera de rango." << endl;
    return 0;
    }

    total = parcial1 + parcial2 + finalExam;

    // Determinar calificación
    if (total < 60) calificacion = 1;
    else if (total < 70) calificacion = 2;
    else if (total < 80) calificacion = 3;
    else if (total < 90) calificacion = 4;
    else calificacion = 5;

    cout << "\nNota total: " << total << endl;
    cout << "Calificación: " << calificacion << endl;

    return 0;
}