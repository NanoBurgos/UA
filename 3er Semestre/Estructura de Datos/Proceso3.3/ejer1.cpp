
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> colaSOP;
    queue<string> colaFAC;
    queue<string> colaVEN;

    int opcion, contadorSOP=1, contadorFAC=1, contadorVEN=1;

    do {
        cout << "\n--- MENU CALL CENTER ---" << endl;
        cout << "1. Generar turno Soporte Tecnico" << endl;
        cout << "2. Generar turno Facturacion" << endl;
        cout << "3. Generar turno Ventas" << endl;
        cout << "4. Atender turno Soporte Tecnico" << endl;
        cout << "5. Atender turno Facturacion" << endl;
        cout << "6. Atender turno Ventas" << endl;
        cout << "7. Mostrar estado de las colas" << endl;
        cout << "8. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                colaSOP.push("SOP-" + to_string(contadorSOP++));
                cout << "Turno generado en Soporte Tecnico" << endl;
                break;

            case 2:
                colaFAC.push("FAC-" + to_string(contadorFAC++));
                cout << "Turno generado en Facturacion" << endl;
                break;

            case 3:
                colaVEN.push("VEN-" + to_string(contadorVEN++));
                cout << "Turno generado en Ventas" << endl;
                break;

            case 4:
                if (!colaSOP.empty()) {
                    cout << "Atendiendo: " << colaSOP.front() << endl;
                    colaSOP.pop();
                } else {
                    cout << "No hay llamadas en Soporte Tecnico" << endl;
                }
                break;

            case 5:
                if (!colaFAC.empty()) {
                    cout << "Atendiendo: " << colaFAC.front() << endl;
                    colaFAC.pop();
                } else {
                    cout << "No hay llamadas en Facturacion" << endl;
                }
                break;

            case 6:
                if (!colaVEN.empty()) {
                    cout << "Atendiendo: " << colaVEN.front() << endl;
                    colaVEN.pop();
                } else {
                    cout << "No hay llamadas en Ventas" << endl;
                }
                break;

            case 7:
                cout << "\n--- Estado de las colas ---" << endl;
                cout << "Soporte Tecnico pendientes: " << colaSOP.size() << endl;
                cout << "Facturacion pendientes: " << colaFAC.size() << endl;
                cout << "Ventas pendientes: " << colaVEN.size() << endl;
                break;

            case 8:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
        }

    } while(opcion != 8);

    return 0;
}
