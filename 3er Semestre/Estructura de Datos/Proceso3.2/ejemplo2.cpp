/*Ejemplo 2:  Aquí sí definimos funciones auxiliares (push, pop, mostrar). Esto es parte de la modularización: separar el código en bloques reutilizables y 
claros */
#include<iostream>
using namespace std;

const int MAX = 5; //tamaño maximo de pila
int pila[MAX];
int tope = -1; //pila vacia

//Funcion PUSH: insertar elemento
void push(int elemento){
    if(tope == MAX -1){
        cout<<"Error: Overflow. La pila esta llena"<<endl;
    } else {
        pila[++tope] = elemento;
        cout<<"Elemento "<<elemento<<" insertado en la pila"<<endl;
    }
}

//Funcion MOSTRAR: recorrer la pila
void mostrar(){
    if(tope == -1){
        cout<<"La pila esta vacia"<<endl;
}else{
    cout<<"Contenido de la pila: ";
    for(int i= tope; i>=0; i--){
        cout<<pila[i]<<" ";
    }
    cout<<endl;
}
}

int main(){

    int n, elemento;

    cout<<"Cuantos elementos desea insertar en la pila? ("<<MAX<<"):";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese el elemnto "<<i+1<<" : ";
        cin>>elemento;
        push(elemento); //intento de insercion
    }

    //mostrar la pila final
    cout<<"\nEstado final de la pila: "<<endl;
    mostrar();

    return 0;
}