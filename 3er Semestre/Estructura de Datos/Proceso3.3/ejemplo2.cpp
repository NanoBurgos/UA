#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    queue<Persona> cola;
    vector<Persona> listadoA; // menores o igual a 18
    vector<Persona> listadoB; // mayores de 18
    int opcion;

    do {
        cout << "\n--- MENU COLA ---" << endl;
        cout << "1. Ingresar persona" << endl;
        cout << "2. Atender persona y clasificar" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Salir y mostrar resultados" << endl;
        cout << "Seleccione una opción: ";

        cin >> opcion;

        switch(opcion) {
            case 1: {
                Persona p;
                cout << "Ingrese nombre: ";
                cin >> p.nombre;
                cout << "Ingrese edad: ";
                cin >> p.edad;
                cola.push(p);
                cout << "Persona agregada a la cola." << endl;
                break;
            }

            case 2:
                if (!cola.empty()) {
                    Persona p = cola.front();
                    cola.pop();
                    cout << "Atendiendo a: " << p.nombre << endl;
                    if (p.edad <= 18) {
                        listadoA.push_back(p);
                        cout << p.nombre << " Atendido en listado A." << endl;
                    } else {
                        listadoB.push_back(p);
                        cout << p.nombre << " Atendido en listado B." << endl;
                    }
                } else {
                    cout << "la cola está vacía." << endl;
                }
                break;

            case 3: {
                cout << "Cola actual: ";
                queue<Persona> temp = cola;
                while (!temp.empty()) {
                    cout << temp.front().nombre << " (" << temp.front().edad <<
                    ") ";
                    temp.pop();
                }
                cout << endl;
                break;
            }

            case 4:
                cout << "\n--- Resultados finales ---" << endl;
                cout << "Listado A (<=18 años): " << listadoA.size() << " "
                "personas" << endl;
                for (auto &p : listadoA) {
                    cout << "- " << p.nombre << " (" << p.edad << ")" << endl;
                }
                cout << "Listado B (>18 años): " << listadoB.size() << " "
                "personas" << endl;
                for (auto &p : listadoB) {
                    cout << "- " << p.nombre << " (" << p.edad << ")" << endl;
                }
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while(opcion != 4);

    return 0;
}