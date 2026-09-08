#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad, totalPersonas = 0, hombres = 0, mujeres = 0;
    int sumaEdadHombres = 0, sumaEdadMujeres = 0;
    int menorEdad = 999; // valor inicial alto
    string sexo;

    cout << "Ingrese edad y sexo (M/F). Edad 0 para terminar." << endl;

    while (true) {
    cout << "Edad: ";
    cin >> edad;
    if (edad == 0) break; // condición de salida

    if (edad < 18) {
    cout << "Acceso denegado (menor de edad)." << endl;
    continue;
    }

    cout << "Sexo (M/F): ";
    cin >> sexo;

    totalPersonas++;

    if (sexo == "M" || sexo == "m") {
    hombres++;
    sumaEdadHombres += edad;
    } else if (sexo == "F" || sexo == "f") {
    mujeres++;
    sumaEdadMujeres += edad;
    }

    if (edad < menorEdad) menorEdad = edad;
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Total asistentes: " << totalPersonas << endl;
    cout << "Hombres: " << hombres << endl;
    cout << "Mujeres: " << mujeres << endl;

    if (hombres > 0) {
    cout << "Promedio edad hombres: " << (sumaEdadHombres / (double)hombres) << endl;
    if (mujeres > 0) {
    cout << "Promedio edad mujeres: " << (sumaEdadMujeres / (double)mujeres) << endl;
    }

    if (totalPersonas > 0) {
    cout << "Edad mas joven: " << menorEdad << endl;

    return 0;
    }
    }
}