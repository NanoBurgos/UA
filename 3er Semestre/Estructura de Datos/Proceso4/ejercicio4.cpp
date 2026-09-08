#include <iostream>
#include <string>
using namespace std;

int main() {
    string cliente;
    float largo, ancho, superficie, montoTotal, descuento, montoFinal;
    const float costoM2 = 15; // dolares

    cout << "Ingrese el nombre del cliente: ";
    getline(cin, cliente);

    cout << "Ingrese el largo de la cancha (m): ";
    cin >> largo;
    cout << "Ingrese el ancho de la cancha (m): ";
    cin >> ancho;

    superficie = largo * ancho;
    montoTotal = superficie * costoM2;

    // Calcular descuento
    if (superficie < 40) {
    descuento = 0;
    } else if (superficie < 60) {
    descuento = montoTotal * 0.10;
    } else {
    descuento = montoTotal * 0.15;
    }

    montoFinal = montoTotal - descuento;

    // Mostrar resultados
    cout << "\n--- Presupuesto ---" << endl;
    cout << "Cliente: " << cliente << endl;
    cout << "Superficie: " << superficie << " m²" << endl;
    cout << "Monto total: " << montoTotal << "$" << endl;
    cout << "Descuento: " << descuento << " $" << endl;
    cout << "Monto final a pagar: " << montoFinal << "$" << endl;

    return 0;
}