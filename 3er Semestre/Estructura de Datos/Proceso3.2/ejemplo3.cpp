
#include <iostream>
using namespace std;

const int MAX = 5;
int pila[MAX];
int tope = -1; // pila vacía

// Función PUSH: insertar elemento
void push(int elemento) {
    if (tope == MAX - 1) {
        cout << "Error: Overflow. La pila está llena." << endl;
    } else {
        pila[++tope] = elemento;
        cout << "Elemento " << elemento << " insertado en la pila." << endl;
    }
}

// Función POP: eliminar elemento
void pop() {
    if (tope == -1) {
        cout << "Error: Underflow. La pila está vacía." << endl;
    } else {
        cout << "Elemento eliminado: " << pila[tope--] << endl;
    }
}

// Función TOP: devuelve el último elemento
int top() {
    if (tope == -1) {
        cout << "Error: La pila está vacía." << endl;
        return -1;
    } else {
        return pila[tope];
    }
}

// Función MOSTRAR: recorrer la pila
void mostrar() {
    if (tope == -1) {
        cout << "La pila está vacía." << endl;
    } else {
        cout << "Contenido de la pila: ";
        for (int i = tope; i >= 0; i--) {
            cout << pila[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int opcion, elemento;

    do {
        cout << "\n--- MENU PILA ---" << endl;
        cout << "1. Insertar (PUSH)" << endl;
        cout << "2. Eliminar (POP)" << endl;
        cout << "3. Consultar TOPE" << endl;
        cout << "4. Mostrar pila" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el elemento a insertar: ";
                cin >> elemento;
                push(elemento);
                break;

            case 2:
                pop();
                break;

            case 3:
                if (top() != -1)
                    cout << "Elemento en el TOPE: " << top() << endl;
                break;

            case 4:
                mostrar();
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción inválida." << endl;
        }

    } while(opcion != 5);

    return 0;
}
