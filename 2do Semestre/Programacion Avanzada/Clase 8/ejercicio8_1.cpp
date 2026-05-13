#include <iostream>

using namespace std;

int main() {
    int tipo, color;
    string nombreTipo, nombreColor;

    // Menú de tipos de carro
    cout << "===== MENU DE TIPOS DE CARRO =====" << endl;
    cout << "1. Auto" << endl;
    cout << "2. Camioneta" << endl;
    cout << "3. Vagoneta" << endl;
    cout << "Seleccione una opcion: ";
    cin >> tipo;

    // Evaluar tipo de carro
    switch(tipo) {
        case 1:
            nombreTipo = "Auto";
            break;
        case 2:
            nombreTipo = "Camioneta";
            break;
        case 3:
            nombreTipo = "Vagoneta";
            break;
        default:
            nombreTipo = "Tipo no valido";
    }

    // Menú de colores
    cout << "\n===== MENU DE COLORES =====" << endl;
    cout << "1. Negro" << endl;
    cout << "2. Blanco" << endl;
    cout << "3. Rojo" << endl;
    cout << "Seleccione un color: ";
    cin >> color;

    // Evaluar color
    switch(color) {
        case 1:
            nombreColor = "Negro";
            break;
        case 2:
            nombreColor = "Blanco";
            break;
        case 3:
            nombreColor = "Rojo";
            break;
        default:
            nombreColor = "Color no valido";
    }

    // Mostrar selección final
    cout << "\n===== SELECCION REALIZADA =====" << endl;
    cout << "Tipo de carro: " << nombreTipo << endl;
    cout << "Color: " << nombreColor << endl;

    return 0;
}