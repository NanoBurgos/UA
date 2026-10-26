#include<iostream>
#include<string>
using namespace std;

struct Alumno{
    int legajo;
    string nombre;
    int edad;
    Alumno* siguiente;
};

void insertarAlumno(Alumno*& cabeza, int legajo, string nombre, int edad){
    Alumno* nuevo = new Alumno();
    nuevo -> legajo = legajo;
    nuevo -> nombre = nombre;
    nuevo -> edad = edad;
    nuevo -> siguiente = nullptr;

    if( cabeza == nullptr){
        cabeza = nuevo;
    } else {
        Alumno* actual = cabeza;
        while(actual -> siguiente != nullptr){
            actual = actual -> siguiente;
        }
        actual -> siguiente = nuevo;
    }
}

void mostarAlumnos(Alumno* cabeza){
    cout<<"\n--- Lista de Alumnos ---"<<endl;
    Alumno* actual = cabeza;
    while(actual != nullptr){
        cout<<"Legajo: "<< actual -> legajo
            <<" | Nombre: "<< actual -> nombre
            <<" | Edad: "<<actual -> edad <<endl;
            actual = actual -> siguiente;
    }
}

int main(){
    Alumno* lista = nullptr;
    int n;

    cout<<"Cuantos alumnos desea Registrar? ";
    cin>>n;
    cin.ignore(); //limpiar buffer despues de leer numero;

    for(int i= 0; i<n; i++){
        int legajo, edad;
        string nombre;

        cout<<"\nAlumno "<<i+1<<endl;
        cout<<"Legajo: ";
        cin>>legajo;
        cin.ignore(); //limpiar buffer despues de leer numero;

        cout<<"Nombre: ";
        getline(cin, nombre);

        cout<<"Edad: ";
        cin>>edad;
        cin.ignore(); //limpiar buffer

        insertarAlumno(lista, legajo, nombre, edad);
    }

    mostarAlumnos(lista);

    return 0;

}