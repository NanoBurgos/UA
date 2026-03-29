/*4- Crear un programa que pida al usuario ingresar por teclado cierta cantidad de números, y mostrar cuantos números pares y cuantos números impares ingresaron. 
Esto se debe repetir hasta que el usuario ingrese el número cero.*/
#include <stdio.h>

int main(){
    int numero, pares = 0, impares = 0;

    /*Pedimos numeros al usuario hasta que ingrese cero*/
    do {
        printf("Ingrese un numero (0 para terminar): ");
        scanf("%d", &numero);

        /*Clasificamos el numero solo si no es cero*/
        if(numero != 0){
            if(numero % 2 == 0){
                pares++;
            } else {
                impares++;
            }
        }
    } while(numero != 0);

    /*Mostramos la cantidad de pares e impares ingresados*/
    printf("\nCantidad de numeros pares  : %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);

    return 0;
}