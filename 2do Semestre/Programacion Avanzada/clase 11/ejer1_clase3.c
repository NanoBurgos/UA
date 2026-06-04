/*Estructura de Datos: un aeropuerto necesita un programa que realice las sgts funciones:
1 Agregar pasajeros (se incluiran datos personales y el destino el cual se selecciona)
2 Listar pasajeros
3 Eliminar Pasajeros
4 Opcion de Salir
*/

#include<stdio.h> //biblioteca standar
#include<stdlib.h> //biblioteca para listas
#include<string.h> //bibliteca para cadena de caracteres

//Definicion de estructura "Pasajero"
struct Pasajero {
    char nombre[50];
    char apellido[50];
    int edad;
    char destino[50];
};

//Funcion que imprime un pasajero: La funcion toma un objeto "Pasajero" como argumento e imprime sus detalles en la consola
void imprimirPasajero(struct Pasajero p){
    printf("Nombre: %s\n", p.nombre);
    printf("Apellido: %s\n", p.apellido);
    printf("Edad: %s\n", p.edad);
    printf("Destino: %s\n", p.destino);
    printf("\n");
}

int main(){
    system("color 7D"); //para cambiar el conlor de la consola y el texto
    //Declaracion de la lista de pasajero
    struct Pasajero listaPasajero[5]; //suponemos un maximo de 100 pasajeros
    int numPasajero = 0; //contador de pasajeros
    int opcion;
    printf("BIENVENIDO AL SISTEMA DE REGISTROS DEL AEROPUERTO INTERNACIONAL SILVIO PETIROSSI \n");

    do{



    }while(opcion != 4);

    return 0;
}