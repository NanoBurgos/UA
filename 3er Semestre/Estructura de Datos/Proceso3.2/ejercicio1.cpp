
#include<iostream>
#include<string>
using namespace std;

const int MAX = 5;
string pila[MAX];
int tope = -1; // pila vacia

// Funcion PUSH: insertar libro
void push(string libro){
    if(tope == MAX - 1){
        cout<<"Error: Overflow. La pila esta llena."<<endl;
    } else {
        pila[++tope] = libro;
        cout<<"Libro '"<<libro<<"' insertado en la pila."<<endl;
    }
}

// Funcion POP: eliminar libro
void pop(){
    if(tope == -1){
        cout<<"Error: Underflow. La pila esta vacia."<<endl;
    } else {
        cout<<"Libro eliminado: "<<pila[tope--]<<endl;
    }
}

// Funcion TOP: consultar el ultimo libro
void top(){
    if(tope == -1){
        cout<<"Error: Underflow. La pila esta vacia."<<endl;
    } else {
        cout<<"Libro en el TOPE: "<<pila[tope]<<endl;
    }
}

// Funcion MOSTRAR: recorrer la pila
void mostrar(){
    if(tope == -1){
        cout<<"Error: Underflow. La pila esta vacia."<<endl;
    } else {
        cout<<"\n--- Libros almacenados ---"<<endl;
        for(int i = tope; i >= 0; i--){
            cout<<pila[i]<<endl;
        }
    }
}

int main(){
    int opcion;
    string libro;

    do {
        cout<<"\n--- MENU BIBLIOTECA ---"<<endl;
        cout<<"1. Insertar libro (PUSH)"<<endl;
        cout<<"2. Eliminar libro (POP)"<<endl;
        cout<<"3. Consultar libro en el TOPE"<<endl;
        cout<<"4. Mostrar libros"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        cin.ignore();

        switch(opcion){
            case 1:
                cout<<"Ingrese el titulo del libro: ";
                getline(cin, libro);
                push(libro);
                break;

            case 2:
                pop();
                break;

            case 3:
                top();
                break;

            case 4:
                mostrar();
                break;

            case 5:
                cout<<"Saliendo del programa..."<<endl;
                break;

            default:
                cout<<"Opcion invalida."<<endl;
        }

    } while(opcion != 5);

    return 0;
}
