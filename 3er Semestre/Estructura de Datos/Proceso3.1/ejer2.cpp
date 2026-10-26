
#include<iostream>
#include<string>
using namespace std;

struct Cliente{
    int numeroCuenta;
    string nombre;
    double saldo;
    Cliente* siguiente;
};

void insertarCliente(Cliente*& cabeza, int numeroCuenta, string nombre, double saldo){
    Cliente* nuevo = new Cliente();
    nuevo -> numeroCuenta = numeroCuenta;
    nuevo -> nombre = nombre;
    nuevo -> saldo = saldo;
    nuevo -> siguiente = nullptr;

    if(cabeza == nullptr){
        cabeza = nuevo;
    } else {
        Cliente* actual = cabeza;
        while(actual -> siguiente != nullptr){
            actual = actual -> siguiente;
        }
        actual -> siguiente = nuevo;
    }
}

void mostrarClientes(Cliente* cabeza){
    cout<<"\n--- Lista de Clientes del Banco ---"<<endl;
    Cliente* actual = cabeza;

    while(actual != nullptr){
        cout<<"Numero de Cuenta: "<<actual -> numeroCuenta
            <<" | Nombre: "<<actual -> nombre
            <<" | Saldo: "<<actual -> saldo<<" Gs."<<endl;

        actual = actual -> siguiente;
    }
}

int main(){
    Cliente* lista = nullptr;
    int n;

    cout<<"Cuantos clientes desea registrar? ";
    cin>>n;
    cin.ignore();

    for(int i = 0; i<n; i++){
        int numeroCuenta;
        double saldo;
        string nombre;

        cout<<"\nCliente "<<i+1<<endl;

        cout<<"Numero de Cuenta: ";
        cin>>numeroCuenta;
        cin.ignore();

        cout<<"Nombre: ";
        getline(cin, nombre);

        cout<<"Saldo: ";
        cin>>saldo;
        cin.ignore();

        insertarCliente(lista, numeroCuenta, nombre, saldo);
    }

    mostrarClientes(lista);

    return 0;
}
