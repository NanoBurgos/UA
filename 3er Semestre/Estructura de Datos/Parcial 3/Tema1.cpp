#include <iostream>
using namespace std;

const int MAX = 5;
int pila[MAX];
int tope = -1; // pila vacia

// Funcion PUSH: insertar elemento
void push(int elemento) {
    if (tope == MAX - 1) {
        cout << "Error: Overflow. La pila esta llena." << endl;
    } else {
        pila[++tope] = elemento;
        cout << "Caja " << elemento << " insertada en la pila." << endl;
    }
}

// Funcion POP: eliminar elemento
void pop() {
    if (tope == -1) {
        cout << "Error: Underflow. La pila de cajas esta vacia." << endl;
    } else {
        cout << "Caja eliminada: " << pila[tope--] << endl;
    }
}

// Funcion TOP: devuelve el ultimo elemento
int top() {
    if (tope == -1) {
        cout << "Error: La pila esta vacia." << endl;
        return -1;
    } else {
        return pila[tope];
    }
}

// Funcion MOSTRAR: recorrer la pila
void mostrar() {
    if (tope == -1) {
        cout << "La pila esta vacia." << endl;
    } else {
        cout << "Contenido de la pila: ";
        for (int i = tope; i >= 0; i--) {
            cout << pila[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int opcion, codigo;
    
    cout<<"========================================="<<endl;
	cout<<"  SISTEMA DE ALMACENAMIENTO DE CAJAS "<<endl;
	cout<<"========================================="<<endl;

    do {
        cout << "\n--- MENU PILA ---" << endl;
        cout << "1. Insertar Caja (PUSH)" << endl;
        cout << "2. Eliminar Caja(POP)" << endl;
        cout << "3. Consultar caja en el TOPE " << endl;
        cout << "4. Mostrar todas las cajas almacenadas en la pila" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el codigo de la caja a insertar: ";
                cin >> codigo;
                push(codigo);
                break;

            case 2:
                pop();
                break;

            case 3:
                if (top() != -1)
                    cout << "Codigo de la Caja en el TOPE: " << top() << endl;
                break;

            case 4:
                mostrar();
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while(opcion != 5);

    return 0;
}