#include<iostream>
using namespace std;
int main(){
    int pila[5];
    int tope = -1; //pila vacia
    int n, elemento;

    //insertar elementos(PUSH)
    cout<<"¿Cuantos elementos desea insertar en la Pila? (max 5) : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese el elemento "<<i+1<<" : ";
        cin>>elemento;
        pila[++tope] = elemento;
    }

    //mostrar pila actual
    cout<<"\nPila actual: ";
    for(int i=tope; i>=0; i--){
        cout<<pila[i]<<" ";
    }
    cout<<endl;

    //Eliminar un elemento (POP)
    if (tope>=0){
        cout<<"\nElemento eliminado: "<<pila[tope--]<<endl;
    }else{
        cout<<"\nLa pila esta vacia, no se puede eliminar. "<<endl;
    }

    //Mostrar la pila final
    cout<<"\nPila final: ";
    for(int i= tope; i>=0; i--){
        cout<<pila[i]<<" ";
    }
    cout<<endl;

    return 0;
}