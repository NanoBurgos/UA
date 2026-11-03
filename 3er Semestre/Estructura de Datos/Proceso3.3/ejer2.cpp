
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> cola;
    int opcion;

    string nombre, buscar;
    int posicion;
    bool encontrado;

    do {
        cout << "\n--- MENU ATENCION ---" << endl;
        cout << "1. Ingresar persona" << endl;
        cout << "2. Atender persona" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Buscar persona" << endl;
        cout << "5. Salir" << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese nombre: ";
                cin >> nombre;

                cola.push(nombre);
                cout << "Persona agregada a la cola." << endl;
                break;

            case 2:
                if (!cola.empty()) {
                    cout << "Atendiendo a: " << cola.front() << endl;
                    cola.pop();
                } else {
                    cout << "La cola esta vacia." << endl;
                }
                break;

            case 3: {
                cout << "\n--- Cola actual ---" << endl;

                queue<string> temp = cola;

                while (!temp.empty()) {
                    cout << temp.front() << endl;
                    temp.pop();
                }
                break;
            }

            case 4: {
                cout << "Ingrese nombre a buscar: ";
                cin >> buscar;

                queue<string> temp = cola;
                posicion = 1;
                encontrado = false;

                while (!temp.empty()) {
                    if (temp.front() == buscar) {
                        cout << "Persona encontrada: " << buscar << endl;
                        cout << "Sera atendida en la posicion: " << posicion << endl;
                        encontrado = true;
                        break;
                    }

                    temp.pop();
                    posicion++;
                }

                if (!encontrado) {
                    cout << "Error: Persona no encontrada." << endl;
                }
                break;
            }

            case 5:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while(opcion != 5);

    return 0;
}
